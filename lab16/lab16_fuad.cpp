/*
Md imad fuad
June 16, 2026
Lab 16, intro array
*/

#include<iostream>
#include "lab16_function_fuad.cpp"

using namespace std;

int main(){
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

    return 0;
}