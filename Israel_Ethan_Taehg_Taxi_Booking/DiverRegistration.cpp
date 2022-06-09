// Israel_Ethan_Taehg_Taxi_Booking.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Header.h"

struct newDriver{ //new driver detail input, creates a new driver
	string fullName;
	char gender; //male, female, other
	string date; //dd/mm/yyyy
	string nationality;
	string licenceNumber;
	string expiryDate; //dd/mm/yyyy
	int contactNumber;
	string email;
	string address; //num, street, suburb, city/region
	int bankAccountNumber;
	int vehicleRegoNum;
	string vehicleModel;
	string wofExpiryDate;
	int endorsmentNumber; //srand
	int endorsmentExpiry; //6 months from date of registration (date)`
};

int main()
{
	DrawLine(15);
	cout << "Welcome New Driver\n";
	DrawLine(15);
	cout<<"Please fill out the following check:\n";
	
}

bool eligiblityCheck(bool eligible) {
	int licenceType;
	cout << "What kind of licence do you have:\, 1. Learners\n 2. Restricted\n 3.Full\n 4. None\nChoose:"; cin >> licenceType;
		
	if (licenceType == 1||2||4) {
		cout << "Invalid Licence Type, you require a full liscnence to drive a taxi\n\n";
		//go back to main menu
	}

	else if (licenceType != 1 || 2 || 3 || 4) {
		cout << "Invalid Input, please select the appropriate answer\n\n"; .
			eligiblityCheck(eligible);
	}


}