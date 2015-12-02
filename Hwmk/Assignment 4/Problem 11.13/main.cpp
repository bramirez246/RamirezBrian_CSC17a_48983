/*
 * File: main.cpp
 * Created on: October 8, 2015 2:23 PM
 * Author: Brian Ramirez
 * Purpose: This program simulates a soda machine
 *
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct sodaMachine
{
	string name;
	double cost;
	int quantity;
};

int main()
{
	const int size = 5;
	sodaMachine soda[size] = {
								{"Cola", .75, 20},
								{"Root Beer", .75, 20},
								{"Lemon Lime", .75, 20},
								{"Grape Soda", .80, 20},
								{"Cream Soda", .80, 20}
							 };
	int index;
	int choice;
	float money;
	float change;
	float total = 0;

	cout << "1-Cola" << endl;
	cout << "2-Root Beer" << endl;
	cout << "3-Lemon Lime" << endl;
	cout << "4-Grape Soda" << endl;
	cout << "5-Cream Soda" << endl;
	cout << "6-Show total money made" << endl;
	cout << "Choose a soda(or press 6 to exit): ";
	cin >> choice;
	while(choice != 6)
	{

		cout << fixed << setprecision(2);
		cout << endl;
		cout << soda[choice-1].name << endl;
		cout << "Cost: " << "$" << soda[choice-1].cost << endl;
		cout << "Enter your amount of money: ";
		cin >> money;

		if(money > soda[choice-1].cost)
		{
			soda[choice-1].quantity -= 1;
			change = money - soda[choice-1].cost;
		}

		else
			cout << "\nYou need " << (soda[choice-1].cost - money) << " dollars";

		total += (money - change);
		cout << "\nYour change back $" << change << endl;
		cout << "Choose a soda(or press 6 to exit): ";
		cin >> choice;
	}
	cout << "\nThe machine made $" << total;

	return 0;
}
