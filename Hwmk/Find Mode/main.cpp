/*
 * File: main.cpp
 * Author: Brian Ramirez
 * Created on: September 20, 2015
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void sortArray(int[], int);

float mean(int [],int);

float median(int [],int);

int *mode(int [],int);


int main()
{
// Declare variables
	int size;
	int nums [size]; //{3,1,2,3,1,2,3,2,3}
	int *modeArr;
	modeArr = new int [size];
	float Mean;
	float Median;

// Read in size of array and numbers
	cout << "Enter the size of the array: ";
	cin >> size;
	for(int i=0; i<size; i++)
	{
		cout << "Enter a number for the array: ";
		cin >> nums[i];
	}

// Call on function sortArray
	sortArray(nums, size);
	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << endl;
	}

// Find mean
	Mean = mean(nums, size);

// Find median
	Median = median(nums, size);

// Determine number of modes
	mode(nums, size);
// Output results
	cout << "The mean is: " << fixed << setprecision(2) << Mean << endl;
	cout << "The median is: " << Median << endl;
	cout << "The mode(s) is(are): " << endl;
	return 0;
}
// Defining function sortArray
void sortArray(int nums[],int size)
{
	bool swap;
	 int temp;
	 do
	 {
		 swap = false;
		 for (int count = 0; count < (size - 1); count++)
		  {
			 if (nums[count] > nums[count + 1])
			 {
				 temp = nums[count];
				 nums[count] = nums[count + 1];
				 nums[count + 1] = temp;
				 swap = true;
			 }
		  }
	 } while (swap);
}
// Defining function mean
float mean(int nums[],int size)
{
	float average;
	float total;

	for(int i=0; i<size; i++)
	{
		total += nums[i];
	}

	average = total / size;

	return average;
}
// Defining function median
float median(int nums[],int size)
{
	float middle;

	middle = nums[size/2];
	if(size % 2==0)
		middle = nums[size/2] + nums[(size/2)-1] / 2.0;

	else
		middle=nums[size/2];
	return middle;
}

// Defining function mode
int *mode(int nums[],int size)
{
	int currentFreq = 1;
	int maxFreq = 0;
	int *modes;
	int numModes;
	int crrntMode;
	modes = new int [numModes+2];
	for (int i = 0; i < size - 1; i++)
	{
		if (nums[i] == nums[i+1])
		{
			currentFreq++;
			if(currentFreq > maxFreq)
			{
				maxFreq = currentFreq;
				numModes++;
				crrntMode = nums[i];
			}

		}
		else
		{
			currentFreq = 1;
		}
		modes[i+2] = crrntMode;
	}

	modes[0] = numModes;
	modes[1] = maxFreq;
	return modes;
}
