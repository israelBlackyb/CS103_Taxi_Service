#pragma once
#include<windows.h>
#include <stdio.h>
#include <iomanip>
#include<fstream>
#include<iostream>
#include <string>
#include <vector>
#include <sstream>
#include <time.h> 

//stds
using std::cin;
using std::cout;
using std::string;
using std::ios;
using std::fstream;
using std::endl;
using std::getline;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::stringstream;
using std::setprecision;

string CSVOpenClose();

string TXTOpenClose();

//read and writing file fuctions
void directWriteTXT(string fileName);
void readTXT(string fileName);
void directWriteCSV(string fileName);
void readCSV(string fileName);
//Accounts
void admin();
void driver(string driverID);
void user(string userName);
//Pages
void Booking(string username);