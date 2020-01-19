#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void Continue();
void LearnCpp();
int Dialogue();
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

	// Game Startup

	cout << "this game is meant to be played in the current window size" << endl;
	Sleep(5000);
	cout << "please do not minimise or maximise the window" << endl;
	Sleep(5000);
	system("cls");
	Sleep(1000);

	// Title Screen
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

	// if and else statement here please @ yi xiang

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
	cout << "                                                   3.     Q u i t                                                       " << endl;
	Sleep(1000);

	while (selection != "3")
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
		cout << "                                                   3.     Q u i t\n\n";
		cout << "                                              Enter Number to select option: ";
		getline(cin, selection);
		
		if (selection == "1")		cout << "OwO";
		else if (selection == "2")	cout << "UwU";
		else if (selection == "3")	break;
		else
		{
			cout << "                                             Error computing...please try again";
			Sleep(700);
		}
	}

	system("cls");
	cout << "   Game closing";
	Sleep(800);
	cout << ".";
	Sleep(800);
	cout << ".";
	Sleep(800);
	cout << ".";
	Sleep(800);
	return 0;
}

void Continue()
{

	system("cls");
	cout << endl;
	cout << endl;
	cout << "------------------------------------------------------------ ------------------------------------------------------------" << endl;
	cout << "------------------------------------------------------------ ------------------------------------------------------------" << endl;


}

void LearnCpp()
{

}

int Dialogue()
{
	// aaron you put the finalised text processing thing here please
}

int Chap1()
{



}

int Chap2()
{


}

int Chap3()
{



}

int Chap4()
{

}

int Chap5()
{

}

int Chap6()
{

}

int Chap7()
{

}

int Chap8()
{

}

int Chap9()
{

}

int Chap10()
{

}
