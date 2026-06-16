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
}


// example 3
void introarray() {
    //declare an array with size 3
    int scores[3];
     // use squared brackets [] to access to each element in the array
    // each element is organized by the index number starting from
    // zero (left-most).
    cout << scores << endl;
    cout << "first element = " << scores[0] << endl;
 // assign values to each element in an array
    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;

    cout << "first element = " << scores[0] << endl;
        // initializing an array
    char symbols[5] = {'$', '#', '@', '!', 'G'};
    cout << "3rd symbol = " << symbols[2] << endl;

    // the size of an array in a square brackets [], can be ignored
    // if the array has initial values
    string names[] = {"Peter", "Annie"};
    cout << "2nd name " << names[1] << endl;


        // loop through each element in an array symbol
    for(int i = 0; i < 5; i++){
        cout << symbols[i] << endl;
    }

    // use loop to find the average of scores array
    float avgscore = 0, sumscore = 0;

    for(int i = 0; i < 3; i++){
        sumscore += scores[i];
    }

    avgscore = sumscore / 3;

    cout << "The average score is = " << avgscore << endl;

}

// example 4: passing an array into a function
void printelements(int sizearray, int arr[]){
    for(int i = 0; i < sizearray; i++){
        cout << arr[i] << "\t";
    }

    cout << endl;
}

// update values in an array
void updatearray(int sizearray, int *arr){
    for(int i = 0; i < sizearray; i++){
        cout << "Enter an age: ";
        cin >> arr[i];
    }
}

// function to find how many adult ages in array age
// the function will return the count
int countadult(int sizearray, int *arr){
    int counter = 0;

    for(int i = 0; i < sizearray; i++){
        if(arr[i] >= 21)
            counter++;
    }

    return counter;
}

// exercise b: fill an array with random numbers
void fillarray(int sizearray, int arr[]){
    for(int i = 0; i < sizearray; i++){
        arr[i] = rand() % 9 + 1; // random number between 1 and 9
    }
}

// exercise b: count even numbers in an array
int counteven(int sizearray, int arr[]){
    int counter = 0;

    for(int i = 0; i < sizearray; i++){
        if(arr[i] % 2 == 0)
            counter++;
    }

    return counter;
}

   