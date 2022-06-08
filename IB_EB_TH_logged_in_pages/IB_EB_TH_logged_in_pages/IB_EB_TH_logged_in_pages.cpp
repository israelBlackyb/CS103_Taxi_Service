#include <iostream>
#include <string>
#include <CMATH>
#include <time.h> 
#include<windows.h>
#include <stdio.h>
using namespace std;
#include <vector>

//the Menu template I made.
/*void mainMenuTemplate()
{
	bool run = true;
	int menuOption;
	//DrawLine()
	cout << "1 for Admin login|2 for Operator login|3 for User login|4 to quit\n";
	//DrawLine()


	while (run == true)
	{
		int menuOption = 0;
		try
		{
			cin >> menuOption;
			if (menuOption < 1 || menuOption > 4)
			{
				throw(menuOption);
			}
			else {
				break;
			}
		}
		catch (int menuOption)
		{
			cout << "\nInvaild input!\nYou must a valid number corosponding to the avalable options\n";
		}
	}

	switch (menuOption)
	{
	case 1:
		//Admin login fuction
		cout << "\nlogin fuction 0\n";
		break;
	case 2:
		//Operator login fuction
		cout << "\nlogin fuction 1\n";
		break;
	case 3:
		//User login fuction
		cout << "\nlogin fuction 2\n";
		break;
	case 4:
		run = false;
		break;





		//For observation perpouses, remove  once code is ready
		while (true)
		{
			cout << "\nwait\n";
			int wait;
			cin >> wait;
		}
	}
}*/

//accounts
void admin()
{

}
void driver(string driverID)
{

}
void user(string userName)
{

}

int main()
{
	// initializing Varables 
	bool runLogged = true;
	string adminPas = "CrazyTaxi";
	string pasInput;
	string userName;
	string driverID;
	//accountID should get the account type from the main menu as a Char. 'a' = Admin, 'd' = Driver(operator), 'u' = User. !must be replaced!
	char accountType = 'x';
	cout << "\nInput test type: ";
	cin >> accountType;
	while (runLogged == true)
	{
		bool search = true;
		try
		{
			if (accountType != 'a' && accountType != 'd' && accountType != 'u')
			{
				throw(accountType);
			}
		}
		catch (char accountType)
		{
			cout << "\nERROR: accountType Invalid";
		}
		switch (accountType) {
		case 'a':
			cout << "\nPlease Enter Admin password: ";
			cin >> pasInput;
			for (int i = 0; i < 3; i++)
			{
				if (pasInput == adminPas)
				{
					admin();
					i = 3;
				}
				else
				{
					cout << "\nIncorrect password.\n" << 3 - i << " Tries left \nPlease Enter correct Admin password: ";
					cin >> pasInput;
				}
			}
			runLogged = false;
			break;
		case 'd': {


			//supposed to get total amount of drivers !must be replaced!
			int driverCount = 10;
			// string That Reads A File Or Struct That Holds All Driver Information And Gets The IDList !must be replaced!
			string driverIDlist[10] = { "dr1", "dr2", "dr3", "dr4", "dr5" , "dr6" , "dr7" , "dr8" , "dr9" , "dr10"};
			int dCounter = 0;
			cout << "\nPlease enter your Driver ID: ";
			cin >> driverID;
			while (dCounter <= driverCount && search == true)
			{
				if (driverID == driverIDlist[dCounter])
				{
					search = false;
				}
				dCounter++;
			}
			if (dCounter > driverCount)
			{
				cout << "\nNo such ID exists.\n";
			}
			else 
			{
				driver(driverID);
			}
			runLogged = false;
			break;
		}
		case 'u': {
			//supposed to get total amount of users!must be replaced!
			int userCount = 10;
			// string That Reads A File Or Struct That Holds All Driver Information And Gets The IDList !must be replaced!
			string userNamesList[10] = { "u1", "u2", "u3", "u4", "u5" , "u6" , "u7" , "u8" , "u9" , "u10" };
			//place holder for aformentioned File Or Struct but storing passwords!must be replaced!
			string userpasswordList[10] = { "p1", "p2", "p3", "p4", "p5" , "p6" , "p7" , "p8" , "p9" , "p10" };
			int uCounter = 0;
			try 
			{
				cout << "\nPlease enter you username: ";
				cin >> userName;
				while (uCounter <= userCount && search == true)
				{
					if (userName == userNamesList[uCounter])
					{
						search = false;
					}
					uCounter++;
				}
				//string userpassword [uCounter];
				string password = userpasswordList[uCounter];
				cout << "\nPlease Enter your password " << userName << ": ";
				cin >> pasInput;
				for (int i = 0; i < 3; i++)
				{
					if (pasInput == password)
					{
						user(userName);
						i = 3;
					}
					else
					{
						cout << "\nIncorrect password.\n" << 3 - i << " Tries left \nPlease Enter correct password: ";
						cin >> pasInput;
					}
				}
				if (uCounter > userCount)
				{
					throw(userName);
				}
				
			}
			catch(string userName)
			{
				cout << "\nThe username '"<< userName <<"' doesn't exist.\n";
				runLogged = false;
				break;
			}
			//
			for (int i = 0; i < 3; i++)
			{

			}
			runLogged = false;
			break;
		}
		default:
			runLogged = false;
			break;
		}
	}









	//For observation perpouses, remove  once code is ready
	while (true)
	{
		cout << "\nwait\n";
		int wait;
		cin >> wait;
	}
}