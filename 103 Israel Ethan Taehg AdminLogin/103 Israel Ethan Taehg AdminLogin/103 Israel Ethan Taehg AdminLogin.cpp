#include <iostream>
//#include <header.h>

void AdminLogin();

std::string AdminUsername, AdminPassword;
//int Credentials = AdminUsername && AdminPassword;
bool success = false;

int main() {

    DrawLine(25);
    std::cout << "\nAdministration Login\n";
    DrawLine(25); std::cout << "\n\n";

}

void AdminLogin() {



    //try {


    DrawLine(15);

    std::cout << "\nUsername: ";
    std::cin >> AdminUsername;
    std::cout << std::endl;

    DrawLine(15);

    std::cout << "\nPasswod: ";
    std::cin >> AdminPassword;
    std::cout << std::endl;

    DrawLine(15);

    //Don't know the specific code here

    //*** will be error catcher ***

    /*if (AdminUsername && AdminPassword = true) {
        Credentials = success;
        success = true;
        DrawLine(15);
        std::cout << "\nLogin Successful\n";
        DrawLine(15);
    }*/

    /*else if (true)
    {

    }*/

    //}

    //catch (const std::exception&)
    //{

    //}

}


/*-daily & weekly reports
    includes dates, no trips?, payments, amount paid to drivers, NZ gross income, tax deduction, net amount?.
  -driver report
  -customer report
  -cancelation report*/