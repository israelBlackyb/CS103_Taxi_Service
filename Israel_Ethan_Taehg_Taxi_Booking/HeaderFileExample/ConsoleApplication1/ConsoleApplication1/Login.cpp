#include <iostream>
#include "login.h"
struct User {
	string user = "";
	string pass = "";
};

int login(string user, string pass) {
	int usercount/* = file.num*/;
	User* myUser = new User();
	for (int i = 0; i < usercount; i++) {
		if (myUser[i].user == user && myUser[i].pass == pass) {
			std::cout << "Successfully logged in\n";
		}
		else {
			return 0;
		}
	}
}