/*
Md Imad Fuad
June 11, 2026
lab 15, recursive function, built-function
*/
#include<iostream>

using namespace std;

// example 1: recursive function
// function that calls itself during the execution of the program

void cheers(int n){
    // base case
    if(n == 1){
        cout<<"STOP"<<endl;
    }
    // recursive case
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1);
    }
}

/*
function    |   int n   |   if(n==1)   |             else
iteration   |           |              |   cout<<(n*2)   |   cheers(n-1)
---------------------------------------------------------------------------
    1       |   n=3     |   false      |   cout<<(3*2)=6 |   cheers(3-1=2)
---------------------------------------------------------------------------
    2       |   n=2     |   false      |   cout<<(2*2)=4 |   cheers(2-1=1)
---------------------------------------------------------------------------
    3       |   n=1     |   true       |   cout<<"STOP"
*/

// example 2: recursive function to find the summation of a number
// for example, summation of 5, 5+4+3+2+1+0 = 15

int summation(int n){
    // recursive case
    if(n != 0){
        return (summation(n-1) + n);
    }
    // base case
    else{
        return 0;
    }
}

// example 3: use recursive function to validate a number
// use recursive case to recollect a number if it is not positive

int getpositive(){
    int num;

    cout<<"Enter a number ";
    cin>>num;

    // base case
    if(num>0){
        return num;
    }
    // recursive case
    else
        return getpositive();
}
