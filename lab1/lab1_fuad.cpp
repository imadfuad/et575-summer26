/*
md imad uddin fuad
May 28, 2026
lab 1: iostrteam
*/

#include<iostream>

using namespace std;
int main (){
    cout<<"Hello World!"<<endl;
    cout<<"ET 575 \t\t md imad fuad"<<endl;
    cout<<"\n------Example 2: declaring and string and character variables -----"<<endl;

    /*
   -1) variables are only declared once
   -2)naming variables :
   -can’t  strat with number 
   -can’t  have space in between
   -can’t  have any symbol except the _
   - can’t  use c++ reserve keywords example 'cout'
   3) a variable name is known as 'identifier'

    */
    string username;
    username = "peterPan";
    cout<<"U= "<<username<<endl;
    cout<<"Enter another username: ";
    cin>>username;
    cout<<"Upated username: "<<username<<endl;

     cout<<"\n------Example 3: declaring character variables -----"<<endl;
     char symbol ='%';
     cout<< "Character = "<<symbol<<endl;
     symbol = 38;
     cout<<"Upadated character = "<<symbol<<endl;
     // initialize a value for an identifier
     char s(35);
     cout<<"Symbol = "<<s<<endl;

      cout<<"\n-------------EXERCISE -----------"<<endl;
      string country;
      char gender;
      cout << "Enter country: ";
      cin >> country;

      cout << "Enter gender (f for female, m for male, o for others): ";
      cin >> gender;

     cout << "Entered country:\t" << country << endl;
     cout << "Selected gender:\t" << gender << endl;






    return 0;


}