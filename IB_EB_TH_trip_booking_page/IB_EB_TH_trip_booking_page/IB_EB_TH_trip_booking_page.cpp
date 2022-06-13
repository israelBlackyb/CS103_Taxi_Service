#include <iostream>
#include <string>
#include <CMATH>
#include<windows.h>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <fstream>
#include<ctime>
using namespace std;


int readForID() { 
    fstream fileBooking;
    string line;
    int id = 0;

    
    fileBooking.open("grades.csv", ios::in);

    
    if (fileBooking.is_open()) {
        
        while (getline(fileBooking, line)) {
            id++;
        }
    }
    else {
        cout << "\nNo File Found\n";
    }
    return id + 1;
}

void bookTaxi(int month, int day, int hour, int minute, string name, int startStreetNumber, string startStreetName, string startSuburb, string startCity, int endStreetNumber, string endStreetName, string endSuburb, string endCity) {
    fstream fileBooking;
    int booking_id = readForID();
    fileBooking.open("bookings.csv", ios::out | ios::app);
    if (!fileBooking) {
        cout << "\nWARNING: Cannot open file\n";
        return;
    }



    if (minute < 10) {
        fileBooking << booking_id  <<", " << name << ", " << month << ", " << day << ", " << hour << ", 0" << minute << startStreetNumber << ", " << startStreetName << ", " << startSuburb << ", " << startCity << ", " << endStreetNumber << ", " << endStreetName << ", " << endSuburb << ", " << endCity << "\n";
    }
    else
    {
        fileBooking << booking_id << ", " << name << ", " << month << ", " << day << ", " << hour << ", " << minute << startStreetNumber << ", " << startStreetName << ", " << startSuburb << ", " << startCity << ", " << endStreetNumber << ", " << endStreetName << ", " << endSuburb << ", " << endCity << "\n";
    }

    fileBooking.close();
}

int main()
{
    //username (should be getting this from the logged_in_page)!must be replaced!
    string username = "tester";
    //initializing variables
    bool run = true;
    int month;
    int day;
    int hour;
    int minute;
    string name;
    char confirm;
    //Starting location details
    int startStreetNumber;
    string startStreetName;
    string startSuburb;
    string startCity;
    //Destination details
    int endStreetNumber;
    string endStreetName;
    string endSuburb;
    string endCity;


    while (run == true)
    {
        cout << "\nHere are all the taken dates:\n\n";
        //read Read Trip_booking !must be replaced!
        cout << "\n\nAll dates are stored in number date format\nMonth, Days, Hours, and Minutes (eg Mon/d/h/m)";
        Sleep(3000);
        cout << "\n\nPlease choose an available date\n";
        Sleep(1000);
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
            Sleep(1000);
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
                    cout << "\nInvalid input!\n" << day << " is not a valid day.\nPlease enter a valid month.\n";
                }
            }
            Sleep(1000);
            while (true) {
                try {
                    cout << "\nHour (24 style, 1-12 is AM 13-24 is PM): ";
                    cin >> hour;
                    if (hour >= 1 && hour <= 24)
                    {
                        break;
                    }
                    else
                    {
                        throw(hour);
                    }
                }
                catch (int hour) {
                    cout << "\nInvalid input!\n" << hour << " is not a valid time.\nPlease enter a valid hour.\n";
                }
            }
            Sleep(1000);
            while (true) {
                try {
                    cout << "\nMinute: ";
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
                    cout << "\nInvalid input!\n" << minute << " is not a valid time.\nPlease enter a valid minute.\n";
                }
            }
            Sleep(1000);
            cout << "\nPlease enter the name of the Main User\n:";
            cin >> name;
            Sleep(1000);
            cout << "\nPlease be aware that the more details you include the easier it will be for our drives to find " << name;
            Sleep(3000);
            cout << ".\nPlease enter the Starting location.\n";
            while (true) {
                try {
                    cout << "\nStreet number:";
                    cin >> startStreetNumber;
                    if (startStreetNumber < 1 || startStreetNumber > 986039) {
                        throw(startStreetNumber);
                    }
                    else {
                        break;
                    }
                }
                catch (int startStreetNumber) 
                {
                    cout << "\nInvalid input!\n" << startStreetNumber << " is not a valid street number.\nPlease enter a valid street number.\n";
                }
            }
            Sleep(1000);
            cout << "\nStreet name: ";
            cin >> startStreetName;
            Sleep(1000);
            cout << "\nSuburb name: ";
            cin >> startSuburb;
            Sleep(1000);
            cout << "\nCity name: ";
            cin >> startCity;
            Sleep(1000);
            
            cout << "\n\nPlease also be aware that the more details you include the easier it will be for our drives to find the correct destination,\nand we are not liable for any consequences caused by incorrect information being submited as per Terms & Services.";
            Sleep(3000);
            cout << "\n\nPlease enter the Destination.\n ";
            while (true) {
                try {
                    cout << "\nStreet number:";
                    cin >> endStreetNumber;
                    if (endStreetNumber < 1 || endStreetNumber > 986039) {
                        throw(endStreetNumber);
                    }
                    else {
                        break;
                    }
                }
                catch (int endStreetNumber)
                {
                    cout << "\nInvalid input!\n" << endStreetNumber << " is not a valid street number.\nPlease enter a valid street number.\n";
                }
            }
            Sleep(1000);
            cout << "\nStreet name: ";
            cin >> endStreetName;
            Sleep(1000);
            cout << "\nSuburb name: ";
            cin >> endSuburb;
            Sleep(1000);
            while (true)
            {
                try {
                    cout << "\nIs the destination city the same??\n(y/n): ";
                    cin >> confirm;
                    confirm = tolower(confirm);
                    if (confirm != 'y' && confirm != 'n') {
                        throw(confirm);
                    }
                    else if (confirm == 'y')
                    {
                        endCity == startCity;
                        break;
                    }
                    else
                    {
                        cout << "\nCity name: ";
                        cin >> endCity;
                        break;
                    }
                    break;
                }
                catch (char confirm) {
                    cout << "\nInvalid input!\nPlease only enter 'y' for yes and 'n' for no.\n";
                }
            }
            Sleep(1000);

            //condintoal statmente thr reqiures ALOT of information from the booking_file !must be replaced!
            while (true) {
                try {
                    if (minute < 10) {
                        cout << "\nBooking time: " << month << " Month on the " << day << " Day at " << hour << ":0" << minute;
                        cout << "\nTrip: " << name << " will be traveling from " << startStreetNumber<< " " << startStreetName << " street in " << startSuburb << ", " << startCity << "\nto " << endStreetNumber << " " << endStreetName << " street in " << endSuburb << ", " << endCity << ".\n";
                        Sleep(5000);
                        cout << "\nDo wish to book a taxi with the above information " << username << "?\n(y/n): ";
                    }
                    else {
                        cout << "\nBooking time: " << month << " Month on the " << day << " Day at " << hour << ":" << minute;
                        cout << "\nTrip: " << name << " will be traveling from " << startStreetNumber << " " << startStreetName << " street in " << startSuburb << ", " << startCity << "\nto " << endStreetNumber << " " << endStreetName << " street in " << endSuburb << ", " << endCity << ".\n";
                        Sleep(5000);
                        cout << "\nDo wish to book a taxi with the above information " << username << "?\n(y/n): ";
                    }
                    cin >> confirm;
                    confirm = tolower(confirm);
                    if (confirm != 'y' && confirm != 'n') {
                        throw(confirm);
                    }
                    else if (confirm == 'y')
                    {
                        run = false;
                        break;
                    }
                    else
                    {
                        while (true)
                        {
                            try {
                                cout << "\nWould you like to Book with diffrent information?\n(y/n): ";
                                cin >> confirm;
                                confirm = tolower(confirm);
                                if (confirm != 'y' && confirm != 'n') {
                                    throw(confirm);
                                }
                                else if (confirm == 'n')
                                {
                                    run = false;
                                    break;
                                }
                                else
                                {

                                    break;
                                }
                                break;
                            }
                            catch (char confirm) {
                                cout << "\nInvalid input!\nPlease only enter 'y' for yes and 'n' for no.\n";
                            }
                        }
                        break;
                    }
                }
                catch (char confirm) {
                    cout << "\nInvalid input!\nPlease only enter 'y' for yes and 'n' for no.\n";
                }
            }



    }
    //User's information actally gets booked and added to the booking file
    if (confirm == 'y') {
        bookTaxi(month, day, hour, minute, name, startStreetNumber, startStreetName, startSuburb, startCity, endStreetNumber, endStreetName, endSuburb, endCity);
        cout << "\n\nYour taxi has been booked for the " << month << " Month, on the " << day << " Day, at" << hour << ":" << minute << " for " << name <<",\n Thank you for choosing Black and White cab Co";
    }
}

