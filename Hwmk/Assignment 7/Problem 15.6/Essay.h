/*
 * File: Essay.h
 * Created on: December 1, 2015
 * Author: Brian Ramirez
 */

#include <iostream>
#include <iomanip>
using namespace std;

#ifndef ESSAY_H_
#define ESSAY_H_

// Declare class
class Essay
{
	private:
    	float grammar;
    	float spelling;
    	float correctLen;
    	float content;
    	float score;
    	char letterGrade;

public:
    Essay()
	{
    	grammar = 0.0;
    	spelling = 0.0;
    	correctLen = 0.0;
    	content = 0.0;
		score = 0.0;
		letterGrade = ' ';
	}

// Constructor
    Essay(float g, float sp, float cl, float c, float s, char lg)
    {
    	grammar = g;
    	spelling = sp;
    	correctLen = cl;
    	content = c;
    	score = s;
    	letterGrade = lg;
    }

// Sets score for each category
    void setScore( float g, float sp, float cl, float c)
    {
    	grammar = g;
    	spelling = sp;
    	correctLen = cl;
    	content = c;
    }

// Adds scores together
    void addScore()
    {
    	score = grammar + spelling + correctLen + content;
    }

// Getter function to retrieve the score
    float getScore ()
    {
    	return score;
    }

// Determines letter grade
    void FindletterGrade()
    {
    	if (score > 89)
            letterGrade = 'A';
        else if (score > 79 && score < 90)
            letterGrade = 'B';
        else if (score > 69 && score < 80)
            letterGrade = 'C';
        else
            letterGrade = 'F';
    }

// Getter function for letter grade
    char getletterGrade () const
    {
     return letterGrade;
    }
 };
#endif /* ESSAY_H_ */
