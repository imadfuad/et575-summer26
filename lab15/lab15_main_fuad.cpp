/*
Md Imad Fuad
June 11, 2026
lab 15, recursive function, built-function
*/
#include<iostream>
#include "lab15_function_fuad.cpp"

using namespace std;

int main(){
    cout<<"\n----- Example 1: recursive function -----"<<endl;
    cheers(3);

    cout<<"\n----- Example 2: summation recursive function -----"<<endl;
int s = summation(5);
cout<<s<<endl;

cout<<"\n----- Example 3: recursive function to validate a number -----"<<endl;
int n = getpositive();
cout<<"Collected number = "<<n<<endl;

cout<<"\n----- Example 4: built-in function -----"<<endl;
    int s1 = getpositive();
    int s2 = getpositive();
    float h = hypotenuse(s1, s2);
    printresult(s1, s2, h);


cout<<"\n----- Example 5: random function -----"<<endl;

randomnumber();
cout<<endl;
randomnumber();


cout<<"\n----- Example 6: range of random function -----"<<endl;
int r = random_neg5_10();
cout<<r<<endl;

    return 0;
}