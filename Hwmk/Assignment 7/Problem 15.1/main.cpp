/*
 * File: main.cpp
 * Created on: December 1, 2015
 * Author: Brian Ramirez
 */

#include <iostream> 				//Input/Output stream Library
#include <iomanip>  				//Format Library
using namespace std;				//Utilize standard name-space directly

// Declare class employee
class employee
{
	private:
		string employeeName;
		int employeeNum;
		int hireDay;
		int hireYear;
		int hireMonth;

	public:
		employee(string name, int num, int d, int m, int y)
		{
			employeeName = name;
			employeeNum = num;
			hireDay = d;
			hireYear = y;
			hireMonth = m;
		}
		// Class member functions
		void setEmplName();
		string getEmplName() const;
		void setEmplNumber();
		int getEmplNumber() const;
		void setHireDate();
		int getHireDate() const;

// Setter function for employee name
	void setEmplName(string name)
	{
		employeeName = name;
	}
// Getter function for employee name
	string getEmplName()
	{
		return employeeName;
	}
// Setter function for employee number
	void setEmplNumber(int n)
	{
		employeeNum = n;
	}
// Getter function for employee number
	int getEmplNumber()
	{
		return employeeNum;
	}
// Setter function for hire day
	void setHireDay(int d)
	{
		hireDay = d;
	}
// Getter function for hir day
	int getHireDay()
	{
		return hireDay;
	}
// Setter function for hire month
	void setHireMonth(int m)
	{
		hireMonth = m;
	}
// Getter function for hire month
	int getHireMonth()
	{
		return hireMonth;
	}
// Setter function for hire year
	void setHireYear(int y)
	{
		hireYear = y;
	}
// Getter function for hire year
	int getHireYear()
	{
		return hireYear;
	}
};

// Declare class production Worker
	class productionWorker
	{
	private:
		int shift;
		float hourlyPayRate;

	public:
		productionWorker(int s, float hpr)
		{
			shift = s;
			hourlyPayRate = hpr;
		}
		// Class member functions
		void setShift();
		int getShift() const;
		void setHourlyPayRate();
		float getHourlyPayRate() const;
// Setter function for shift
	void setShift(int s)
	{
		shift = s;
	}
// Getter function for shift
	int getShift()
	{
		return shift;
	}
// Setter function for hourly pay rate
	void setHourlyPayRate(float hpr)
	{
		hourlyPayRate = hpr;
	}
// Getter function for hourly pay rate
	float getHourlyPayRate()
	{
		return hourlyPayRate;
	}
};


int main()
{
// Declare variables
	string name;						//Employe's name
	int number, shift;					//Number and shift
	int day, month, year;				//Day, month and year input
	float payRate;						//Employee's pay rate

// Prompt user for the employee's name
	cout << "Enter the employee's name  : ";
	getline(cin, name);

// Prompt user for the employee's number
	cout << "Enter the employee's number: ";
	cin >> number;

// Input the employee's hire date
	cout << "Enter the employee's hire date(M D Y): ";
	cin >> day >> month >> year;

// Input the shift the employee is working
	cout << "Enter the employee's work shift(1-2): ";
	cin >> shift;
// Check shift input
	while(shift < 1 || shift > 2)
	{
		cout << "Invalid input! Please re-enter(1-2): ";
		cin >> shift;
	}

// Input employee's pay rate
	cout << "Enter the employee's pay rate: $";
	cin >> payRate;

	productionWorker in(shift, payRate);
	employee into(name, number, day, month, year);

// Output the employee's info
	cout << endl << endl;
	cout << "Employee's Name      :	 " << into.getEmplName() 	<< endl;
	cout << "Employee's Number    :	 " << into.getEmplNumber() 	<< endl;
	cout << "Employee's Hire Date :	 " << into.getHireMonth() 	<< "/"
									   << into.getHireDay()     << "/"
									   << into.getHireYear()	<< endl;
	cout << "Employee's Shift     :	 " << in.getShift() 		<< endl;
	cout << "Employee's Pay Rate  :   $" << setprecision(2) 	<< fixed
									   << in.getHourlyPayRate();

	return 0;
}



