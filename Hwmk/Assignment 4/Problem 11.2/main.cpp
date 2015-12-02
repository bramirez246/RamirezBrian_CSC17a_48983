/*
 * File: main.cpp
 * Created on: October 8, 2015
 * Author: Brian Ramirez
 * Purpose: This program displays a movie's data
 * including its budget and gross
 *
 */

 #include <iostream>
 #include <string>
 #include <iomanip>
 using namespace std;

 struct movieData
   {
	string title;		// Holds the movie's title
	string director;	// Holds the director's name
	string year;		// Holds the year when movie was released
	float runTime;		// Holds the length of the movie in minutes
	float production; 	// Holds the
	float reve;			//
   };

 void inmovieData(movieData&);
 void outmovieData(movieData);

	int main()
	{

	movieData first;
	movieData second;

	inmovieData(first);
	inmovieData(second);

	cout << endl;
 	cout << setw(5) << "Movie" << setw(21) << "Director"
 		 << setw(15) << "Year" << setw(19) << "RunTime(min)"
 		 << setw(20) << "Budget(millions)" << setw(18)
 		 << "Gross(millions)" << endl;
	outmovieData(first);
	outmovieData(second);

	return 0;
}
 void inmovieData(movieData &p)
 {
 	cout << "Enter the movie's title: ";
 	getline(cin, p.title);

 	cout << "\nEnter the movie's director: ";
 	getline(cin, p.director);

 	cout << "\nEnter the movie's year released: ";
 	cin >> p.year;

 	cout << "\nEnter the movie's run time: ";
 	cin >> p.runTime;

 	cout << "\nEnter the movie's production cost: ";
 	cin >> p.production;

 	cout << "\nEnter the movie's first year revenue: ";
 	cin >> p.reve;

 	cin.ignore(265, '\n');
 }
 void outmovieData(movieData p)
 {
 	cout << left;
 	cout << setw(17)  << p.title << setw(20) << p.director
 		 << setw(14) << p.year  << setw(14) << p.runTime
 		 << setw(19) << p.production << setw(18) << p.reve << endl;
 }


