#pragma once
#include<fstream>
#include<iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <sstream>

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

string CSVOpenClose();

string TXTOpenClose();

void directWriteTXT(string fileName);
void readTXT(string fileName);
void readWriteTXT(string fileName);

void directWriteCSV(string fileName);
void readCSV(string fileName);
void editCSV(string fileName, string id);