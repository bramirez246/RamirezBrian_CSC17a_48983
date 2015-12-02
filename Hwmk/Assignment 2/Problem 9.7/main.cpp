/*
 * main.cpp
 * Created on: October 2, 2015
 * Author: Brian Ramirez
 *
 */

#include <iostream>
using namespace std;

// Function prototypes
void arrSelectSort(int *, int);
void showArray(int *, int);
void showArrPtr(int *, int);

int main()
{
	int numDonations; // Number of donations

// Array that holds the donations
	int *donations;

// Read in number of donations and amounts for each donation
	cout << "Enter the number of donations: ";
	cin >> numDonations;
	donations = new int [numDonations];

	for (int i=0; i<numDonations; i++)
	{
		cout << "Enter the amount for this donation: ";
		cin >> donations[i];
	}


// An array of pointers to int.
	int *arrPtr;
	arrPtr = new int [numDonations];


// Each element of arrPtr is a pointer to int. Make each
// element point to an element in the donations array.
	for (int i=0; i < numDonations; i++)
	{
		arrPtr[i] = donations[i];
	}


// Sort the elements of the array of pointers.
	arrSelectSort(arrPtr, numDonations);

// Display the donations using the array of pointers. This
// will display them in sorted order.
	cout << "The donations, sorted in descending order are: \n";
	showArrPtr(arrPtr, numDonations);

// Display the donations in their original order.
	cout << "The donations, in their original order are: \n";
	showArray(donations, numDonations);
	delete [] arrPtr;
	delete [] donations;
	return 0;
}
void arrSelectSort(int *arr, int size)
{
	int startScan, minIndex;
	int maxElem;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		maxElem = arr[startScan];
		for(int index = startScan + 1; index < size; index++)
		{
			if (arr[index] > maxElem)
			{
				maxElem = arr[index];
				minIndex = index;
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = maxElem;
	}
}

void showArray(int *arr, int size)
{
	for (int count = 0; count < size; count++)
	{
		cout << arr[count] << " ";
	}
	cout << endl;
}

void showArrPtr(int *arr, int size)
{
	for (int count = 0; count < size; count++)
	{
		cout << arr[count] << " ";
	}
	cout << endl;
}


