#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <Windows.h>

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
}
