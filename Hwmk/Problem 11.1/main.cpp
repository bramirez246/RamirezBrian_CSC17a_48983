/*
 * File: main.cpp
 * Created on: October 8, 2015 1:53
 * Author: Brian Ramirez
 * Purpose: This program displays movie data
 *
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure for movie data type
struct movieData
 {
	string title;		// Holds the title of movie
	string director;	// Holds the director's name
	string year;		// Holds the year when the movie was released
	float runTime;		// Holds the length of the movie in minutes
 };

 // Function prototypes
 void inMovieData(movieData&);
 void outMovieData(movieData);

int main()
{
// Declare variables
	movieData first;		// Variable of type movieData
	movieData second;		// Second variable of type movieData

// Read in information about the movies
	inMovieData(first);
	inMovieData(second);

// Output the headings for the movie data
	cout << endl;
 	cout << setw(5) << "Movie" << setw(21) << "Director"
 		 << setw(15) << "Year" << setw(19) << "RunTime(min)" << endl;
 // Output the data
	outMovieData(first);
	outMovieData(second);

	return 0;
}
// Defining function inMovieData
 void inMovieData(movieData &p)
 {
 	cout << "Enter the movie's title: ";
 	getline(cin, p.title);

 	cout << "\nEnter the movie's director: ";
 	getline(cin, p.director);

 	cout << "\nEnter year of movie's release: ";
 	cin >> p.year;

 	cout << "\nEnter the movie's run time: ";
 	cin >> p.runTime;
 	cin.ignore(100, '\n');
 	cout << endl;
 }
 // Defining function outMovieData
 void outMovieData(movieData p)
 {
	 cout << left;
	 cout << setw(16) << p.title << setw(21) << p.director
		  << setw(15) << p.year <<  p.runTime << endl;
 }


