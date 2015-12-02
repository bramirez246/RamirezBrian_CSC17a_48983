/*
 * File: main.cpp
 * Created on: December 1, 2015
 * Author: Brian Ramirez
 */

#include "Essay.h"

int main ()
{
// Declare variables
    float score1, score2, score3, score4;
    Essay Student;
// Prompt user for input
    cout << "Please enter up to 30 points for Grammar: ";
    cin >> score1 ;
    cout << "Please enter up to 20 points for Spelling: ";
    cin >> score2 ;
    cout << "Please enter up to 20 points for Correct Length: ";
    cin >> score3 ;
    cout << "Please enter up to 30 points for Content: ";
    cin >> score4;
// Set the score class member
    Student.setScore(score1, score2, score3, score4) ;
// Calculate score
    Student.addScore();
// Get score from class function
    Student.getScore();
// Determine letter grade
    Student.FindletterGrade();
// Output letter grade for essay
    cout << "This student's grade is: " << Student.getletterGrade() << endl;
    return 0;
}
