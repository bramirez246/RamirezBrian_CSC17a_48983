/*
 * File: main.cpp
 * Created on: October 9, 2015
 * Author: Brian Ramirez
 * Purpose:
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Declare structure
struct soccerPlayer
{
	string playerName;		// Input - Player's name
	int playerNum;			// Input - Player's team number
	int pointsScored;		// Input - Points scored by the player
};

int main()
{
//	Declare variables
	const int SIZE = 12;			// Size of array
	soccerPlayer players[SIZE];		// Array of type soccerPlayer
	float total = 0;					// Accumulates total points scored
	int highestPoints;				// Holds highest number of points
	string highPlayer;				// Holds player name with highest points
	int highNum;					// Holds the highest number
	float average;					// Holds the average points scored

//	Prompt user to enter player information
	for(int count = 0; count < SIZE; count++)
	{
		cout << "Enter the player's name." << endl;
		getline(cin, players[count].playerName);
		cout << "Enter the player's number." << endl;
		cin >> players[count].playerNum;
		cout << "Enter the number of points scored by player." << endl;
		cin >> players[count].pointsScored;
		cin.ignore(100, '\n');

		total += players[count].pointsScored;
	}

//	Compute average
 	average = total / SIZE;

//	Set highest player info to beginning of array and compare
	highestPoints = players[0].pointsScored;
	highNum = players[0].playerNum;
	highPlayer = players[0].playerName;
	for(int count = 1; count < SIZE; count++)
	{
		if(players[count].pointsScored > highestPoints)
		{
			highPlayer = players[count].playerName;
			highNum = players[count].playerNum;
			highestPoints = players[count].pointsScored;
		}
	}
	cout << left;
	cout << setw(25) << "Player Name" << setw(25) << "Player Number" << "Player points" << endl;
 	cout << "____________________________________________________________________" << endl;

//	Display table with player information
	for (int count = 0; count < SIZE; count++)
	{
		cout << setw(28) << players[count].playerName << setw(28) << players[count].playerNum
			 << players[count].pointsScored << endl;
	}

//	Display total and average
 	cout << "Total points scored by team: " << total << endl;
 	cout << fixed << setprecision(2)<< "Average points scored: " << average << endl;

//	Display player info with highest points
	cout << "Player who scored the most points: " << highPlayer << endl;
	cout << "Player's number: " << highNum << endl;
	cout << "Points scored by this player: " << highestPoints << endl;
	return 0;
}
