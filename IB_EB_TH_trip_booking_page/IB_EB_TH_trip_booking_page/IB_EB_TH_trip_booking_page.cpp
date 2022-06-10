#include <iostream>
#include <string>
#include <CMATH>
#include <time.h> 
#include<windows.h>
#include <stdio.h>
using namespace std;


int main()
{
    //initializing variables
    bool run = true;
    int month;
    int day;
    int minute;

    while (run == true) {
        cout << "\nHere are all avaliable dates:\n\n";
        //read Read Trip_booking !must be replaced!
        cout << "\n\nAll dates are stored in number date format\nMonth, Days, Hours, and Minutes (eg Mon/d/h/m)";
        cout << "\n\nPlease choose an available date\n";
        bool confirm1 = false;
        while (confirm1 == false) 
        {
            
            while (true) {
                try {
                    cout << "\nMonth: ";
                    cin >> month;
                    if (month >= 1 && month <= 12)
                    {
                        break;
                    }
                    else 
                    {
                        throw(month);
                    }
                }
                catch (int month) {
                    cout << "\nInvalid input!\n" << month << " is not a valid month.\nPlease enter a valid month\n";
                }
            }
            while (true) {
                try {
                    cout << "\nDay: ";
                    cin >> day;
                    if (day >= 1 && day <= 31)
                    {
                        break;
                    }
                    else
                    {
                        throw(day);
                    }
                }
                catch (int day) {
                    cout << "\nInvalid input!\n"<< day <<" is not a valid day.\nPlease enter a valid month.\n";
                }
            }
            while (true) {
                try {
                    cout << "\nDay: ";
                    cin >> minute;
                    if (minute >= 0 && minute <= 60)
                    {
                        break;
                    }
                    else
                    {
                        throw(minute);
                    }
                }
                catch (int minute) {
                    cout << "\nInvalid input!\n" << minute << " is not a valid day.\nPlease enter a valid month.\n";
                }
            }



            cout << "check 1";
        }


    }

}

