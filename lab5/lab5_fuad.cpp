/*
md imad fuad
June 2, 2026
lab 5: string methods
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    cout<<"\n----- example 1 : string indexing "<<endl;
    // characters within a string is accessible by using an index number.
    // index number starts from 0 (left-most)
    string username = "peterpan123";
    cout << "The fourth character if username = "<<username[3]<<endl;

     // at() method can be used to access a character in a string
    cout << "The sixth character of username = " << username.at(5) << endl;

    cout<<"\n----- example 2 : length of a string "<<endl;
     int num_username = username.length();
     cout<<"There are "<<num_username<<" Characters in username."<<endl;


     cout << "\n----- example 3: adding strings  " << endl;
    // strings can be concatenated or added by using the + operator
    string n = "Never";
    string m = "Again";
    cout << n + m << endl;

    cout << "\n----- example 4: subtracting character from a string " << endl;
    // substr() method extracts characters from a string
   // substr(x,y) --> x = starting index, y = amount of characters to be extracted from index x
   cout<<"Extracted word = "<<n.substr(1,4)<<endl;

   cout << "\n----- example 5: inserting character/s into a string  " << endl;
    // insert() method insert characters into a string
    // insert(x,y) --> x = inserting index position, y = characters to be inserted
    // from example, insert the word LAND in between the username as "peterLANDpan123"
    username.insert(5,"LAND"); // automatically update the string value
    cout<<username<<endl;

    cout << "\n----- example 6: add character/s to end of a string " << endl;
    // append() method adds characters to the end of a string
   // append(x) --> x = characters to be added to the end of the string
   username.append("END");
   cout << username << endl;


   cout << "\n----- example 7: replacing characters in a string " << endl;
   // replace() method replaces characters in a string
  // replace(x,y,z) --> x = index where the replacement starts, y = number of characters to be replaced
  // from x, z = new characters of the replacement
  string name ="Peter Pan";
  cout<<name<<endl;

  // replace eter with atrick
  name.replace(1,4, "atrick"); // automatically uodate the string value.accessor method
  cout<<name<<endl;


  cout << "\n----- example 8: erasing characters from a string " << endl;
// erase() method erases characters from a string
// erase(x,y) --> x = starting index where characters will be removed, y = amount of characters to be removed from index x
// earse the word an from patrick pan
  name.erase(9,2);
  cout<<name<<endl;

  cout << "\n----- example 9: find the index of character in a string " << endl;
// find() method return the index of a found character
// find(x) --> x = character/s to be found
  cout << username << endl;
  int index_r = username.find("r");
  cout <<"Index of letter pan = "<<index_r<<endl;
  int never = username.find("NEVER");
  cout << "Index of NEVER = " << never << endl;






    return 0;
}