/*
md imad fuad
june 1, 2026
lab 4 : numerical operators


*/

#include <iostream>
using namespace std;
int main() {
    cout<<"\n------Example 1 : assignment operator------"<<endl;
    int n = 9, m = 2;
    // add 1 to n and update the value
    n++;
    cout<<" updated m = "<<m<<endl;

    //add m value into n and updated value of n
    n +=m;
    cout<<" updated n = "<<n<<endl;


    // triple the value of m and update m
    m *=3; // m= m*3;
    cout<<"updated m ="<<m<<endl;

    //modulus : find and returnt the remainder of division
    cout<<"Modulus, Remainder= "<<n%m<<endl;
    cout<<"n= "<<n<<endl;

     cout<<"\n------Example 2 :----comparsion opertors"<<endl;
     cout<<"n = "<<n<<endl;
     cout<<"m = "<<m<<endl;
     cout<<"Are n and m is equal ?  " <<(n==m)<<endl;
     cout<<"Is n  not equal to m ?  " <<(n!=m)<<endl;
     cout<< "Is m greater than or equal to n ? " <<(m>=n)<<endl;

     cout<<"\n------Example 3 : logical/boolean operators "<<endl;
     // AND operator, &&, returns a True only if all statement are true
     // 0R orperator, || returns a TRUE one of the statement is true
     //NOT or INVERTER operator, ! returns a TRUE for a FALSE, or FALSE for  TRUE
     
     
     bool check1 = m < n;
     bool check2 = n <= m;
     bool check3 = m != n;

     cout << "check1 = " << check1 << endl;
     cout << "check2 = " << check2 << endl;
     cout << "check3 = " << check3 << endl;  

     bool result1 = check1 && check2 && check3; // false &&& true && true= false
     bool result2 = check1 || check2 || check3;// false || true|| true= true
     bool result3 = !check1;                   //! true = false

    cout << "result 1 = " << result1 << endl;
    cout << "result 2 = " << result2 << endl;
    cout << "result 3 = " << result3 << endl;



     cout<< "\n--------EXERCISE-----------"<<endl;

     // declare variables: number and character
int number;
char character;

// collect the values for the character and the number
cout << "Enter a number: ";
cin >> number;

cout << "Enter a character: ";
cin >> character;

// change character into number value
int characterValue = character;


number *= 3;

// print result
cout << "1. Triple the number\t\t\t" << number << endl;


characterValue %= 60;

// print result
cout << "2. Remainder of character\t\t" << characterValue << endl;

// is number less than or equal to character? using comparison operator
bool result4 = number <= characterValue;

// print result
cout << "3. is number less than or equal to character?\t" << result4 << endl;

// check if number <= -1 OR character value != 5 using logical operator
bool result5 = (number <= -1) || (characterValue != 5);

// print result
cout << "4. Result after comparison\t\t" << result5 << endl;

// is character value between -2 and 2? using comparison and boolean operator
bool result6 = (characterValue >= -2) && (characterValue <= 2);

// print result
cout << "5. is character between -2 and 2?\t" << result6 << endl;

    return 0;





}
