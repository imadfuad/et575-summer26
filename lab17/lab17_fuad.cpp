/*
Md imad fuad
June 17, 2026
lab 17, array application
*/
#include<iostream>
#include "lab17_function_fuad.cpp"
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    //decare size of the array
    const int sizea = 10;
    // declare the array
    int a[sizea] = {0};
    // decalre the variable to save the index of the last postive number
    int listsize;
    //declare the target number
    int targetnumber = 10;

    //calling function
    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"Index of found number :" <<foundindex<<endl;

    
      cout<<"\n---- example 2: 2d array"<<endl;
    intro2darray();


    cout<<"\n---- example 3: print 2d array elements"<<endl;
const int rowsize = 2;
int n[rowsize][3] = {
    {1,2,3},
    {4,5,6}
};

printarray(n,rowsize);

cout<<"\n----- example 4: 2d array application -----"<<endl;
const int students = 3;
const int subjects = 4;
int grades[students][subjects] = {
    {85, 90, 78, 92},
    {70, 88, 84, 76},
    {95, 91, 89, 93}
};

// declaring 1d array
int studentavg[students];
studentaverage(grades, students, subjects, studentavg);
printavg(studentavg, students);


cout<<"\n----- Exercise A -----"<<endl;

int arr[ARRAY_SIZE] = {34, 12, 56, 8, 90};

int minNumber = findMin(arr);
cout << "The minimum number is " << minNumber << endl;


cout<<"\n----- Exercise B -----"<<endl;

srand(time(0));

int arrayNumber2D[ARRAY_SIZE][ARRAY_SIZE] = {0};
int max = 200;
int min = 150;

/* Call function 'populateArray2D' to fill the array with random numbers between 1 and 255 */
populateArray2D(arrayNumber2D);

/* Call function to count the numbers in the array that are between min and max */
int totalNumber = range2D(arrayNumber2D, min, max);

cout << "\nArray has " << totalNumber << " number(s) between " << min << " and " << max << endl;


    return 0;
}