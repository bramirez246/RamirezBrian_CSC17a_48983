/*
 * File: main.cpp
 * Created on: October 8, 2015 3:32 PM
 * Author: Brian Ramirez
 * Purpose: This program budgets a students
 * expenses for school
 *
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Budget
{
	string name;
	float monthly;
	float newMonthly;
	float change;
};

float InputBudget(Budget money[]);
void OutputBudget(Budget money[]);

int main()
{
//	Declare variables
	float totalMonthly = 0;
	float totalExp = 0;
	const int size = 11;
	Budget money[size] = {
							{"Housing", 500.00, 0, 0 },
							{"Utilities",150.00, 0, 0 },
							{"Household Expenses", 65.00, 0, 0},
							{"Transportation", 50.00, 0, 0 },
							{"Food", 250.00, 0, 0},
							{"Medical", 30.00, 0, 0 },
							{"Insurance", 100.00, 0, 0 },
							{"Entertainment", 150.00, 0, 0 },
							{"Clothing", 75.00, 0, 0 },
							{"Miscellaneous", 50.00, 0, 0}
						 };

//	Prompt user to enter budgets
	totalExp = InputBudget(money);
 	OutputBudget(money);

 	for(int count= 0; count < size; count ++)
 	{
 		totalMonthly += money[count].monthly;

 	}

 	cout << endl;

 	if(totalExp > totalMonthly)
		cout << "\nMonthly budget went over: $" << (totalExp - totalMonthly);

 	else
		cout << "\nMonthly budget went under: $" << (totalMonthly - totalExp);

	return 0;
}

//	Define function InputBudget
float InputBudget(Budget money[])
{
	float totalExpnse;
	for(int count = 0; count < 10; count++)
	{
		cout << "Enter a budget for each category: " << endl;
		cin >> money[count].newMonthly;
		totalExpnse += money[count].newMonthly;
	}
	return totalExpnse;
}

//	Define function OutputBudget
void OutputBudget(Budget money[])
{
	//float exp;
	for(int count = 0; count < 10; count++)
	{
		if(money[count].newMonthly > money[count].monthly)
		{
			money[count].change=money[count].newMonthly - money[count].monthly;
			cout << "\nMonthly expenses of "<<money[count].name<< " went over: "
				 << "$" <<money[count].change;
		}
		else
		{
			money[count].change = money[count].monthly- money[count].newMonthly;
			cout << "\nMonthly expenses of "<<money[count].name<< " still have: "
				 << "$" << money[count].change;
		}
	}
}
