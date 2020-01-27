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


