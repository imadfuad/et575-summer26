/*
Md Imad Fuad
June 17 and 18, 2026
lab 18, console failure and file streaming
*/

#include<iostream>
#include "lab18_function_fuad.cpp"
#include<fstream>
#include<string>


using namespace std;

int main(){

    cout << "\n---- example 1: console failure test" << endl;
    checknumber();

    cout << "\n---- example 2: console failure test" << endl;
    float n = validatenumber();
    cout << n << endl;

    cout << "\n---- example 3: read file" << endl;
    iofiles();

     cout << "\n---- example 4: write file" << endl;
     writefile();

     cout << "\n---- example 5: append data into a file" << endl;
     string filename = "outputfile.txt";
     appendfile(filename);

     cout << "\n---- lab exercise 1: operation function" << endl;
float result = operation(10, 5);
cout << "Result = " << result << endl;

cout << "\n---- lab exercise 2a: create and write file" << endl;
createuserfile();

cout << "\n---- lab exercise 2b: append file" << endl;
appenduserfile("This line was appended to the file.");

cout << "\n---- lab exercise 2c: overwrite file" << endl;
overwritefile("newfile.txt", "This is a new overwritten file.");

    return 0;
}