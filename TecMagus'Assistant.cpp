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
void LCPPTxtProcessor(char ChpNum, int InputNo);

void ChapterProcessor();
int Chap1();
int Chap2();
/*int Chap3();
int Chap4();
int Chap5();
int Chap6();
int Chap7();
int Chap8();
int Chap9();
int Chap10();*/
void ChpSSUpdater(int ChpSS);
void EndCredits();

void DialogueProcessor(char ChpNum, string name);
void GraphicsProcessor(int mode, string type);

void GameOver();



int main()
{
	string selection = "0";
	/*
	//Game Startup
	cout << "This game is meant to be played in the current window size." << endl;
	Sleep(3000);
	cout << "Please do not minimise or maximise the window." << endl;
	Sleep(3000);
	cout << "To progress the text, press enter at the end of each line." << endl;
	Sleep(3000);
	cout << "Make sure all text files are closed before continuing with the game" << endl;
	Sleep(3000);
	cout << "If the game takes longer than 3 minutes to load, press X on the top right and contact the programmers" << endl;
	Sleep(3000);
	cout << "This game is able to auto save, so if you need to exit to the menu at any time, press the X on the top right" << endl;
	Sleep(6000);
	system("color 08");
	Sleep(1000);
	system("cls");
	Sleep(2000);

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
	cout << "                                                  1.  N e w   G a m e                                                   " << endl;
	cout << "                                                  2.  C o n t i n u e                                                   " << endl;
	cout << "                                                  3. L e a r n   C + +                                                  " << endl;
	cout << "                                                  4.      Q u i t                                                       " << endl;
	Sleep(1000);
	*/
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
		cout << "                                                  1.  N e w   G a m e\n";
		cout << "                                                  2.  C o n t i n u e\n";
		cout << "                                                  3. L e a r n   C + +\n";
		cout << "                                                  4.      Q u i t\n\n";
		cout << "                                              Enter Number to select option: ";
		getline(cin, selection);

		if (selection == "1")
		{
			NewGame();
		}
		else if (selection == "2")
		{
			ContinueGame();
		}
		else if (selection == "3")
		{
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
	Sleep(500);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                    Game Closing";
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
	int GameCS, LoopForever = 0;
	string ResetFile;
	fstream GameCompletionStateTxt;
	ofstream ResetSS;

	while (LoopForever == 0)
	{
		GameCompletionStateTxt.open("GameCompletionState.txt", fstream::in);
		if (!GameCompletionStateTxt)
		{
			system("CLS");
			cout << "Error accessing GameCompletionState file" << endl;
			Sleep(3000);
			return;
		}
		else
			GameCompletionStateTxt >> GameCS;

		GameCompletionStateTxt.close();

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

		if (GameCS == 0)
		{
			cout << "\n                                                 New game starting";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);

			GameCompletionStateTxt.open("GameCompletionState.txt", fstream::out);

			if (!GameCompletionStateTxt)
			{
				system("CLS");
				cout << "Error accessing GameCompletionState file" << endl;
				Sleep(3000);
				return;
			}
			else
			{
				GameCompletionStateTxt << "1";
			}

			GameCompletionStateTxt.close();

			ResetSS.open("ChapSaveState.txt");

			if (!ResetSS)
			{
				system("CLS");
				cout << "Error accessing ChapSaveState file" << endl;
				Sleep(3000);
				return;
			}
			else
			{
				ResetSS << "1";
			}

			ResetSS.close();

			ResetSS.open("DialogueSaveState.txt");

			if (!ResetSS)
			{
				system("CLS");
				cout << "Error accessing DialogueSaveState file" << endl;
				Sleep(3000);
				return;
			}
			else
			{
				ResetSS << "1";
			}

			ResetSS.close();

			system("cls");
			ChapterProcessor();
			return;
		}
		else if (GameCS == 1 || GameCS == 2)
		{
			if (GameCS == 1)
			{
				cout << "\n                               A save file currently exists, do you want to override it?\n" << endl;
			}
			else
			{
				cout << "\n                           A FULLY completed save file currently exists, do you want to override it?\n" << endl;
			}
			cout << "                                                         1 . Y e s" << endl;
			cout << "                                                         2 . N o\n" << endl;
			cout << "                                                Enter Number to select option: ";
			getline(cin, ResetFile);

			if (ResetFile == "1")
			{
				GameCompletionStateTxt.open("GameCompletionState.txt", fstream::out);

				if (!GameCompletionStateTxt)
				{
					system("CLS");
					cout << "Error accessing GameCompletionState file" << endl;
					Sleep(3000);
					return;
				}
				else
				{
					GameCompletionStateTxt << "0";
				}

				GameCompletionStateTxt.close();

				cout << "                                                         File Wiped!";
				Sleep(3000);
			}
			else if (ResetFile == "2")
			{
				system("CLS");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "                                                  Returning to menu screen";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
				return;
			}
			else
			{
				cout << "\n\n                                          Error computing...please try again";
				Sleep(1200);
			}
		}
		else
		{
			cout << "                                   The savestate has been tampered with, please reset" << endl;
			Sleep(500);
			cout << "                              1. go to GameCompletionState.txt to change the values" << endl;
			Sleep(500);
			cout << "                              2. change to 0 if you have not started or 1 if you have started" << endl;
			Sleep(500);
			cout << "                              3. change to 2 ONLY if you have finished the entire game" << endl;
			return;
		}
	}
}



void ContinueGame()
{
	int GameCS, LoopForever = 0;
	string StartNewGame;
	fstream GameCompletionStateTxt;

	while (LoopForever == 0)
	{
		GameCompletionStateTxt.open("GameCompletionState.txt", fstream::in);
		if (!GameCompletionStateTxt)
		{
			system("CLS");
			cout << "Error accessing GameCompletionState file" << endl;
			Sleep(3000);
			return;
		}
		else
			GameCompletionStateTxt >> GameCS;

		GameCompletionStateTxt.close();

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

		if (GameCS == 0)
		{
			cout << "\n                            A save file currently does not exist, the game will now make a new save file\n" << endl;
			NewGame();
			return;
		}
		else if (GameCS == 1)
		{
			cout << "\n                                                   Continuing Game";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);
			system("cls");
			ChapterProcessor();
			return;
		}
		else if (GameCS == 2)
		{
			cout << "\n                           You have currently completed the whole game, do you want to start over?\n" << endl;
			cout << "                                                         1 . Y e s" << endl;
			cout << "                                                         2 . N o\n" << endl;
			cout << "                                                Enter Number to select option: ";
			getline(cin, StartNewGame);

			if (StartNewGame == "1")
			{
				GameCompletionStateTxt.open("GameCompletionState.txt", fstream::out);

				if (!GameCompletionStateTxt)
				{
					system("CLS");
					cout << "Error accessing GameCompletionState file" << endl;
					Sleep(3000);
					return;
				}
				else
					GameCompletionStateTxt << "0";

				GameCompletionStateTxt.close();
				cout << "                                                         File Wiped!";
				Sleep(3000);
				NewGame();

				return;
			}
			else if (StartNewGame == "2")
			{
				system("CLS");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "                                                  Returning to menu screen";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
				cout << ".";
				Sleep(800);
				return;
			}
			else
			{
				cout << "\n\n                                             Error computing...please try again";
				Sleep(1200);
			}
		}
		else
		{
			cout << "                                   The savestate has been tampered with, please reset" << endl;
			Sleep(500);
			cout << "                              1. go to GameCompletionState.txt to change the values" << endl;
			Sleep(500);
			cout << "                              2. change to 0 if you have not started or 1 if you have started" << endl;
			Sleep(500);
			cout << "                              3. change to 2 ONLY if you have finished the entire game" << endl;
			return;
		}
	}
}



void LearnCpp()
{
	int ChpSS, LoopForever = 0;
	string Selection;
	ifstream ChapSaveStateTxt("ChapSaveState.txt");

	if (!ChapSaveStateTxt)
	{
		system("cls");
		cout << "Error accessing ChapSaveState file" << endl;
		Sleep(3000);
		return;
	}
	else { ChapSaveStateTxt >> ChpSS; ChapSaveStateTxt.close(); }
	
	while (LoopForever == 0)
	{
		system("cls");
		for (int i = 2; i <= 10; i++)
		{
			if (i <= ChpSS)		cout << "                                                       Chapter " << i << endl;
			else				cout << "                                                         Locked" << endl;
			cout << "                                                      ------------" << endl;
			cout << endl;
		}
		cout << "                   Input number of Chapter you want access to OR enter 1 to go back to menu page: ";
		getline(cin, Selection);
		if (Selection == "2")			LCPPTxtProcessor('2', 2);
		else if (Selection == "3")		LCPPTxtProcessor('3', 3);
		else if (Selection == "4")		LCPPTxtProcessor('4', 4); 
		else if (Selection == "5")		LCPPTxtProcessor('5', 5); 
		else if (Selection == "6")		LCPPTxtProcessor('6', 6); 
		else if (Selection == "7")		LCPPTxtProcessor('7', 7); 
		else if (Selection == "8")		LCPPTxtProcessor('8', 8); 
		else if (Selection == "9")		LCPPTxtProcessor('9', 9);
		else if (Selection == "1")
		{
			system("CLS");
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "                                                  Returning to menu screen";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);
			cout << ".";
			Sleep(800);
			return;
		}
		else
		{
			cout << "                                             Error computing...please try again";
			Sleep(1200);
		}
	}
}

void LCPPTxtProcessor(char ChpNum, int InputNo)
{
	int ChapSaveState;
	string TextOutput, Txtfilename;
	ifstream LCPPTxt, ChpSS;
	char FilenameBuilder[20] = { 'L', 'e', 'a', 'r', 'n', 'C', 'p', 'p', 'C', 'h', 'p' , ChpNum, '.', 't', 'x', 't' };
	Txtfilename = FilenameBuilder;

	ChpSS.open("ChapSaveState.txt");
	if (!ChpSS)
	{
		system("cls");
		cout << "Error accessing ChapSaveState file" << endl;
		Sleep(3000);
		return;
	}
	else	ChpSS >> ChapSaveState;
	ChpSS.close();

	if (ChapSaveState < InputNo)
	{
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                                                   Chapter is Locked" << endl;
		Sleep(3000);
		return;
	}
	else 
	{
		system("cls");
		LCPPTxt.open(Txtfilename);
		if (!LCPPTxt)
		{
			system("cls");
			cout << "Error accessing LCPPTxt file" << endl;
			Sleep(3000);
			return;
		}
		else
		{
			while (!LCPPTxt.eof())
			{
				LCPPTxt >> TextOutput;
				if (LCPPTxt.fail())	return;

				if (TextOutput == "n/")		cout << endl;
				else						cout << TextOutput << " ";
			}
			LCPPTxt.close();
			Sleep(3000);
			cout << endl;
			cout << "                                        Press ENTER to go back to Learning C++";
			cin.get();
		}
	}
}


void ChapterProcessor()
{
	int ChpSS;
	ifstream ChapSaveState("ChapSaveState.txt");

	if (!ChapSaveState)
	{
		system("cls");
		cout << "Error accessing ChapSaveState file" << endl;
		Sleep(3000);
		return;
	}
	else	ChapSaveState >> ChpSS;

	ChapSaveState.close();

	while (ChpSS != 0)
	{
		if (ChpSS == 1)			ChpSS = Chap1();
		else if (ChpSS == 2)	ChpSS = Chap2();
		/*else if (ChpSS == 3)	ChpSS = Chap3();
		else if (ChpSS == 4)	ChpSS = Chap4();
		else if (ChpSS == 5)	ChpSS = Chap5();
		else if (ChpSS == 6)	ChpSS = Chap6();
		else if (ChpSS == 7)	ChpSS = Chap7();
		else if (ChpSS == 8)	ChpSS = Chap8();
		else if (ChpSS == 9)	ChpSS = Chap9();
		else if (ChpSS == 10)	ChpSS = Chap10();*/
		else 
		{
			cout << "                                   The savestate has been tampered with, please reset" << endl;
			Sleep(500);
			cout << "                              1. go to ChapSaveState.txt to change the values" << endl;
			Sleep(500);
			cout << "                              2. change to the chapter number that you are currently on" << endl;
			Sleep(3000);
			return;
		}
	}
	// if (ChpSS == 11)		EndCredits();
}



int Chap1()
{
	int LoopForever = 0;
	string InputChoice;
	string name = "NULL";
	ofstream DialogueJump;

	DialogueProcessor('1', name);
	while (LoopForever == 0)
	{
		cout << " ";
		getline(cin, InputChoice);

		if (InputChoice == "Y" || InputChoice == "y" || InputChoice == "YES" || InputChoice == "Yes" || InputChoice == "yes")
		{
			DialogueJump.open("DialogueSaveState.txt");
			if (!DialogueJump)
			{
				system("cls");
				cout << "Error accessing DialogueSaveState file" << endl;
				Sleep(3000);
				return 0;
			}
			else
			{
				DialogueJump << "28";
				DialogueJump.close();
				break;
			}
		}
		else if (InputChoice == "N" || InputChoice == "n" || InputChoice == "NO" || InputChoice == "No" || InputChoice == "no")
		{
			DialogueJump.open("DialogueSaveState.txt");
			if (!DialogueJump)
			{
				system("cls");
				cout << "Error accessing DialogueSaveState file" << endl;
				Sleep(3000);
				return 0;
			}
			else
			{
				DialogueJump << "26";
				DialogueJump.close();
				DialogueProcessor('1', name);
				GameOver();
				return 1;
			}
		}
		else
		{
			system("cls");
			cout << "screen: input invalid, please try again" << endl;
			Sleep(2000);
			cout << "screen: do you want to install now? (Y/N)";
		}
	}

	DialogueProcessor('1', name);

	ofstream Name("Name.txt");
	
	if (!Name)
	{
		system("cls");
		cout << "Error accessing Name file" << endl;
		Sleep(3000);
		return 0;
	}
	else
	{
		while (LoopForever == 0)
		{
			getline(cin, name);
			system("cls");
			cout << "screen: is " << name << " your name? (Y/N) ";
			getline(cin, InputChoice);
			if (InputChoice == "Y" || InputChoice == "y" || InputChoice == "YES" || InputChoice == "Yes" || InputChoice == "yes")
			{
				system("cls"); break; 
			}
			else if (InputChoice == "N" || InputChoice == "n" || InputChoice == "NO" || InputChoice == "No" || InputChoice == "no")
			{
				system("cls");
				cout << "screen: please input your name: ";
			}
			else
			{
				system("cls");
				cout << "screen: there is a problem with registering your answer" << endl;
				Sleep(2000);
				cout << "screen: please input your name again: ";
			}
		}
		Name << name;
		Name.close();
	}
	
	DialogueProcessor('1', name);

	ChpSSUpdater(2);
	return 2;
}

int Chap2()
{
	string name = "NULL";
	
	cout << "eat shit it works" << endl;

	ChpSSUpdater(3);
	return 3;
}

/*int Chap3()
{
	string name = "NULL";
	DialogueProcessor('3', name);

	ChpSSUpdater(4);
	return 4;
}

int Chap4()
{
	DialogueProcessor('4');

	ChpSSUpdater(4);
	return 5;
}

int Chap5()
{
	DialogueProcessor('5');

	ChpSSUpdater(5);
	return 6;
}

int Chap6()
{
	DialogueProcessor('6');

	ChpSSUpdater(6);
	return 7;
}

int Chap7()
{
	DialogueProcessor('7');

	ChpSSUpdater(7);
	return 8;
}

int Chap8()
{
	DialogueProcessor('8');

	ChpSSUpdater(8);
	return 9;
}

int Chap9()
{
	DialogueProcessor('9');

	ChpSSUpdater(9);
	return 10;
}

int Chap10()
{
	DialogueProcessor('10');

	ChpSSUpdater(10);
	return 0;
}*/

void ChpSSUpdater(int ChpSS)
{
	ofstream ChapSaveState, DialogueSaveState;

	Sleep(1000);
	system("color 08");
	Sleep(1000);
	system("cls");
	Sleep(4000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                   Chapter " << ChpSS << " Unlocked" << endl;
	cout << "                                         --------------------------------------" << endl;
	Sleep(3000);
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                          Check Learn C++ for more information" << endl;
	cout << "                                         --------------------------------------" << endl;
	Sleep(3000);
	system("color 08");
	Sleep(1000);
	system("cls");
	Sleep(4000);

	DialogueSaveState.open("DialogueSaveState.txt");
	if (!DialogueSaveState)
	{
		system("cls");
		cout << "Error accessing DialogueSaveState file" << endl;
		Sleep(3000);
		return;
	}
	else	DialogueSaveState << "1";

	DialogueSaveState.close();

	ChapSaveState.open("ChapSaveState.txt");

	if (!ChapSaveState)
	{
		system("cls");
		cout << "Error accessing ChapSaveState file" << endl;
		Sleep(3000);
		return;
	}
	else	ChapSaveState << ChpSS;

	ChapSaveState.close();

}

/*void EndCredits()
{
	system("cls");
	cout << endl;
	cout << endl;
	cout << "                                                      Characters:" << endl;
	Sleep(500);
	cout << endl;
	cout << "                                                    RoBuff as RoBuff/RoBugg/Hyperlink RoBugg" << endl;
	Sleep(500);
	cout << "                                                  TecMagus as TecMagus/IT" << endl;
	Sleep(500);
	cout << "                                                       You as Protagonist" << endl;
	Sleep(500);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                         Roles:" << endl;
	Sleep(500);
	cout << endl;
	cout << "                                                Directed by  Nicholas Wang, Yi Xiang, Aaron and Han" << endl;
	Sleep(500);
	cout << "                                                Produced by  Nicholas Wang, Yi Xiang, aark017 and Han" << endl;
	Sleep(500);
	cout << "                                         Executive Producer  Nicholas Wang" << endl;
	Sleep(500);
	cout << "                                                 Transcript  Aaron" << endl;
	Sleep(500);
	cout << "                                       Interactive elements  Yi Xiang" << endl;
	Sleep(500);
	cout << "                                                   Graphics  Han" << endl;
	Sleep(500);
	cout << endl;
	cout << "                                              And Lastly, You as the Player" << endl;
	Sleep(1000);
	cout << "                                              Thank you for playing our game" << endl;

	Sleep(10000);
	system("color 08");
	Sleep(1000);
	system("cls");
	Sleep(4000);

	ofstream GameCS("GameCompletionState.txt");
	if (!GameCS)
	{
		system("cls");
		cout << "Error accessing file" << endl;
		Sleep(3000);
		return;
	}
	else
	{
		GameCS << "2";
	}
	GameCS.close();
}*/



void DialogueProcessor(char ChpNum, string name)
{
	int DSaveState;
	string DialogueOutput, Dfilename;
	ifstream DialogueTxt;
	fstream DSaveStateTxt;
	char FilenameBuilder[20] = { 'D','i','a','l','o','g','u','e','C','h','p', ChpNum, '.', 't', 'x', 't' };
	Dfilename = FilenameBuilder;

	system("cls");
	DialogueTxt.open(Dfilename);
	if (!DialogueTxt)
	{
		system("cls");
		cout << "Error accessing DialogueTxt file" << endl;
		Sleep(3000);
		return;
	}
	else
	{
		DSaveStateTxt.open("DialogueSaveState.txt", fstream::in);
		if (!DSaveStateTxt)
		{
			system("cls");
			cout << "Error accessing DialogueSaveState file" << endl;
			Sleep(3000);
			return;
		}
		else
		{
			DSaveStateTxt >> DSaveState;
			DSaveStateTxt.close();
			for (int counter = 1; counter <= (DSaveState - 1) ;)
			{
				DialogueTxt >> DialogueOutput;
				if (DialogueOutput == "n/" || DialogueOutput == "[reset]" || DialogueOutput == "[break]" || DialogueOutput == "[cls]" || DialogueOutput == "(Y/N)")		counter++;
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
						cout << "Error accessing DialogueSaveState file" << endl;
						Sleep(3000);
						return;
					}
					else
					{
						cin.get();
						DSaveState++;
						DSaveStateTxt << DSaveState;
						DSaveStateTxt.close();
						system("CLS");
					}
				}
				else if (DialogueOutput == "(Y/N)" || DialogueOutput == "[break]")
				{
					if (DialogueOutput == "(Y/N)")	cout << "(Y/N) ";
					return;
					
				}
				else if (DialogueOutput == "[reset]")
				{
					DSaveStateTxt.open("DialogueSaveState.txt", fstream::out);
					if (!DSaveStateTxt)
					{
						system("cls");
						cout << "Error accessing DialogueSaveState file" << endl;
						Sleep(3000);
						return;
					}
					else
					{
						cout << endl;
						cin.get();
						DSaveStateTxt << "1";
						DSaveStateTxt.close();
						return;
					}
				}
				else if (DialogueOutput == "[cls]")
				{
					DSaveStateTxt.open("DialogueSaveState.txt", fstream::out);
					if (!DSaveStateTxt)
					{
						system("cls");
						cout << "Error accessing DialogueSaveState file" << endl;
						Sleep(3000);
						return;
					}
					else
					{
						cout << endl;
						DSaveState++;
						DSaveStateTxt << DSaveState;
						DSaveStateTxt.close();
						return;
					}
				}
				else if (DialogueOutput == ".")
				{
					cout << DialogueOutput << " ";
					Sleep(200);
				}
				else if (DialogueOutput == "[name]:")
				{
					cout << name << ": ";
					Sleep(80);
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

void GraphicsProcessor(int mode, string type)
{
	int Condition = 0;
	int MaxLength;
	string LineOfGraphics;

	ifstream Graphics;
	if (mode == 1)			Graphics.open("Background.txt");
	else if (mode == 2)		Graphics.open("Robuff.txt");
	else if (mode == 3)		Graphics.open("TecMagus.txt");
	else
	{
		system("cls");
		cout << "Error with Graphics Mode" << endl;
		Sleep(3000);
		return;
	}

	if (!Graphics)
	{
		system("cls");
		cout << "Error accessing Graphics file" << endl;
		Sleep(3000);
		return;
	}
	else
	{
		while (Condition = 0)
		{
			Graphics >> LineOfGraphics;
			if (Graphics.fail())
			{
				system("cls");
				cout << "Error with Graphics Type" << endl;
				Sleep(3000);
				return;
			}
			if (LineOfGraphics == type)		Condition = 1;
		}
		while (LineOfGraphics != "[break]")
		{
			Graphics >> LineOfGraphics;
			if (Graphics.fail())					return;

			if (LineOfGraphics != "[break]")		break;

			MaxLength = LineOfGraphics.length();

			for (int i = 0; i <= MaxLength; i++)
			{
				if (LineOfGraphics.substr(i, 1) == "?")
					cout << " ";
				else
					cout << LineOfGraphics.substr(i, 1);
			}
			cout << endl;
		}
	}
	Graphics.close();
}

/*void BattleMechanics(char ChpNum, int EnemyHP, int PlayerHP)
{
	QuestionNum = 1;
	string BattleTextFile, QnOutput, CorrectAnswer = "Invalid_Ans", InputAnswer;

	fstream BattleQns;
	BattleQns.open(BattleTextFile, fstream::in);

	if (!BattleQns)
	{
		system("cls");
		cout << "Error accessing file" << endl;
		Sleep(3000);
		return;
	}
	else
	{
		while (!BattleQns.eof() && EnemyHP != 0 && PlayerHP != 0)
		{
			cout << "Question " << QuestionNum << ":" << endl;
			cout << "=========================================================================" << endl;

			while (QnOutput != "EndQn")
			{
				BattleQns >> QnOutput;
				if (BattleQns.fail())			break;

				if (QnOutput == "n/" || QnOutput == "EndQn")
					cout << endl;
				else if (QnOutput == "t/")
					cout << "   ";
				else
					cout << QnOutput << " ";

				Sleep(100);
			}
			cout << "=========================================================================" << endl;
			QnOutput = ".";
			QuestionNum++;

			BattleQns >> CorrectAnswer;
			cout << "Fill in the blank: ";
			cin >> InputAnswer;

			system("cls");
			cout << "Enemy HP: " << EnemyHP << endl;
			cout << "Your HP: " << PlayerHP << endl;

			if (InputAnswer == CorrectAnswer)
			{
				EnemyHP--;
			}
			else
			{
				PlayerHP--;
			}

			Sleep(1000);

			system("cls");
			cout << "Enemy HP: " << EnemyHP << endl;
			cout << "Your HP: " << PlayerHP << endl;

			Sleep(1000);
			system("cls");

			CorrectAnswer = "InvalidAns";
		}

		if (EnemyHP == 0)
		else if (PlayerHP == 0)
		else if (BattleQns.eof())
			cout << "it is end of file"
	}

	system("pause");
}

void BattleTextProcessor(char ChpNum, int MaxQns)
{
	string BattleTextFile, QnsOutput = "NULL", CorrectAnswer = "Invalid_Ans", InputAnswer;

	char FileNameBuilder[20] = { 'B','a','t','t','l','e','C','h','p', ChpNum , '.', 't', 'x', 't' };

	BattleTextFile = FileNameBuilder;

	ifstream BattleQns;
	BattleQns.open(BattleTextFile);

	if (!BattleQns)
	{
		system("cls");
		cout << "Error accessing file" << endl;
		Sleep(3000);
		return;
	}
	else
	{
		while (!BattleQns.eof())
		{
			BattleQns >> QnsOutput;
			if (BattleQns.fail())			break;

			if (QnsOutput == "[EndQn]")
			{
				
			}
			if (QnsOut)
		}
	}
}*/



void GameOver()
{
	system("cls");
	Sleep(500);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                    ";
	cout << "G";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << "A";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << "M";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << "E";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << "O";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << "V";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << "E";	Sleep(150);
	cout << " ";	Sleep(150);
	cout << "R";

	Sleep(2000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                               ";
	system("pause");
	Sleep(1000);
	system("color 08");
	Sleep(1000);
	system("cls");
	system("color 0f");
	Sleep(4000);
}


