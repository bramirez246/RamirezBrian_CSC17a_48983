/*
 * File: main.cpp
 * Created on: November 14, 2015
 * Author: Brian Ramirez
 */

//System Libraries
#include <iostream>
#include <string.h>
using namespace std;

//Class declaration
class Date
{
		int month;				//Input month
		int day;				//Input day
		int year;				//Input year
	public:
		void input();			//Getting month, day, year inputs
		void display1();		//Display in month/day/year
		void display2();		//Display in fully spelled month/day/year

}today;

// Defining the input member function
void Date::input()
{
		cout << "Enter the day: ";		//Prompt for user's input
		cin >> day;							//Input date
		while(day > 31 && day < 1)			//Validate input for day 1-31
			{
				//Asking to re-enter the date again within the range
				cout << "\nInvalid! Please re-enter: ";
				cin >> day;					//Input date
			}

		cout << "Enter the month: ";		//Prompt for user's input
		cin >> month;						//Input month
		while(month > 12 && month < 1)		//Validate input for month 1-12
			{
				//Asking to re-enter the date again within the range
				cout << "\nInvalid! Please re-enter: ";
				cin >> month;				//Input month
			}

	cout << "Enter the year: ";			//Prompt for user's input
	cin >> year;							//Input year
}

// Defining display1 member function
void Date::display1()
{
	//Output in format month/day/year
	cout << endl;
	cout << month << "/" << day << "/" << year << endl;
}

// Defining display2 member function
void Date::display2()
{
	string fullMonth;						//Spelled month

	switch (month)							//If month displayed
	{
	case 1: fullMonth = "January";   break;	//1 is Jan
	case 2: fullMonth = "February";  break;	//2 is Feb
	case 3: fullMonth = "March";     break;	//3 is Mar
	case 4: fullMonth = "April";     break;	//4 is Apr
	case 5: fullMonth = "May";       break;	//5 is May
	case 6: fullMonth = "June";      break; //6 is Jun
	case 7: fullMonth = "July";      break;	//7 is Jul
	case 8: fullMonth = "August";    break;	//8 is Aug
	case 9: fullMonth = "September"; break;	//9 is Sep
	case 10: fullMonth = "October";  break;	//10 is Oct
	case 11: fullMonth = "November"; break;	//11 is Nov
	case 12: fullMonth = "December"; break;	//12 is Dec
	default: break;							//else break

	}
	//Output is format fully-spelled month/day/year
	cout << fullMonth << " " << day << ", " << year << endl;

	//Output is format fully-spelled day/month/year
	cout << day << " " << fullMonth << " " << year << endl;
}

int main()
{
	today.input();			//Initialize function input()
	today.display1();		//Initialize function display1()
	today.display2();		//Initialize function display2()

	return 0;				//End code
}
