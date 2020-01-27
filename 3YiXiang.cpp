void Battle(char ChpNum)
{
	int EnemyHP = 5, PlayerHP = 3, QuestionNum = 1;
	string BattleTextfile, QnOutput, CorrectAnswer = "InvalidAns", InputAnswer;
	bool ActualWord = TRUE;

	srand(time(NULL));

	char FilenameBuilder[20] = { 'B','a','t','t','l','e','C','h','p', ChpNum , '.', 't', 'x', 't' };
	BattleTextfile = FilenameBuilder;

	fstream BattleQns;
	BattleQns.open(BattleTextfile, fstream::in);

	if (!BattleQns)
		cout << "Error accessing file" << endl;
	else
	{
		while (!BattleQns.eof())
		{
			while (EnemyHP != 0 && PlayerHP != 0)
			{
				cout << "Question " << QuestionNum << ":" << endl;
				cout << "=========================================================================" << endl;

				if (BattleQns.fail())			break;
				while (QnOutput != "EndQn")
				{
					BattleQns >> QnOutput;

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
		}
	}

	system("pause");
}


void BattleMechanics(char ChpNum, int EnemyHP, int PlayerHP)
{
	int QuestionNum = 1;
	string CorrectAnswer = "Invalid_Ans", InputAnswer;

	while (EnemyHP != 0 && PlayerHP != 0)
	{
		cout << "Question " << QuestionNum << ":" << endl;

		CorrectAnswer = BattleTextProcessor(ChpNum, QuestionNum);

		QuestionNum++;

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
		return;
	else if (PlayerHP == 0)
		GameOver();

	system("pause");
}

string BattleTextProcessor(char ChpNum, int QuestionNum)
{
	int CurrentQn = 1;
	string BattleTextFile, QnsOutput = ".", Answer;

	char FileNameBuilder[20] = { 'B','a','t','t','l','e','C','h','p', ChpNum , '.', 't', 'x', 't' };

	BattleTextFile = FileNameBuilder;

	ifstream BattleQns;
	BattleQns.open(BattleTextFile);

	if (!BattleQns)
	{
		system("cls");
		cout << "Error accessing file" << endl;
		Sleep(3000);
	}
	else
	{
		while (!BattleQns.eof())
		{
			BattleQns >> QnsOutput;
			while (CurrentQn < QuestionNum)
			{
				if (BattleQns.fail())			break;
				if (QnsOutput == "[Answer]")
					CurrentQn++;

				BattleQns >> QnsOutput;
			}
			if (BattleQns.fail())			break;

			while (QnsOutput != "[EndQn]")
			{
				if (QnsOutput == "n/")
					cout << endl;
				else if (QnsOutput == "t/")
					cout << "    ";
				else
					cout << QnsOutput << " ";
				BattleQns >> QnsOutput;

				Sleep(100);
			}

			BattleQns >> Answer >> QnsOutput;

			if (QnsOutput != "[Answer]")
			{
				system("cls");
				cout << "The file has been tempered with, please contact the developers" << endl;
			}
			else
				return Answer;
		}
	}
}

void GameOver()
{
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
	Sleep(4000);
}
