/*
Md imad fuad
June 16, 2026
Lab 16, intro array
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include "lab16_function_fuad.cpp"

using namespace std;

int main(){
    srand(time(0));
    cout << "\n----- Exercise A -----" << endl;
    exerciseA();


    cout << "\n---- example 1: intro to pointer ----" << endl;
    intropointer();

    cout << "\n---- example 2: checking different data ----" << endl;

    string something = "Hello World!";

    a(something);
    cout << something << endl;

    b(something);
    cout << something << endl;

    c(&something);
    cout << something << endl;

    a(something);

        a(something);
    cout << something << endl;

    b(something);
    cout << something << endl;

    c(&something);

    a(something);

    cout << "\n----- example 3: intro to array -----" << endl;
    introarray();

    cout << "\n----- example 4: print each element in an array -----" << endl;
    int s= 4;
    int age[]={0};
    printelements(s, age);


updatearray(s, age);

printelements(s, age);

cout << "\n----- Exercise B: fill array and count even numbers -----" << endl;

const int sizeB = 10;
int numbers[sizeB];

fillarray(sizeB, numbers);

cout << "Random numbers = ";
printelements(sizeB, numbers);

int even = counteven(sizeB, numbers);

cout << "Even numbers count = " << even << endl;

return 0;
}


  