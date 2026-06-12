/*
md imad fuad
June 12, 2026
lab 14 - function calling function using AI
*/

#include<iostream>
using namespace std;

// function prototype
int inputMarks();
int totalMarks(int m1, int m2, int m3);
float calculatePercentage(int m1, int m2, int m3);
char determineGrade(float percentage);
void displayResult(int m1, int m2, int m3, char grade);

int main(){

    cout << "\n----- Lab 14: Function Calling Function -----" << endl;

    cout << "\nEnter marks for subject 1" << endl;
    int mark1 = inputMarks();

    cout << "\nEnter marks for subject 2" << endl;
    int mark2 = inputMarks();

    cout << "\nEnter marks for subject 3" << endl;
    int mark3 = inputMarks();

    float percentage = calculatePercentage(mark1, mark2, mark3);

    char grade = determineGrade(percentage);

    displayResult(mark1, mark2, mark3, grade);

    return 0;
}

// input and validate marks
int inputMarks(){
    int marks;

    cout << "Enter marks between 0 and 100: ";
    cin >> marks;

    while(marks < 0 || marks > 100){
        cout << "Invalid marks. Enter again between 0 and 100: ";
        cin >> marks;
    }

    return marks;
}

// calculate total marks
int totalMarks(int m1, int m2, int m3){
    int total = m1 + m2 + m3;
    return total;
}

// calculate percentage by calling totalMarks function
float calculatePercentage(int m1, int m2, int m3){
    int total = totalMarks(m1, m2, m3);

    float percentage = (total / 300.0) * 100;

    return percentage;
}

// determine grade based on percentage
char determineGrade(float percentage){

    if(percentage >= 90 && percentage <= 100){
        return 'A';
    }
    else if(percentage >= 80 && percentage <= 89){
        return 'B';
    }
    else if(percentage >= 70 && percentage <= 79){
        return 'C';
    }
    else if(percentage >= 60 && percentage <= 69){
        return 'D';
    }
    else{
        return 'F';
    }
}

// display final result
void displayResult(int m1, int m2, int m3, char grade){

    float percentage = calculatePercentage(m1, m2, m3);

    cout << "\n----- Final Result -----" << endl;
    cout << "With marks " << m1 << ", " << m2 << ", " << m3;
    cout << ", the percentage is " << percentage << "%";
    cout << ", and the GRADE is " << grade << endl;
}