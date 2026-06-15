
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

    /*
    Pseudocode for main:
    1. Display lab title.
    2. Ask user to enter marks for subject 1.
    3. Call inputMarks() and store the value in mark1.
    4. Ask user to enter marks for subject 2.
    5. Call inputMarks() and store the value in mark2.
    6. Ask user to enter marks for subject 3.
    7. Call inputMarks() and store the value in mark3.
    8. Call calculatePercentage() using mark1, mark2, and mark3.
    9. Call determineGrade() using the percentage.
    10. Call displayResult() to show the final result.
    */

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

    /*
    Pseudocode for inputMarks:
    1. Declare marks variable.
    2. Ask user to enter marks between 0 and 100.
    3. Read marks from user.
    4. While marks are less than 0 OR greater than 100:
        - Display invalid message.
        - Ask user to enter marks again.
    5. Return valid marks.
    */

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

    /*
    Pseudocode for totalMarks:
    1. Receive three marks from main or another function.
    2. Add m1, m2, and m3.
    3. Store the answer in total.
    4. Return total.
    */

    int total = m1 + m2 + m3;
    return total;
}

// calculate percentage by calling totalMarks function
float calculatePercentage(int m1, int m2, int m3){

    /*
    Pseudocode for calculatePercentage:
    1. Receive three marks.
    2. Call totalMarks() function using m1, m2, and m3.
    3. Store returned value in total.
    4. Calculate percentage using total divided by 300.0 times 100.
    5. Return percentage.
    */

    int total = totalMarks(m1, m2, m3);

    float percentage = (total / 300.0) * 100;

    return percentage;
}

// determine grade based on percentage
char determineGrade(float percentage){

    /*
    Pseudocode for determineGrade:
    1. Receive percentage.
    2. If percentage is 90 or above, return A.
    3. Else if percentage is 80 or above, return B.
    4. Else if percentage is 70 or above, return C.
    5. Else if percentage is 60 or above, return D.
    6. Otherwise, return F.
    */

    if(percentage >= 90){
        return 'A';
    }
    else if(percentage >= 80){
        return 'B';
    }
    else if(percentage >= 70){
        return 'C';
    }
    else if(percentage >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}

// display final result
void displayResult(int m1, int m2, int m3, char grade){

    /*
    Pseudocode for displayResult:
    1. Receive three marks and grade.
    2. Call calculatePercentage() using m1, m2, and m3.
    3. Store returned value in percentage.
    4. Display final result title.
    5. Display all three marks.
    6. Display percentage.
    7. Display final grade.
    */

    float percentage = calculatePercentage(m1, m2, m3);

    cout << "\n----- Final Result -----" << endl;
    cout << "With marks " << m1 << ", " << m2 << ", " << m3;
    cout << ", the percentage is " << percentage << "%";
    cout << ", and the GRADE is " << grade << endl;
}
