/*
md imad fuad
June 4, 2026
lab 9: switch-case statement
*/

#include <iostream>
using namespace std;
int main() {
    
    cout << "\n--- Example 1: switch-case statement" << endl;
    
    // ask the user to select a day-off (number)
    // declare variables
    int dayoff = 0;
    
    // collect dayoff
    cout << "Select a day-off:" << endl;
    cout << "1 for Monday" << endl;
    cout << "2 for Tuesday" << endl;
    cout << "3 for Wednesday" << endl;
    cout << "4 for Thursday" << endl;
    cout << "5 for Friday" << endl;
    cin>>dayoff;

    //switch-case statement
    switch(dayoff)
    {
         case 1:
        cout << "You are off Monday" << endl;
        break;

    case 2:
        cout << "You are off Tuesday" << endl;
        break;

    case 3:
        cout << "You are off Wednesday" << endl;
        break;

    case 4:
        cout << "You are off Thursday" << endl;
        break;

    case 5:
        cout << "You are off Friday" << endl;
        break;

    default:
        cout << "Wrong dayoff" << endl;
        break;
            

    }
    cout << "\n--- example 2 : select a gender" << endl;

// select gender using character
// declare variables
char gender;
string selectedgender = "";

// collect the gender
cout << "Select a gender" << endl;
cout << "m for male" << endl;
cout << "f for female" << endl;
cout << "o for other" << endl;
cin >> gender;

// switch-case statement
switch(gender)
{
    case 'm': case 'M':
        selectedgender = "MALE";
        break;

    case 'f': case 'F':
        selectedgender = "FEMALE";
        break;

    case 'o': case 'O':
        selectedgender = "OTHER";
        break;

    default:
        selectedgender = "UNKNOWN";
        break;
}
 //print result
 cout<<"selected gender =" <<selectedgender<<endl;
 
cout << "\n----- exercise : double a number using switch-case " << endl;

// declare variables
int number = 0;
char choice;

// collect number
cout << "Enter a number: ";
cin >> number;

// ask user to select yes or no
cout << "Do you want to double the number?" << endl;
cout << "Y or y for yes" << endl;
cout << "N or n for no" << endl;
cin >> choice;

// switch-case statement
switch(choice)
{
    case 'Y': case 'y':
        number *= 2; // assignment operator to double the number
        break;

    case 'N': case 'n':
        number = number; // keep the entered number
        break;

    default:
        number = 0; // set to zero for wrong selection
        break;
}

    // print result
    cout << "The number is set to " << number << endl;


    
    return 0;
}