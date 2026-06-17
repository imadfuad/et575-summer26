/*
Md imad fuad
June 17, 2026
lab 17, array application
*/
#include<iostream>
#include "lab17_function_fuad.cpp"

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
    return 0;
}