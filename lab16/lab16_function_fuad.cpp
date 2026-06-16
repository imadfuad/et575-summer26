/*
Md imad fuad
June 16, 2026
Lab 16, intro array
*/

#include<iostream>
#include<string>

using namespace std;

                                       // exercise a


void exerciseA(){

    cout<< "\n----- Exercise A:-----" << endl; // print exercise title

    int* ptr; // create an integer pointer named ptr

    int var = 7; // create integer variable var and store 7

    int foo = 21; // create integer variable foo and store 21

    ptr = &var; // store the address of var inside pointer ptr

    cout << "ptr is pointing to var" << endl; // print message

    cout << "Value of var = " << var << endl; // print value of var

    cout << "Value of *ptr = " << *ptr << endl; // print value where ptr is pointing

    ptr = &foo; // store the address of foo inside pointer ptr

    cout << "\nptr is pointing to foo" << endl; // print message

    cout << "Value of foo = " << foo << endl; // print value of foo

    cout << "Value of *ptr = " << *ptr << endl; // print value where ptr is pointing

    int& ref = var; // create a reference named ref for variable var

    cout << "\nref is referencing var" << endl; // print message

    cout << "Value of var = " << var << endl; // print value of var

    cout << "Value of ref = " << ref << endl; // print value of ref

     // end the program
}

// example 1: intro to pointer
void intropointer(){

    // declare variable
    int num = 12;
    char sym = '#';
    string n = "Peter";

    // declare pointer without initial values
    int* ptrint = nullptr;
    char* ptrchar = nullptr;
    string* ptrstring = &n;

    // check a pointer info
    cout << ptrint << endl;

    // initialize a pointer with a location of a variable
    ptrint = &num;
    ptrchar = &sym;

    // check pointers info
    cout << ptrint << endl;
    cout << (void*)ptrchar << endl;
    cout << ptrstring << endl;

    // get the value of a pointed variable
    cout << *ptrint << endl;
    cout << *ptrchar << endl;
    cout << *ptrstring << endl;
}

// example 2
void a(string v){
    cout << "A = " << v << endl;
    v = "updated A";
}

void b(string& v){
    cout << "B = " << v << endl;
    v = "updated B";
}

void c(string* v){
    cout << "C = " << *v << endl;
    *v = "updated C";


    return;
}