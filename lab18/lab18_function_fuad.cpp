/*
Md Imad Fuad
June 17 and 18, 2026
lab 18, console failure and file streaming
*/

#include<iostream>

using namespace std;

// function to check if a proper data type is collected for an integer
void checknumber(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(cin.fail())
        cout << "Error! Dismatched data type!" << endl;
    else
        cout << "Entered number = " << num << endl;

    // reset the cin status
    cin.clear();
    cin.ignore(10000, '\n');

    cout << "--- END OF FUNCTION ---" << endl;
}

// example 2: validate a data type
float validatenumber(){
    float n;

    do{
        cout << "Enter a number: ";
        cin >> n;

        if(cin.fail()){
            cout << "Invalid data type!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else{
            return n;
        }

    }while(true);
}

// example 3: input and output files
#include<fstream>
#include<string>

void iofiles(){
    // declare the objects to handle files
    // input file object 'fin'
    ifstream fin;

    // output file object 'fout'
    ofstream fout;

    // read file 'samplefile.txt'
    // use the 'fin' object along with the 'open' method to open the txt file
    fin.open("samplefile.txt");

    // open output file
    fout.open("outputfile.txt");

    // declare a variable 'line' to temporary store each line of 'samplefile.txt'
    string line;

       /*
    while loop to go through each line in the txt file.
    for each line, we are going to use the getline() method to read and hold each line
    of the txt file in variable 'line'
    */
    int linecounter = 1;

    while(getline(fin, line)){
        cout << "Line " << linecounter << " = \t" << line << endl;
        fout << "Line " << linecounter << " = \t" << line << endl;
        linecounter++;
    }

    // close the file
    fin.close();
    fout.close();

    
}

// example 4: write file
// writing a file with an 'open' method, c++ will automatically create the file if it doesn't exist
// if the file exists, then c++ will overwrite file
void writefile(){
    // output file object 'fout'
    ofstream fout;

    fout.open("outputfile.txt");

    // to write in a file, we use the output file object fout
    fout << "Good Morning!" << endl;

    for(int n = 3; n > 0; n--){
        fout << n << endl;
    }

    fout << "End of file" << endl;

    fout.close();

    
}


// example 5: appending data to an existing file
// fout.open() we need to add the argument ios::app
void appendfile(string filename){
    // output file object 'fout'
    ofstream fout;

    fout.open(filename, ios::app);

    fout << "Md Imad Fuad" << endl;

    fout.close();
}

// lab exercise 1: operation function
float operation(int num1, int num2){
    char symbol;
    float result;

    cout << "Enter an operation symbol (+, -, *, /, %): ";
    cin >> symbol;

    while(cin.fail() || (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/' && symbol != '%')){
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Invalid symbol. Enter +, -, *, /, or %: ";
        cin >> symbol;
    }

    if(symbol == '+')
        result = num1 + num2;
    else if(symbol == '-')
        result = num1 - num2;
    else if(symbol == '*')
        result = num1 * num2;
    else if(symbol == '/')
        result = float(num1) / num2;
    else
        result = num1 % num2;

    return result;
}

// lab exercise 2a: create and write a new text file
void createuserfile(){
    ofstream fout;

    fout.open("data_user.txt");

    fout << "This is my output file - Md Imad Fuad.\n";

    fout.close();
}

// lab exercise 2b: append text to existing text file
void appenduserfile(string message){
    ofstream fout;

    fout.open("data_user.txt", ios::app);

    fout << message << endl;

    fout.close();
}

// lab exercise 2c: create a new file and overwrite text
void overwritefile(string filename, string text){
    ofstream fout;

    fout.open(filename);

    fout << text << endl;

    fout.close();
}