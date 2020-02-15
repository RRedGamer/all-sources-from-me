#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

int maxBar[4], currentBar[4];
string level[4];

int TimerSystem(int Mode);
void AFK();
void displayBar(int maxBar, int currentBar);
void AdjustStats(int AdjustedLevel, int AdjustedAmt);

int main()
{
	int i = 0;
	fstream emotionFile;
	string response;
	bool valid = false;

	cout << left;
	emotionFile.open("emotionStates.txt", fstream::in);
	if (!emotionFile)	cout << "Error accessing file.\n";
	else
	{
		while (!emotionFile.eof())
		{
			emotionFile >> level[i] >> maxBar[i] >> currentBar[i];
			if (emotionFile.fail())	break;
			cout << setw(15) << level[i];
			displayBar(maxBar[i], currentBar[i]);
			i++;
		}
		emotionFile.close();
	}
	AFK();
	cout << "Do you want to play with the pet? (Y/N)\t";
	cin >> response;

	while (valid == false)
	{
		if (response == "Y")
		{
			AdjustStats(0, 1);
			AdjustStats(3, 1);
			valid = true;
		}
		else if (response == "N")
		{
			AdjustStats(0, -1);
			AdjustStats(3, -1);
			valid = true;
		}
		else
		{
			cout << "Invalid response given\n";
			cout << "Do you want to play with the pet?\t";
			cin >> response;
		}
	}

	for (int i = 0; i <= 3; i++)
	{
		cout << setw(15) << level[i];
		displayBar(maxBar[i], currentBar[i]);
	}
	emotionFile.open("emotionStates.txt", fstream::out);
	for (int i = 0; i <= 3; i++)
	{
		emotionFile << level[i] << " " << maxBar[i] << " " << currentBar[i] << endl;
	}
	emotionFile.close();

	system("pause");
	return 0;
}

int TimerSystem(int Mode)
{
	int CurrentTimeStamp, PreviousTimeStamp, TimeElapsed, TurnsElapsed, CurrentTurn;
	time_t TimeStamp; //datatype we need for storing time
	fstream TimeCheck;
	TimeCheck.open("TimeStamp.txt", fstream::in);

	if (!TimeCheck)
		cout << "Failed to retrive file" << endl;
	else
	{
		TimeCheck >> PreviousTimeStamp >> CurrentTurn;
	}
	TimeCheck.close();

	system_clock::time_point tp = system_clock::now(); //obtains current timepoint for reference
	system_clock::duration dtn = tp.time_since_epoch(); //obtains the lapsed time since epoch (Jan 01 1970 00:00)

	TimeStamp = dtn.count() * system_clock::period::num / system_clock::period::den; //converts the lapsed time in periods to seconds, and stores it in TimeStamp
	CurrentTimeStamp = TimeStamp;
	
	TimeElapsed = CurrentTimeStamp - PreviousTimeStamp;
	TurnsElapsed = TimeElapsed / 3600;
	
	if (Mode == 1)
		CurrentTurn += TurnsElapsed;
	if (Mode == 2)
		return CurrentTurn;
	else if (Mode == 3)
		CurrentTurn++;
		
	TimeCheck.open("TimeStamp.txt", fstream::out);

	if (!TimeCheck)
		cout << "error overwritting previous timestamp!" << endl;
	else
		TimeCheck << CurrentTimeStamp << " " << CurrentTurn;

	TimeCheck.close();

	if (Mode == 1)
		return TurnsElapsed;
	else if (Mode == 3)
		return CurrentTurn;
}

void AFK()
{
	int StatChoice, TurnsElapsed, HappinessDecrease = 0, FoodDecrease = 0, WaterDecrease = 0, CleanlinessDecrease = 0;
	srand(time(NULL));

	TurnsElapsed = TimerSystem(1);

	if (TurnsElapsed == 0)
		return;

	for (int i = 0; i < TurnsElapsed; i++)
	{
		StatChoice = rand() % 4;
		AdjustStats(StatChoice, -1);

		if (StatChoice == 0)
			HappinessDecrease++;
		else if (StatChoice == 1)
			FoodDecrease++;
		else if (StatChoice == 2)
			WaterDecrease++;
		else if (StatChoice == 3)
			CleanlinessDecrease++;
	}

	cout << "While you were away, " << TurnsElapsed << " turn(s) have passed and your pet's ";
	if (HappinessDecrease != 0)
		cout << "happiness dropped by " << HappinessDecrease;
	if (FoodDecrease != 0)
	{
		if (HappinessDecrease != 0)
		{
			if (WaterDecrease == 0 && CleanlinessDecrease == 0)
				cout << " & ";
			else
				cout << ", ";
		}
		cout << "food dropped by " << FoodDecrease;
	}
	if (WaterDecrease != 0)
	{
		if (HappinessDecrease != 0 || FoodDecrease != 0)
		{
			if (CleanlinessDecrease == 0)
				cout << " & ";
			else 
				cout << ", ";
		}
		cout << "water dropped by " << WaterDecrease;
	}
	if (CleanlinessDecrease != 0)
	{
		if (HappinessDecrease != 0 || FoodDecrease != 0 || WaterDecrease != 0)
			cout << " & ";
		cout << "cleanliness dropped by " << CleanlinessDecrease;
	}

	cout << endl;
	return;
}

void displayBar(int maxBar, int currentBar)
{
	cout << "[";
	for (int i = 0; i < currentBar; i++)			cout << "=";
	for (int j = 0; j < maxBar - currentBar; j++)	cout << " ";
	cout << "]\n";
}

void AdjustStats(int AdjustedLevel, int AdjustedAmt)
{
	if (AdjustedAmt <= maxBar[AdjustedLevel])
		currentBar[AdjustedLevel] += AdjustedAmt;

	if (currentBar[AdjustedLevel] > 10)
		currentBar[AdjustedLevel] = 10;
	else if (currentBar[AdjustedLevel] < 0)
		currentBar[AdjustedLevel] = 0;
}
