#include <iostream>
#include "Header.h"

void Menu();

int main() {
    
    DrawLine(25); cout << endl;
    cout << "Administration Menu\n";
    DrawLine(25);
    cout << endl << endl;

    Menu();
}


void Menu() {

    int menu, reportWeek;
    int trips = 34, payments = 89;

    string date;

    DrawLine(15); cout << endl;
    cout << "what would you like to look at?\n";
    DrawLine(15);
    cout << "\n[1]Weekly reports\n[2]Driver reports\n[3]Customer reports\n[4]Cancellation reports\n";
    cin >> menu;
    DrawLine(15); cout << endl;

    switch (menu) {

    case 1:
        //reports
        cout << "\nweekly reports: ";
        cout << "\nWeek[1]\nWeek[2]\nWeek[2]\n";
        cin >> reportWeek;
        
        switch (reportWeek) {
            
        case 1:
            //week 1 reports
            cout << "date: " << date << endl;
            cout << "number of trips: " << trips << endl;
            cout << "payments made: " << payments << endl;
            break;

        case 2:
            break;

        case 3:
            break;

        }

        break;
        //------
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    }

}