/*
 * File: main.cpp
 * Created on: October 5, 2015 8:52 AM
 * Author: Brian Ramirez
 *
 */

#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <cctype>
using namespace std;


void loadFile(ifstream& , char[] , int&, const int);

int main()
{
	// Declare variables
	ifstream inFile;
	ofstream outFile;
	string inFileName;
	string outFileName;
	int size = 80;
	char sentences[size];

	//string sentence[size];
	char copyFile[100];
	int numSent;

	// Prompt user for file names
	cout << "Enter the name of the input file you want to open. ";
	cin >> inFileName;
	//cout << "Enter the name of the output file you want to open. ";
	//cin >> outFileName;
	//cin.ignore(100, '\n');
	cout << endl;

	inFile.open(inFileName.c_str());
	loadFile(inFile, copyFile, numSent, size);
	inFile.close();

	toupper(copyFile[0]);

	int count = 0;
	while(!inFile.eof())
	{
		tolower(copyFile[100]);
	}



	for(int i = 0; i < numSent;i++)
	{
		cout << copyFile[i] << " ";
	}


	return 0;
}

void loadFile(ifstream& inFile, char sentence[] , int& numSent, const int size)
{
	int count = 0;
	inFile >> sentence[0];
	while(!inFile.eof() && count < size)
	{
		inFile >> sentence[count];
		//inFile.ignore(100, '\n');
		numSent = count + 1;
		count++;
	}
}

