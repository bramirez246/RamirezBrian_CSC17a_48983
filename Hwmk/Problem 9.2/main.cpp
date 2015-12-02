/*
 * File: main.cpp
 * Created on: October 1, 2015 1:48 PM
 * Author: Brian Ramirez
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

void sortArray(int *, int);

float calcAverage(float,int);

int main()
{
// Declare variables
	int size;
	int *scores;
	float total;
	float average;

// Read in size of array and test scores
	cout << "Enter the number of test scores: ";
	cin >> size;
	scores = new int [size];
	for (int i=0; i < size; i++)
	{
		cout << "Enter the test score: ";
		cin >> scores[i];
		// Validates test scores
		while(scores[i] < 0)
		{
			cout << "The test score cannot be negative, please re-enter: ";
			cin >> scores [i];
		}
		total += scores[i];
	}
	cout << endl;
// Sort array
	sortArray(scores, size);

// Calculate average
	average = calcAverage(total, size);

// Output sorted test scores and average
	cout << "\nTest scores:" << endl;
	for(int i=0; i<size; i++)
	{
		cout << setw(4) << scores[i] << endl;
	}
	cout << "\nAverage test score:" << endl;
	cout << fixed << setprecision(2);
	cout << setw(6) << average;

	delete [] scores;

	return 0;
}
// Defining sortArray function
void sortArray(int scores[], int size)
{
	bool swap;
	int temp;
	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (scores[count] > scores[count + 1])
			{
				temp = scores[count];
				scores[count] = scores[count + 1];
				scores[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
// Defining calcAverage function
float calcAverage(float total, int size)
{
	float average;

	average = total / size;

	return average;
}
