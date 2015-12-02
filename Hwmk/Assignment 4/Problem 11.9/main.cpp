/*
 * File: main.cpp
 * Created on: October 7, 2015
 * Author: Brian Ramirez
 * Purpose: This program lets the user enter
 * data into a structure array and lets the user
 * change any element of the structure.
 *
 */

#include <iostream>
#include <string>

using namespace std;

struct SpeakerBureau
{
	string name;
	unsigned int phoneNum;
	string topic;
	float fee;
};

void displayMenu(int);
void changeInfo(SpeakerBureau []);

int main()
{
// Declare variables
	const int SIZE = 10;
	SpeakerBureau speakers[SIZE];
	int choice;

// Display menu
	displayMenu(choice);
	if(choice == 1)
	{
		for(int i=0; i<SIZE; i++)
		{
			cout << "Enter the speaker's name: ";
			getline(cin, speakers[i].name);
			cout << "Enter the speaker's phone number: ";
			cin >> speakers[i].phoneNum;
			cin.ignore();
			cout << "Enter the speaker's topic: ";
			getline(cin,speakers[i].topic);
			cout << "Enter the speaker's required fee: ";
			cin >> speakers[i].fee;
			cin.ignore();
		}
	}
	else if(choice == 2)
	{
		changeInfo(speakers);
	}



	return 0;
}
void displayMenu(int choice)
{
	cout << "1. Enter a new speaker" << endl;
	cout << "2. Change the contents of an element" << endl;
	cout << "3. Display all the data for all the speakers" << endl;
	cout << "Choose one of the options above: ";
	cin >> choice;
	cin.ignore();
}

void changeInfo(SpeakerBureau spkrInfo[])
{
	int element;
	int change;
	cout << "Enter the element you would like to change: ";
	cin >> element;
	cout << "Enter what you would like to change: ";
	cin >> change;
	if(change == 1)
	{
		cout << "Enter the speaker's name: ";
		cin >> spkrInfo[element].name;
	}
	else if(change == 2)
	{
		cout << "Enter the speaker's phone number: ";
		cin >> spkrInfo[element].phoneNum;
	}


}
