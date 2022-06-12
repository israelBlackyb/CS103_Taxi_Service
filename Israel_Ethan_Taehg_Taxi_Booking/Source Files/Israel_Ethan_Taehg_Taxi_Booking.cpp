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

void LandingMenuSelect() { //user gives input, validates login and password OR allows user to register which writes relevent info to file for future validation
    string userUsername, userPassword, operatorUsername, operatorPassword, adminUsername, adminPassword; 
    bool userUsernameValid = false;
    bool userPasswordValid = false;
    bool opUsernameValid =false;
    bool opPasswordValid = false;
    bool adminUsernameValid = false;
    bool adminPasswordValid = false;

    DrawLine(11); cout << endl;
    cout << "Main Menu *\n";
    DrawLine(11); cout << endl;

    cout << "1. Customer Login\n"<<"2. Customer Sign Up\n"<<"3. Driver Login\n"<<"4. Driver Registration\n"<<"5. Admin Options\n"<<"6. Exit\n";
    cout << "Choose: "; cin >> landingInput;

    switch (landingInput)
    {
    case 1: //customer Login
        cout << "Please Enter your username\n"; cin >>userUsername; //add tolower()
        cout << "Please Enter your password\n"; cin >> userPassword;
        
        while (true) { //turn into function later
            // read customer username
            if (userUsername == "tester") { //tester is a placeholder until file reading is completed
                userUsernameValid = true;
                break;

                if (userPassword == "password") { //password is a placeholder until file reading is complete
                    userPasswordValid = true;
                    break;
                    //takes user to relevent page
                } 
                else {
                    cout << "invalid password, try again\n";
                }
            }
            else {
                cout << "Invalid username, please try again\n";
                    
            }

        }
        break;
    case 2: //customer Sign Up
        cout << "Placeholder2\n";
        break; 
    case 3: //driver login
        cout << "Please Enter your username\n"; cin >> operatorUsername;
        cout << "Please Enter your password\n"; cin >> operatorPassword;
        while (tryAgain == true) { //turn into function later
    // read customer username
            if (operatorUsername == "tester") { //tester is a placeholder until file reading is completed
                opUsernameValid = true;
                tryAgain = false;

                if (operatorPassword == "password") { //password is a placeholder until file reading is complete
                    opPasswordValid = true;
                    tryAgain = false;
                    //takes user to relevent page
                }
                else {
                    cout << "invalid password, try again\n";
                }
            }
            else {
                cout << "Invalid username, please try again\n";

            }

        }
        break;
    case 4: //driver registration
        cout << "Placeholder4\n";
        break;
    case 5: //admin login
        cout << "Please Enter your username\n"; cin >> adminUsername;
        cout << "Please Enter your password\n"; cin >> adminPassword;
        while (tryAgain == true) { //turn into function later
    // read customer username
            if (adminUsername == "admin"||"Admin") { 
                adminUsernameValid = true;
                tryAgain = false;

                if (adminPassword == "password") { //password is a placeholder until file reading is complete
                    adminPasswordValid = true;
                    tryAgain = false;
                    //takes user to relevent page
                }
                else {
                    cout << "invalid password, try again\n";
                }
            }
            else {
                cout << "Invalid username, please try again\n";

            }
        }
        break;
    case 6: //exit
        break;
    default:
        cout << "Invalid Option, please enter 1-6\n\n\n";
        LandingMenuSelect();
        break;
    }
}

