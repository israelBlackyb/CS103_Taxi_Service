// Israel_Ethan_Taehg_Taxi_Booking.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Header.h"

//landing prototype functions
void LandingMenuSelect();

int landingInput;

int main()
{
    DrawLine(25);
    cout << "\nBlack & White Cab Co."<<endl; //business title
    DrawLine(25); cout << endl;
    DrawLine(25); cout << "\n\n";

    cout << "Terms & Conditions:\n";
    DrawLine(25);
    cout << "\nPlease Pay\n\n";

    LandingMenuSelect();
}

void LandingMenuSelect() {
    DrawLine(11); cout << endl;
    cout << "Main Menu *\n";
    DrawLine(11); cout << endl;

    cout << "1. Customer Login\n"<<"2. Customer Sign Up\n"<<"3. Driver Login\n"<<"4. Driver Registration\n"<<"5. Admin Options\n";
    cout << "Choose: "; cin >> landingInput;

    switch (landingInput)
    {
    case 1:

    default:
        break;
    }
}