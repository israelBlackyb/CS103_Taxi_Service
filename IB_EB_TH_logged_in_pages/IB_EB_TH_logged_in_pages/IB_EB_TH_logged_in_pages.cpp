
#include <iostream>
#include <string>
#include <CMATH>
#include <time.h> 
#include<windows.h>
#include <stdio.h>
using namespace std;
#include <vector>


void mainMenuTemplate()
{
	bool run = true;
	int menuOption;
	//DrawLine()
	cout << "1 for Admin login|2 for Operator login|3 for User login|4 to quit\n";
	//DrawLine()


	while (true)
	{
		int menuOption;
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
		return 0;
		break;





		//For observation perpouses, remove  once code is ready
		while (true)
		{
			cout << "\nwait\n";
			cin >> menuOption;
		}
	}
}



int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
