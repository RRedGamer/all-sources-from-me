#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void NewGame();
void ContinueGame();
void LearnCpp();
void DialogueProcessor(char ChpNum, string name);
void GameOver();
bool ChoiceProcessor(string choice);
int Chap1();
int Chap2();
int Chap3();
int Chap4();
int Chap5();
int Chap6();
int Chap7();
int Chap8();
int Chap9();
int Chap10();

int main()
{
	string selection = "0";

	//Game Startup
	cout << "this game is meant to be played in the current window size" << endl;
	Sleep(5000);
	cout << "please do not minimise or maximise the window" << endl;
	Sleep(5000);
	system("cls");
	Sleep(1000);

	//Title Screen
	Sleep(400);
	cout << "          __________                            ____  ___                                                        ____" << endl;
	Sleep(400);
	cout << "         /__    ___/  ________   ________      /    |/   |     __________     _________   ___   ___   ________  /_  /" << endl;
	Sleep(400);
	cout << "           /   /     /  ___  /  /  _____/     /          |    /  ___    /    /  ___   /  /  /  /  /  /  _____/   /_/ " << endl;
	Sleep(400);
	cout << "          /   /     /  _____/  /  /____      /  /|   /|  |   /  /__/    |   /  /__/  /  /  /__/  /  /_____  /        " << endl;
	Sleep(400);
	cout << "         /___/     /_______>  /_______/     /__/ |__/ |__|  /________/|_|  /_____   /  /________/  /_______/         " << endl;
	Sleep(400);
	cout << "                                                                          ______/  /                                 " << endl;
	Sleep(400);
	cout << "                                                                         /________/                                  " << endl;
	Sleep(400);
	cout << "      ______                                                  ____                                     ____          " << endl;
	Sleep(400);
	cout << "     /  _   |     ________   ________   ____   ________   ___/   /__   __________     __ _______   ___/   /__        " << endl;
	Sleep(400);
	cout << "    /  /_|  |    /  _____/  /  _____/  /   /  /  _____/  /__    ___/  /  ___    /    / // __   /  /__    ___/        " << endl;
	Sleep(400);
	cout << "   /  ___   |   /_____  /  /_____  /  /   /  /_____  /     /   /     /  /__/    |   /    / /  /     /   /            " << endl;
	Sleep(400);
	cout << "  /__/   |__|  /_______/  /_______/  /___/  /_______/     /___/     /________/|_|  /____/ /__/     /___/             " << endl;
	Sleep(400);

	system("color 87");
	Sleep(50);
	system("color f1");
	system("cls");
	Sleep(3000);
	system("color 8f");

	cout << "     +    __________       +           *        ____  ___        *                +        +           *         ____" << endl;
	cout << "         /__    ___/  ________   ________      /    |/   |     __________     _________   ___   ___ . ________ +/_  /" << endl;
	cout << "       .   /   /     /  ___  /  /  _____/     /          |    /  ___    /    /  ___   /  /  /  /  /  /  _____/   /_/ " << endl;
	cout << "    .     /   / +   /  _____/  /  /____   *  /  /|   /|  |   /  /__/    |   /  /__/  /  /  /__/  /  /_____  /  .     " << endl;
	cout << "         /___/     /_______>  /_______/     /__/ |__/ |__|  /________/|_|  /_____   /  /________/  /_______/ .       " << endl;
	cout << "       *       .       .        *       +         .       *               ______/  /            .               .    " << endl;
	cout << "   .                                +                  .         .       /________/     +                 .          " << endl;
	cout << "      ______ .           +                     +              ____     .              .     *          ____     +    " << endl;
	cout << "     /  _   |     ________ . ________   ____ + ________   ___/   /__   __________ *   __ _______ + ___/   /__ .      " << endl;
	cout << "    /  /_|  |    /  _____/  /  _____/. /   /  /  _____/  /__    ___/  /  ___    /    / // __   /  /__    ___/        " << endl;
	cout << "   /  ___   |+  /_____  /  /_____  / ./   /  /_____  /  .  /   /     /  /__/    |   /    / /  /   . /   / .          " << endl;
	cout << "  /__/   |__|  /_______/ +/_______/  /___/  /_______/     /___/   + /________/|_|  /____/ /__/     /___/     *       " << endl;
	cout << " *  .     +          .         *      .          +            .      .          +        .    .        +             " << endl;
	Sleep(500);
	system("color 0f");
	Sleep(1000);
	cout << endl;
	cout << "                                               An educational game about C++                                            " << endl;
	Sleep(3000);
	cout << endl << endl;
	cout << "                                                   1. N e w   G a m e                                                   " << endl;
	cout << "                                                   2. C o n t i n u e                                                   " << endl;
	cout << "                                                   3.    L e a r n                                                      " << endl;
	cout << "                                                   4.     Q u i t                                                       " << endl;
	Sleep(1000);

	while (selection != "4")
	{
		system("cls");
		cout << "     +    __________       +           *        ____  ___        *                +        +           *         ____" << endl;
		cout << "         /__    ___/  ________   ________      /    |/   |     __________     _________   ___   ___ . ________ +/_  /" << endl;
		cout << "       .   /   /     /  ___  /  /  _____/     /          |    /  ___    /    /  ___   /  /  /  /  /  /  _____/   /_/" << endl;
		cout << "    .     /   / +   /  _____/  /  /____   *  /  /|   /|  |   /  /__/    |   /  /__/  /  /  /__/  /  /_____  /  ." << endl;
		cout << "         /___/     /_______>  /_______/     /__/ |__/ |__|  /________/|_|  /_____   /  /________/  /_______/ ." << endl;
		cout << "       *       .       .        *       +         .       *               ______/  /            .               ." << endl;
		cout << "   .                                +                  .         .       /________/     +                 ." << endl;
		cout << "      ______ .           +                     +              ____     .              .     *          ____     +" << endl;
		cout << "     /  _   |     ________ . ________   ____ + ________   ___/   /__   __________ *   __ _______ + ___/   /__ ." << endl;
		cout << "    /  /_|  |    /  _____/  /  _____/. /   /  /  _____/  /__    ___/  /  ___    /    / // __   /  /__    ___/" << endl;
		cout << "   /  ___   |+  /_____  /  /_____  / ./   /  /_____  /  .  /   /     /  /__/    |   /    / /  /   . /   / ." << endl;
		cout << "  /__/   |__|  /_______/ +/_______/  /___/  /_______/     /___/   + /________/|_|  /____/ /__/     /___/     *" << endl;
		cout << " *  .     +          .         *      .          +            .      .          +        .    .        +" << endl;
		cout << "\n                                               An educational game about C++\n\n" << endl;
		cout << "                                                   1. N e w   G a m e\n";
		cout << "                                                   2. C o n t i n u e\n";
		cout << "                                                   3.    L e a r n\n";
		cout << "                                                   4.     Q u i t\n\n";
		cout << "                                              Enter Number to select option: ";
		getline(cin, selection);

		if (selection == "1")
		{
			system("CLS");
			NewGame();
		}
		else if (selection == "2")
		{
			system("CLS");
			ContinueGame();
		}
		else if (selection == "3")
		{
			system("CLS");
			LearnCpp();
		}
		else if (selection == "4")
		{
			break;
		}
		else
		{
			cout << "                                             Error computing...please try again";
			Sleep(1200);
		}






	}

	system("cls");
	cout << "Game closing";
	Sleep(800);
	cout << ".";
	Sleep(800);
	cout << ".";
	Sleep(800);
	cout << ".";
	Sleep(800);
	return 0;
}

void NewGame()
{
	int GameState = 0, LoopForever = 0;
	string ResetFile;

	while (LoopForever == 0)
	{
		cout << "     +    __________       +           *        ____  ___        *                +        +           *         ____" << endl;
		cout << "         /__    ___/  ________   ________      /    |/   |     __________     _________   ___   ___ . ________ +/_  /" << endl;
		cout << "       .   /   /     /  ___  /  /  _____/     /          |    /  ___    /    /  ___   /  /  /  /  /  /  _____/   /_/" << endl;
		cout << "    .     /   / +   /  _____/  /  /____   *  /  /|   /|  |   /  /__/    |   /  /__/  /  /  /__/  /  /_____  /  ." << endl;
		cout << "         /___/     /_______>  /_______/     /__/ |__/ |__|  /________/|_|  /_____   /  /________/  /_______/ ." << endl;
		cout << "       *       .       .        *       +         .       *               ______/  /            .               ." << endl;
		cout << "   .                                +                  .         .       /________/     +                 ." << endl;
		cout << "      ______ .           +                     +              ____     .              .     *          ____     +" << endl;
		cout << "     /  _   |     ________ . ________   ____ + ________   ___/   /__   __________ *   __ _______ + ___/   /__ ." << endl;
		cout << "    /  /_|  |    /  _____/  /  _____/. /   /  /  _____/  /__    ___/  /  ___    /    / // __   /  /__    ___/" << endl;
		cout << "   /  ___   |+  /_____  /  /_____  / ./   /  /_____  /  .  /   /     /  /__/    |   /    / /  /   . /   / ." << endl;
		cout << "  /__/   |__|  /_______/ +/_______/  /___/  /_______/     /___/   + /________/|_|  /____/ /__/     /___/     *" << endl;
		cout << " *  .     +          .         *      .          +            .      .          +        .    .        +" << endl;

		fstream SaveState;
		SaveState.open("SaveState.txt", fstream::in);

		if (!SaveState)
		{
			system("CLS");
			cout << "Error accessing file" << endl;
			break;
		}
		else
			SaveState >> GameState;

		SaveState.close();

		if (GameState == 0)
		{
			cout << "\n                                                 New game starting";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);

			SaveState.open("SaveState.txt", fstream::out);

			if (!SaveState)
			{
				system("CLS");
				cout << "Error accessing file" << endl;
				break;
			}
			else
			{
				SaveState << "1";
				if (SaveState.fail())			break;
			}

			SaveState.close();

			GameState = 1;
		}
		else if (GameState == 1 || GameState == 2)
		{
			if (GameState == 1)
			{
				cout << "\n                               A save file currently exists, do you want to override it?\n" << endl;
			}
			else if (GameState == 2)
			{
				cout << "\n                           A FULLY completed save file currently exists, do you want to override it?\n" << endl;
			}
			cout << "                                                         1 . Y e s" << endl;
			cout << "                                                         2 . N o\n" << endl;
			cout << "                                                Enter Number to select option: ";
			getline(cin, ResetFile);

			if (ResetFile == "1")
			{
				SaveState.open("SaveState.txt", fstream::out);

				if (!SaveState)
				{
					system("CLS");
					cout << "Error accessing file" << endl;
					break;
				}
				else
				{
					SaveState << "0";
					if (SaveState.fail())			break;
				}

				SaveState.close();

				cout << "                                                         File Wiped!";
			}
			else if (ResetFile == "2")
			{
				cout << "                                                  Returning to menu screen";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
				break;
			}
		}
		else
		{
			cout << "                                             The savestate has been tampered with, please reset";
			Sleep(1200);
		}
	}
	system("CLS");
}

void ContinueGame()
{
	int GameState = 0, LoopForever = 0;
	string StartNewGame;

	while (LoopForever == 0)
	{
		cout << "     +    __________       +           *        ____  ___        *                +        +           *         ____" << endl;
		cout << "         /__    ___/  ________   ________      /    |/   |     __________     _________   ___   ___ . ________ +/_  /" << endl;
		cout << "       .   /   /     /  ___  /  /  _____/     /          |    /  ___    /    /  ___   /  /  /  /  /  /  _____/   /_/" << endl;
		cout << "    .     /   / +   /  _____/  /  /____   *  /  /|   /|  |   /  /__/    |   /  /__/  /  /  /__/  /  /_____  /  ." << endl;
		cout << "         /___/     /_______>  /_______/     /__/ |__/ |__|  /________/|_|  /_____   /  /________/  /_______/ ." << endl;
		cout << "       *       .       .        *       +         .       *               ______/  /            .               ." << endl;
		cout << "   .                                +                  .         .       /________/     +                 ." << endl;
		cout << "      ______ .           +                     +              ____     .              .     *          ____     +" << endl;
		cout << "     /  _   |     ________ . ________   ____ + ________   ___/   /__   __________ *   __ _______ + ___/   /__ ." << endl;
		cout << "    /  /_|  |    /  _____/  /  _____/. /   /  /  _____/  /__    ___/  /  ___    /    / // __   /  /__    ___/" << endl;
		cout << "   /  ___   |+  /_____  /  /_____  / ./   /  /_____  /  .  /   /     /  /__/    |   /    / /  /   . /   / ." << endl;
		cout << "  /__/   |__|  /_______/ +/_______/  /___/  /_______/     /___/   + /________/|_|  /____/ /__/     /___/     *" << endl;
		cout << " *  .     +          .         *      .          +            .      .          +        .    .        +" << endl;

		fstream SaveState;
		SaveState.open("GameCompletionState.txt", fstream::in);

		if (!SaveState)
		{
			system("CLS");
			cout << "Error accessing file" << endl;
			break;
		}
		else
			SaveState >> GameState;

		SaveState.close();

		if (GameState == 0)
		{
			cout << "\n                            A save file currently does not exist, do you want to make a new one?\n" << endl;
			cout << "                                                         1 . Y e s" << endl;
			cout << "                                                         2 . N o\n" << endl;
			cout << "                                                Enter Number to select option: ";
			getline(cin, StartNewGame);

			if (StartNewGame == "1")
			{
				NewGame();
				break;
			}
			else if (StartNewGame == "2")
			{
				cout << "                                                  Returning to menu screen";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
			}
			break;
		}
		else if (GameState == 1)
		{
			cout << "\n                                                        Starting Game";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);

			GameStart = 1;
		}
		else
		{
			cout << "                                             The savestate has been tampered with, please reset";
			Sleep(1200);
		}
	}
	system("CLS");
}

void LearnCpp()
{
	int LoopForever = 0;
	while (LoopForever == 0)
	{
		ifstream ChapSave("ChapSaveState.txt");
		if (!ChapSave)
		{
			system("cls");
			cout << "Error accessing file" << endl;
			break;
		}
		else
		{
			
		}
	}
}

int Chap1()
{
	bool Answer;
	string InputChoice;
	string name = "NULL";
	ofstream DialogueJump;
	DialogueProcessor('1', name);
	Answer = ChoiceProcessor(InputChoice);
	if (Answer == true)
	{
		DialogueJump.open("DialogueSaveState.txt");
		if (!DialogueJump)
		{
			system("cls");
			cout << "Error accessing file" << endl;
			Sleep(1000);
		}
		else
		{
			DialogueJump << "41";

		}
	}
	else 
	{
		DialogueJump.open("DialogueSaveState.txt");
		if (!DialogueJump)
		{
			system("cls");
			cout << "Error accessing file" << endl;
			Sleep(1000);
		}
		else
		{
			DialogueJump << "41";

		}
	}
	DialogueProcessor('1', name);
	ifstream Name("Name.txt");
	getline(cin, name);
	cout << "screen: is " << name << " your name? (Y/N) ";
	getline(cin, InputChoice);
	Answer = ChoiceProcessor(InputChoice);
	cout << "";


	return 1;
}

int Chap2()
{
	char nameinput[9999];
	ifstream Name("Name.txt");
	if (!Name)
	{

	}
	else
	{
		while (!Name.eof())
		{
			Name >> nameinput;
			
			if (!Name.fail())	break;
		}
	}
	DialogueProcessor('2', nameinput);
	return 2;
}

int Chap3()
{
	DialogueProcessor('3');
	return 3;
}

int Chap4()
{
	DialogueProcessor('4');
	return 4;
}

int Chap5()
{
	DialogueProcessor('5');
	return 5;
}

int Chap6()
{
	DialogueProcessor('6');
	return 6;
}

int Chap7()
{
	DialogueProcessor('7');
	return 7;
}

int Chap8()
{
	DialogueProcessor('8');
	return 8;
}

int Chap9()
{
	DialogueProcessor('9');
	return 9;
}

int Chap10()
{
	DialogueProcessor('10');
	return 10;
}

void DialogueProcessor(char ChpNum, string name)
{
	int DSaveState;
	string DialogueOutput, Dfilename;
	ifstream DialogueTxt;
	fstream DSaveStateTxt;
	char FilenameBuilder[20] = { 'D','i','a','l','o','g','u','e','C','h','p', ChpNum, '.', 't', 'x', 't' };
	Dfilename = FilenameBuilder;

	DialogueTxt.open(Dfilename);
	if (!DialogueTxt)
	{
		system("cls");
		cout << "Error accessing file" << endl;
		Sleep(1000);
	}
	else
	{
		DSaveStateTxt.open("DialogueSaveState.txt", fstream::in);
		if (!DSaveStateTxt)
		{
			system("cls");
			cout << "Error accessing file" << endl;
			Sleep(1000);
		}
		else
		{
			DSaveStateTxt >> DSaveState;
			DSaveStateTxt.close();
			for (int counter = 1; counter <= (DSaveState - 1);)
			{
				DialogueTxt >> DialogueOutput;
				if (DialogueOutput == "n/")	counter++;
				system("CLS");
			}
			while (!DialogueTxt.eof())
			{
				DialogueTxt >> DialogueOutput;
				if (DialogueOutput == "n/")
				{
					DSaveStateTxt.open("DialogueSaveState.txt", fstream::out);
					if (!DSaveStateTxt)
					{
						system("cls");
						cout << "Error accessing file" << endl;
						Sleep(1000);
						break;
					}
					else
					{
						cout << endl;
						DSaveState++;
						DSaveStateTxt << DSaveState;
						DSaveStateTxt.close();
						cin.get();
						system("CLS");
					}
				}
				else if (DialogueOutput == "[reset]")
				{
					DSaveStateTxt.open("DialogueSaveState.txt", fstream::out);
					if (!DSaveStateTxt)
					{
						system("cls");
						cout << "Error accessing file" << endl;
						Sleep(1000);
						break;
					}
					else
					{
						cout << endl;
						DSaveStateTxt << "0";
						DSaveStateTxt.close();
						cin.get();
						system("CLS");
						break;
					}
				}
				else if (DialogueOutput == "(Y/N)")
				{
					DSaveStateTxt.open("DialogueSaveState.txt", fstream::out);
					if (!DSaveStateTxt)
					{
						system("cls");
						cout << "Error accessing file" << endl;
						Sleep(1000);
						break;
					}
					else
					{
						cout << endl;
						DSaveState++;
						DSaveStateTxt << DSaveState;
						DSaveStateTxt.close();
						break;
					}
				}
				else if (DialogueOutput == ".")
				{
					cout << DialogueOutput << " ";
					Sleep(200);
				}
				else if (DialogueOutput == "[name]:")
				{
					cout << name << " ";
					Sleep(80);
				}
				else if (DialogueOutput == "[break]")
				{
					cin.get();
					system("CLS");
					break;
				}
				else
				{
					cout << DialogueOutput << " ";
					Sleep(80);
				}
			}
		}
	}
}
bool ChoiceProcessor(string choice)
{
	int LoopForever = 0;
	while (LoopForever = 0)
	{
		if (choice == "Y" || choice == "y" || choice == "YES" || choice == "Yes" || choice == "yes")
		{ 
			return true; break;
		}
		else if (choice == "N" || choice == "n" || choice == "NO" || choice == "No" || choice == "no")
		{
			return false; break;
		}
		else
		{
			system("cls");
			cout << "Sorry but that input is invalid, please try again: ";
			getline(cin, choice);
		}
	}
}

void GameOver()
{

}

/*#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace std;
int main()
{
  int LetterCount, CurrentLetter, ScrollSpeed;
	string ExportedWord;
	fstream Dialogue;
	Dialogue.open("Dialogue.txt", fstream::in);
	if (!Dialogue)
		cout << "Error: Dialogue file not present!" << endl;
	else
	{
		while (!Dialogue.eof())
		{
			Dialogue >> ExportedWord;
			LetterCount = ExportedWord.length();
			if (ExportedWord.substr(0, 1) == "x")
			{
				if (ExportedWord.substr(1, 1) == ".")
					ScrollSpeed = 500;
				else
					ScrollSpeed = 100;
				CurrentLetter = 1;
				while (LetterCount != CurrentLetter)
				{
					cout << ExportedWord.substr(CurrentLetter, 1);
					Sleep(ScrollSpeed);
					CurrentLetter++;
				}
				cout << " ";
			}
			else
			{
				if (ExportedWord == "n/")
				{
					Sleep(3000);
					cout << endl;
				}
				else
				{
					CurrentLetter = 0;
					while (LetterCount != CurrentLetter)
					{
						cout << ExportedWord.substr(CurrentLetter, 1);
						Sleep(100);
						CurrentLetter++;
					}
					cout << " ";
				}
			}
		}
		Dialogue.close();
	}
	cout << endl;
	system("pause");
	return 0;
}*/

