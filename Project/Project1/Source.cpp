#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;
void intro()
{
	system("Color 03");
	static CONSOLE_FONT_INFOEX  fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 0, &fontex);
	fontex.FontWeight = 700;
	fontex.dwFontSize.X = 70;
	fontex.dwFontSize.Y = 70;
	// SetCurrentConsoleFontEx(hOut, 0, &fontex);
	for (int i = 0; i < 50; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n \n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n*\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n**\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");

	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n***\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nRS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nSSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nSCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nR-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nPAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nOCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nHE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nTHE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nTO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nE TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 80; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nCOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nLCOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 80; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nELCOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 80; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nWELCOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n*WELCOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\nn**WELCOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n***WELCOME TO THE ROCK-PAPER-SCISSORS****\n\n";
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(0.1);
	system("cls");
	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	cout << "\n\n****WELCOME TO THE ROCK-PAPER-SCISSORS****\n\n";

	for (int i = 0; i < 45; i++)
	{
		cout << static_cast<char>(1);
	}
	Sleep(1000);
	cout << "\n\nDevolped by:\n\t\tH.U.M group\n\n   2022 H.U.M Group All Rights Reserved";
	Sleep(5000);
	system("cls");
}
void next(char m)
{
	string lezgo, nam;
	if (m == '1')
		nam = "Hamza";
	else if (m == '2')
		nam = "Manahil";
	else if (m == '3')
		nam = "Umaima";
	else if (m == '4')
	{
		ifstream Readname4("ps4.txt");
		Readname4 >> nam;
		Readname4.close();
	}

	cout << "\n              Hello " << nam << ", hope you have a wonderful experience.\n\n";
	Sleep(2000);
	cout << "                            Press any key to start\n~";
	cin >> lezgo;
	system("cls");
	cout << "\n\n\n\n\n\n\n                                   loading.";
	Sleep(500);
	system("cls");
	cout << "\n\n\n\n\n\n\n                                   loading..";
	Sleep(500);
	system("cls");
	cout << "\n\n\n\n\n\n\n                                   loading...";
	Sleep(500);
	cout << endl << endl;
	system("cls");
}
void passwords(char s)
{
	int new_pass;
	string naam;

	if (s == '1')
		naam = "Hamza";
	else if (s == '2')
		naam = "Manahil";
	else if (s == '3')
		naam = "Umaima";
	else if (s == '4')
	{
		ifstream Readname4("ps4.txt");
		Readname4 >> naam;
		Readname4.close();
	}

	if (s != '4')
	{
		cout << "\nEnter the new password: ";
		cin >> new_pass;
		if (s == '1')
		{
			ofstream Writepass1("ps1.txt", ios::in);
			Writepass1 << new_pass;
			Writepass1.close();
		}
		else if (s == '2')
		{
			ofstream Writepass2("ps2.txt", ios::in);
			Writepass2 << new_pass;
			Writepass2.close();
		}
		else if (s == '3')
		{
			ofstream Writepass3("ps3.txt", ios::in);
			Writepass3 << new_pass;
			Writepass3.close();
		}
		cout << "\n" << naam << ", Your password is updated.";
	}
	else
		cout << "\nLogin you account to change your password.\n";

}
char  profile()
{
	system("Color 80");

	int z = 0, x = 0;
	char num;
	string  in, pass1, pass2, pass3;
	string nam;
	string lezgo;


	cout << "\n\n\n\t      --------------------------------------------------\n"
		<< "\t      -Choose your profile:      1. Hamza Tariq " << static_cast<char>(11) << "      -\n"
		<< "\t      -                          2. Manahil Gul " << static_cast<char>(12) << "      -\n"
		<< "\t      -                          3. Umaima Yaqoob " << static_cast<char>(14) << "    -\n"
		<< "\t      -                          4. Guest " << static_cast<char>(6) << "            -\n"
		<< "\t      --------------------------------------------------\n\n"
		<< "~";

	cin >> num;
	while (num != '1' && num != '2' && num != '3' && num != '4')
	{
		cout << "                                  Invalid Input!\n"
			<< "                              Please enter 1, 2, 3 or 4\n" << endl << "~";
		cin >> num;
	}
	fstream Writepass1("ps1.txt");
	if (Writepass1)
	{
		ifstream Readpass1("ps1.txt");
		Readpass1 >> pass1;
		Readpass1.close();
	}
	else
	{
		ofstream Readpass1("ps1.txt");
		Readpass1 << z;
		Readpass1.close();
		pass1 = "0";
	}
	fstream Writepass2("ps2.txt");
	if (Writepass2)
	{
		ifstream Readpass2("ps2.txt");
		Readpass2 >> pass2;
		Readpass2.close();
	}
	else
	{
		Writepass2.open("ps2.txt", ios::out);
		Writepass2 << z;
		Writepass2.close();
		pass2 = "0";

	}
	fstream Writepass3("ps3.txt");
	if (Writepass3)
	{
		ifstream Readpass3("ps3.txt");
		Readpass3 >> pass3;
		Readpass3.close();
	}
	else
	{
		Writepass3.open("ps3.txt", ios::out);
		Writepass3 << z;
		Writepass3.close();
		pass3 = "0";

	}
	fstream Writename4("ps4.txt");
	{
		Writename4.open("ps4.txt", ios::out);
		Writename4 << z;
		Writename4.close();
	}
	do {
		if (num == '1')
		{
			nam = "Hamza";
			cout << "\nEnter your password (press b (or B) for back): ";
			if (pass1 == "0")
			{
				cout << "\n(By default password is 0):\n";
			}
			cin >> in;
			if (in == "b" || in == "B")
			{
				system("cls");
				num = profile();
				break;
			}
			if (in == pass1)
			{
				next(num);
				x = 1;

			}
			else
				cout << "\nWrong password";
		}
		else if (num == '2')
		{
			nam = "Manahil";
			cout << "\nEnter your password (press b (or B) for back): ";
			if (pass2 == "0")
			{
				cout << "\n(By default password is 0):\n";
			}
			cin >> in;
			if (in == "b" || in == "B")
			{
				system("cls");
				num = profile();
				break;
			}
			if (in == pass2)
			{
				next(num);
				x = 1;

			}
			else
				cout << "\nWrong password";
		}
		else if (num == '3')
		{
			nam = "Umaima";
			cout << "\nEnter your password (press b (or B) to choose back): ";
			if (pass3 == "0")
			{
				cout << "\n(By default password is 0):\n";
			}
			cin >> in;
			if (in == "b" || in == "B")
			{
				system("cls");
				num = profile();
				break;
			}
			if (in == pass3)
			{
				next(num);
				x = 1;

			}
			else
				cout << "\nWrong password";
		}
		else if (num == '4')
		{
			cout << "\nEnter your name (press b (or B) to choose back): ";
			cin >> nam;
			if (nam == "b" || nam == "B")
			{
				system("cls");
				num = profile();
				break;
			}
			else
			{
				Writename4.open("ps4.txt", ios::out);
				Writename4 << nam;
				Writename4.close();
				next(num);
				x = 1;
			}

		}

	} while (x != 1);


	return num;
}
void rules(string user)
{
	cout << user << ", Here's the rules:\n"
		<< "1. This is a single player game in which you can play against computer 3 times\n    in a match.\n"
		<< "2. You are free to choose Rock, Paper or Scissors, by pressing r(or R),p(or P)\n    and s(or S) ,respectively.\n"
		<< "3. After the selection of the desired item the computer randomly choose its \n     item and the result is displayed based on it'\n"
		<< "4. If both items are same its a draw otherwise any of the player is declared as\n    winnner.\n"
		<< "5. The final result is based on following criterian:\n"
		<< "\t\t\trock vs paper		 : paper wins\n"
		<< "\t\t\tscissors vs rock	 : rock  wins\n"
		<< "\t\t\tscissors vs paper\t : paper wins\n"
		<< "6. If you win you get 10 points, if it's a tie you will get 5 points and if you\n    lose no point will be given.\n";
}
void social(string user)
{
	cout << "Here's the Instagram links:\n"
		<< "\tHamza: https://www.instagram.com/hmmza_tariq \n\tManahil: https://www.instagram.com/manahil_tales \n\tUmiama: https://www.instagram.com/lostx_x.x_x \n\n Thanks " << user << ":)\n\n";

}
void feedback(string user)
{
	cout << "To report a bug or to give new suggestions you can send message\n at following email:\n"
		<< "\t\t1. itsjohndalton@gmail.com\n\t\t2. notorioustime07@gmail.com\n";
}
void donate(string user)
{
	cout << "Here's the details:\n\n"
		<< "\tHBL Bank\n\tAccount no. 50497902678803\n\tPhone No. 03008674241\n\tName. Muhammad  Hamza\n\n Thanks for your support " << user << ". :)\n\n";

}
void recent()
{
	cout << "\nThe recent scores are: \n";
	fstream recentscore;
	recentscore.open("rs.txt", ios::in | ios::app);
	string content;
	while (recentscore)
	{
		getline(recentscore, content, '$');
		cout << content << endl;
		recentscore >> content;
	}
	recentscore.close();
}
void high()
{
	int hs1 = 0, hs2 = 0, hs3 = 0;
	ifstream ReadFile1("p1.txt");
	ReadFile1 >> hs1;
	cout << "Best score of Hamza is  " << hs1 << endl;
	ReadFile1.close();
	ifstream ReadFile2("p2.txt");
	ReadFile2 >> hs2;
	cout << "Best score of Manahil is  " << hs2 << endl;
	ReadFile2.close();
	ifstream ReadFile3("p3.txt");
	ReadFile3 >> hs3;
	cout << "Best score of Umaima is  " << hs3 << endl << endl;
	ReadFile3.close();
	recent();
}
void deletedata(char df)
{
	int del = 0;
	char opt;

	if (df != '4')
	{
		cout << "\nPress 1 to delete your high score.\nPress 2 to delete your password.\nPress 3 to delete recent score.\n";
		cin >> opt;
		switch (opt)
		{
		case '1':
		{
			if (df == '1')
			{
				ofstream deleteFile1("p1.txt");
				deleteFile1 << del;
				deleteFile1.close();
				cout << "\nHamza, your data is deleted.";
			}
			else if (df == '2')
			{
				ofstream deleteFile2("p2.txt");
				deleteFile2 << del;
				deleteFile2.close();
				cout << "\nManahil, your data is deleted.";

			}
			else if (df == '3')
			{
				ofstream deleteFile3("p3.txt");
				deleteFile3 << del;
				deleteFile3.close();
				cout << "\nUmaima, your data is deleted.";

			}
			break;
		}
		case '2':
		{
			if (df == '1')
			{
				ofstream deletepass1("ps1.txt");
				deletepass1 << del;
				deletepass1.close();
				cout << "\nHamza, your password is set to \"0\".";
			}
			else if (df == '2')
			{
				ofstream deletepass2("ps2.txt");
				deletepass2 << del;
				deletepass2.close();
				cout << "\nManahil, your password is set to \"0\".";

			}
			else if (df == '3')
			{
				ofstream deletepass3("ps3.txt");
				deletepass3 << del;
				deletepass3.close();
				cout << "\nUmaima, your password is set to \"0\".";

			}
			break;
		}
		case '3':
		{
			ofstream deleterecent;
			deleterecent.open("rs.txt", ios::trunc);
			deleterecent.close();
			ofstream deletecnt;
			deletecnt.open("c.txt", ios::trunc);
			deletecnt.close();
			cout << "\nThe recent data is cleared.";
			break;
		}
		default:
			cout << "Invalid input";
		}
	}
	else
		cout << "\nLogin your account to delete your data.\n";
}
void game(string user, char n)
{
	int RecentScore[10];
	string RecentPlayer[10], RecentData[10];
	system("Color 49");
	char replay;
	do
	{
		string hu;
		int random = 0, hs = 0, score = 0, cnt = 0;
		char back, input, userchoice, computerchoice{};
		system("cls");

		cout << "                           Game has started, " << user << " " << static_cast<char>(3) << "\n\n";
		for (int t = 1; t < 4; t++)
		{
			cout << "                               ROUND " << t << " out of 3" << endl
				<< "      Enter p(or P) for paper " << static_cast<char>(177) << ", r(or R) for rock " << static_cast<char>(233) << " or s(or S) for scissors " << static_cast<char>(157) << ".\n" << "~";
			cin >> input;
			while (input != 'p' && input != 'P' && input != 'r' && input != 'R' && input != 's' && input != 'S')
			{
				system("cls");

				cout << "                                  Invalid Input!\n"
					<< "\n    Please enter p(or P) for paper " << static_cast<char>(177) << ", r(or R) for rock " << static_cast<char>(233) << " or s(or S) for scissors " << static_cast<char>(157) << ".\n" << endl << "~";
				cin >> input;
			}
			cout << endl << endl;
			system("cls");

			if ((input == 'r') || (input == 'R'))
			{
				userchoice = 'r';
				cout << "\n\n                               " << user << " chose Rock " << static_cast<char>(233) << "\n";
			}
			else if ((input == 'p') || (input == 'P'))
			{
				userchoice = 'p';
				cout << "\n\n                               " << user << " chose Paper " << static_cast<char>(177) << "\n";
			}
			else if ((input == 's') || (input == 'S'))
			{
				userchoice = 's';
				cout << "\n\n                               " << user << " chose Scissors " << static_cast<char>(157) << "\n";
			}
			srand(time(NULL));
			random = rand() % 3 + 1;

			if (random == 1)
				computerchoice = 'r';
			else if (random == 2)
				computerchoice = 'p';
			else if (random == 3)
				computerchoice = 's';

			if (computerchoice == 'r')
				cout << "                             Computer chose Rock " << static_cast<char>(233) << "\n\n" << endl;
			else if (computerchoice == 'p')
				cout << "                             Computer chose Paper " << static_cast<char>(177) << "\n\n" << endl;
			else if (computerchoice == 's')
				cout << "                             Computer chose Scissors " << static_cast<char>(157) << "\n\n" << endl;

			if (userchoice == computerchoice)
			{
				score += 5;
				cout << "                                   Its a TIE \n"
					<< "                " << user << ", I will defeat you next time, don't worry \n\n " << endl;
			}
			else if (((userchoice == 'r') && (computerchoice == 'p')) || ((userchoice == 's') && (computerchoice == 'r')) || ((userchoice == 'p') && (computerchoice == 's')))
			{
				cout << "                                Computer WINS :( \n"
					<< "                            Haha Better luck next time\n\n" << endl;

			}
			else if (((userchoice == 'p') && (computerchoice == 'r')) || ((userchoice == 'r') && (computerchoice == 's')) || ((userchoice == 's') && (computerchoice == 'p')))
			{
				score += 10;
				cout << "                                   You WIN :)\n"
					<< "                           Nice try " << user << ", keep it up. \n\n" << endl;
			}
		}
		cout << "\n                                 Your score is -> " << score << endl << endl;

		ifstream readcounter("c.txt");
		readcounter >> cnt;
		readcounter.close();

		fstream WriteData;
		WriteData.open("rs.txt", ios::in | ios::app);
		WriteData << cnt + 1 << static_cast<char>(16) << " " << user << " : " << score << endl;
		WriteData.close();

		cnt += 1;

		ofstream writecounter("c.txt");
		writecounter << cnt;
		writecounter.close();

		if (n == '1')
		{
			ifstream ReadFile1("p1.txt");
			ReadFile1 >> hs;
			if (score >= hs)
			{
				ofstream WriteFile1("p1.txt");
				WriteFile1 << score;
				cout << "                      CONGRATULATIONS IT'S THE NEW HIGH SCORE \n\n";
				WriteFile1.close();;
			}
			else
			{
				cout << "      Hamza, Your best score so far is " << hs << endl << endl;
			}
			ReadFile1.close();
		}
		else if (n == '2')
		{
			ifstream ReadFile2("p2.txt");
			ReadFile2 >> hs;
			if (score >= hs)
			{
				ofstream WriteFile2("p2.txt");
				WriteFile2 << score;
				cout << "                      CONGRATULATIONS IT'S THE NEW HIGH SCORE \n\n";
				WriteFile2.close();;
			}
			else
			{
				cout << "      Manahil, Your best score so far is " << hs << endl << endl;
			}
			ReadFile2.close();
		}
		else if (n == '3')
		{
			ifstream ReadFile3("p3.txt");
			ReadFile3 >> hs;
			if (score >= hs)
			{
				ofstream WriteFile3("p3.txt");
				WriteFile3 << score;
				cout << "                      CONGRATULATIONS IT'S THE NEW HIGH SCORE \n\n";
				WriteFile3.close();;
			}
			else
			{
				cout << "      Umaima, Your best score so far is " << hs << endl << endl;
			}
			ReadFile3.close();
		}
		else if (n == '4')
		{
			cout << "Login to save your score.\n\n";
		}

		cout << "Do you want to play again? (y/n or Y/N)\n";
		cin >> replay;

		while (replay != 'y' && replay != 'Y' && replay != 'n' && replay != 'N')
		{
			system("cls");
			cout << "Invalid Input!\nPlease Enter y/n or Y/N\n" << endl << "~";
			cin >> replay;
		}

	} while (replay == 'y' || replay == 'Y');

}
char  menu()
{
	system("Color 5F");

	char opt;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                     $To donate/support the creators press (5)$\n"
		<< "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                 ~To report a bug or to give new suggestions press (4)~\n"
		<< "                     $To donate/support the creators press (5)$\n"
		<< "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                            " << static_cast<char>(2) << "For social links press (3)" << static_cast<char>(2) << "\n"
		<< "                 ~To report a bug or to give new suggestions press (4)~\n"
		<< "                     $To donate/support the creators press (5)$\n"
		<< "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                              " << static_cast<char>(19) << "For rules press (2)" << static_cast<char>(19) << "\n"
		<< "                            " << static_cast<char>(2) << "For social links press (3)" << static_cast<char>(2) << "\n"
		<< "                 ~To report a bug or to give new suggestions press (4)~\n"
		<< "                     $To donate/support the creators press (5)$\n"
		<< "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                            " << static_cast<char>(5) << "To start game press (1)" << static_cast<char>(5) << "\n"
		<< "                              " << static_cast<char>(19) << "For rules press (2)" << static_cast<char>(19) << "\n"
		<< "                            " << static_cast<char>(2) << "For social links press (3)" << static_cast<char>(2) << "\n"
		<< "                 ~To report a bug or to give new suggestions press (4)~\n"
		<< "                     $To donate/support the creators press (5)$\n"
		<< "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "                                " << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << " M E N U " << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << "\n\n"
		<< "                            " << static_cast<char>(5) << "To start game press (1)" << static_cast<char>(5) << "\n"
		<< "                              " << static_cast<char>(19) << "For rules press (2)" << static_cast<char>(19) << "\n"
		<< "                            " << static_cast<char>(2) << "For social links press (3)" << static_cast<char>(2) << "\n"
		<< "                 ~To report a bug or to give new suggestions press (4)~\n"
		<< "                     $To donate/support the creators press (5)$\n"
		<< "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
	Sleep(0.5);
	system("cls");
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"
		<< "                                " << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << " M E N U " << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << static_cast<char>(15) << "\n\n"
		<< "                            " << static_cast<char>(5) << "To start game press (1)" << static_cast<char>(5) << "\n"
		<< "                              " << static_cast<char>(19) << "For rules press (2)" << static_cast<char>(19) << "\n"
		<< "                            " << static_cast<char>(2) << "For social links press (3)" << static_cast<char>(2) << "\n"
		<< "                 ~To report a bug or to give new suggestions press (4)~\n"
		<< "                     $To donate/support the creators press (5)$\n"
		<< "                       " << static_cast<char>(16) << "For recent and high scores press (6)" << static_cast<char>(17) << "\n"
		<< "                           " << static_cast<char>(167) << "To change profile press (7)" << static_cast<char>(167) << "\n"
		<< "                    " << static_cast<char>(243) << "To change password of your profile press (8)" << static_cast<char>(242) << "\n"
		<< "                           " << static_cast<char>(174) << "To delete your data press (9)" << static_cast<char>(175) << "\n"
		<< "                              " << static_cast<char>(127) << "To exit game press (0)" << static_cast<char>(127) << "\n\n"
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "~";
	cin >> opt;
	cout << endl;
	system("cls");
	return opt;
}
int  main()
{
	HWND hwnd = GetConsoleWindow();
	ShowWindow(hwnd, SW_SHOWMAXIMIZED);
	static CONSOLE_FONT_INFOEX  fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	char sel, pf;
	char back, input, again;
	string name;

	intro();
	GetCurrentConsoleFontEx(hOut, 0, &fontex);
	fontex.FontWeight = 700;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	// SetCurrentConsoleFontEx(hOut, 0, &fontex);

	pf = profile();

	if (pf == '1')
		name = "Hamza";
	else if (pf == '2')
		name = "Manahil";
	else if (pf == '3')
		name = "Umaima";
	else if (pf == '4')
	{
		ifstream Readname4("ps4.txt");
		Readname4 >> name;
		Readname4.close();
	}

	do {
		sel = menu();
		switch (sel)
		{
		case '1':
		{
			game(name, pf);
			break;
		}
		case '2':
		{
			rules(name);
			break;

		}
		case '3':
		{
			social(name);
			break;
		}
		case '4':
		{
			feedback(name);
			break;
		}
		case '5':
		{
			donate(name);
			break;
		}
		case '6':
		{
			high();
			break;
		}
		case '7':
		{
			pf = profile();
			if (pf == '1')
				name = "Hamza";
			else if (pf == '2')
				name = "Manahil";
			else if (pf == '3')
				name = "Umaima";
			else if (pf == '4')
			{
				ifstream Readname4("ps4.txt");
				Readname4 >> name;
				Readname4.close();
			}

			break;
		}
		case '8':
		{
			passwords(pf);
			break;
		}
		case '9':
		{
			deletedata(pf);
			break;
		}
		case '0':
		{
			cout << "Thanks " << name << ", for playing see you later " << static_cast<char>(1) << endl << endl;

			system("pause>0");
			return 0;
		}
		default:
		{	cout << "invalid input\n";
		}
		}
		if (sel != '1' && sel != '7')
		{
			cout << "\npress b(or B)to back.\n\n" << "~";
			cin >> back;
			while (back != 'b' && back != 'B')
			{
				system("cls");
				cout << "Invalid Input!\nPlease Enter b (or B)\n" << endl << "~";
				cin >> back;
			}
			system("cls");
			cout << endl;
		}
		back = 'b';
	} while (back == 'b' || back == 'B');
}
//                    <3