#include <iostream>
#include <string>
#include "landing.h"

int main() {
	string user, pass;
	char log;
	std::cout << "Log in or Sign up?" << "\nL/S\n";
	std::cin >> log;
	switch ((char)tolower(log)) {
	case 'l':
		std::cout << "Please enter your username, followed by password\n";
		getline(std::cin, user);
		getline(std::cin, pass);
		return login(user, pass);
	case 's':
		signup();
		break;
	}
}