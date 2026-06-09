/*
md imad fuad
lab 10, loop mechanisms
June 9, 2026
*/

#include <iostream>

using namespace std;

int main(){
      cout<<"\n ---- example 1: for loop as counter"<<endl;
    /*
    for loop has three main statement for(initial action; boolean expression; update action)
    */
    // use a for loop to print Hello 5 times
    for(int x = 1; x <=5 ; x++) {
        cout<<"Hello "<<x<<endl;
    }

    cout<<"\n ---- example 2: for loop as a counter with different steps"<<endl;
    // print from 1 to 9 step 2
    for(int x = 1; x<=9 ; x+=2){
        cout<<x<<"\t";
    }

    cout<<"\n ---- example 3: for loop as a decrement counter with different steps"<<endl;
    // print from 10 to -10 step 3 --> 10 7 4 1 -2 -5 -8
    for(int x = 10; x >= -10; x-=3 ){
        cout<<x<<"\t";
    }
    cout<<endl;

    cout<<"\n ---- example 4: for loop with conditional statement"<<endl;
    // count the numbers that are multipled of 5 between -20 and 20 step 4
    int counter = 0;
    for(int x = -20; x<= 20 ; x += 4){
        cout<<x<<"\t";
        if(x%5==0 && x!=0)
            counter++;
    }
    cout<<endl<<"numbers that are multipled of 5 = "<<counter<<endl;

    cout<<"\n ---- example 5: while loop as a counter"<<endl;
    // while loop to print from 1 to 5, inclusive
    int n = 1;
    while(n<=5){
        cout<<n<<"\t";
        n++;
    }
    cout<<endl;

    n=1;
    while(n++ <=5) {
        cout<<n<<"\t";
    }
    
     cout<<"\n ---- example 6: while loop to validate an input"<<endl;

    int number;
    cout<<"Enter a number: ";
    cin>>number;

    // while loop to recollect a number that is not between 1 and 9
    while(!(number>=1 && number<=9)){
        cout<<"Enter a new number between 1 and 9 ";
        cin>>number;
    }
    cout<<"Collected number = "<<number<<endl;

        cout<<"\n ---- Exercise 1"<<endl;
    // decrement from 21 to -21 step 5 and count multiples of 2
    int counter2 = 0;

    for(int x = 21; x >= -21; x-=5){
        cout<<x<<"\t";
        if(x%2==0)
            counter2++;
    }
    cout<<endl<<"numbers that are multiplied of 2 = "<<counter2<<endl;


    cout<<"\n ---- Exercise 2"<<endl;
    // user input starting value, count up to 30 step 4
    int start;
    cout<<"Enter starting value: ";
    cin>>start;

    for(int x = start; x<=30; x+=4){
        cout<<x<<"\t";
    }
    cout<<endl;


    return 0;
}