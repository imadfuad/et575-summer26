#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << "\n ----- example 1: numerical variables -----" << endl;
    // int, short, or long data type only takes the whole number
    // float or double data types takes the numbers as it is.the wouhle num with the decimal numbers.
           
    int number = 5.9;
    cout << "The number is = " << number<<endl;

    double number1 = 3.12345678;
    float number3 = 9.123456789;
    cout<<"The double data type = " <<number1<<endl;
    cout<<"The float data type =" <<number3<<endl;

    cout<<"\n-------example 2 : constant variables-------"<<endl;
    number = 23.56;
    cout<<"The updated number =" <<number<<endl;
    // constant variables' value can’t be change
    const float EXP = 2.718;
    cout<<"The value of EXP = " <<EXP<<endl;


     cout<<"\n-------example 3 : constant variables-------"<<endl;

     // declare variables
     const float GRAVITY = 9.8;
     float time = 0, height =0;

     // collect the time
     cout<< "Enter the falling time : ";
     cin>>time;

      // calculate the hight of a falling object = 0.5*g*time*time

      height =0.5*GRAVITY*time*time;

      //print result
      cout<<"The height of a falling object at " <<time<< " is " <<height<< " meters. " <<endl;

      cout<<"\n-------example 4 : constant variables-------"<<endl;

      //formula circumference = 2*radius*pi
      //declare variable

      const float PI = 3.14159;
      float circumference = 0, radius = 0;
      circumference = 2*radius*PI;

      //print result
      cout<<"The circumference is ="<<circumference<<endl;

      cout<< "\n--------EXERCISE-----------"<<endl;
     

// declare variables
int radius2 = 0;
float area = 0, volume = 0;

// collect radius from keyboard
cout << "Enter the radius of the circle and sphere: ";
cin >> radius2;

// calculate area and volume
area = PI * radius2 * radius2;
volume = (4.0 / 3.0) * PI * radius2 * radius2 * radius2;

// print result with one decimal
cout << fixed << setprecision(1);
cout << "The area of the circle is " << area << endl;
cout << "The volume of a sphere is " << volume << endl;



    

    return 0;
}