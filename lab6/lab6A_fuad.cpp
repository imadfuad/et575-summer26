/*
md imad fuad
June 2, 2026
Lab 6A: AI Assistant Code Review
AI Assistant Used: ChatGPT
Lab 5: String Methods
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "\n----- Example 1: String Indexing -----" << endl;

    string username = "peterpan123";

    cout << "Username = " << username << endl;
    cout << "The fourth character of username = " << username[3] << endl;
    cout << "The sixth character of username = " << username.at(5) << endl;


    cout << "\n----- Example 2: Length of a String -----" << endl;

    int num_username = username.length();

    cout << "There are " << num_username << " characters in username." << endl;


    cout << "\n----- Example 3: Adding Strings -----" << endl;

    string firstName = "Md Imad";
    string lastName = "Fuad";
    string fullName = firstName + " " + lastName;

    cout << "First name = " << firstName << endl;
    cout << "Last name = " << lastName << endl;
    cout << "Full name = " << fullName << endl;


    cout << "\n----- Example 4: Finding a Word -----" << endl;

    string sentence = "I am learning C++ string methods";

    cout << "Sentence = " << sentence << endl;
    cout << "The word C++ starts at index = " << sentence.find("C++") << endl;


    cout << "\n----- Example 5: Substring -----" << endl;

    string word = "programming";

    cout << "Word = " << word << endl;
    cout << "Substring from index 0 with 7 characters = " << word.substr(0, 7) << endl;


    cout << "\n----- Example 6: Insert Method -----" << endl;

    string school = "Queens College";

    cout << "Before insert = " << school << endl;
    school.insert(6, "borough ");
    cout << "After insert = " << school << endl;


    cout << "\n----- Example 7: Erase Method -----" << endl;

    string text = "Hello World";

    cout << "Before erase = " << text << endl;
    text.erase(5, 6);
    cout << "After erase = " << text << endl;


    cout << "\n----- Example 8: Replace Method -----" << endl;

    string message = "I like Java";

    cout << "Before replace = " << message << endl;
    message.replace(7, 4, "C++");
    cout << "After replace = " << message << endl;


    return 0;
}

/*
--- AI Assistant Used: ChatGPT ---

1) Was the code correct?
Yes, the code was correct. It compiled and ran successfully. It used C++ string methods like indexing, at(), length(), find(), substr(), insert(), erase(), and replace().

2) Was it readable and properly commented?
Yes, the code was readable. Each example had a title using cout, and the code was organized into different sections. The comments and output labels made it easy to understand.

3) Were you able to explain each line of code?
Yes, I was able to explain each line because the code used beginner-level C++ syntax. It used string variables, cout statements, and string methods that we learned in class.

4) Did it use the same programming concepts we learned in class?
Yes, it used the same concepts from class. It used #include<iostream>, #include<string>, using namespace std, int main(), string variables, cout, and string methods. The unfamiliar part was replace(), but it was still easy to understand.

5) Terminal Output:

----- Example 1: String Indexing -----
Username = peterpan123
The fourth character of username = e
The sixth character of username = p

----- Example 2: Length of a String -----
There are 11 characters in username.

----- Example 3: Adding Strings -----
First name = Md Imad
Last name = Fuad
Full name = Md Imad Fuad

----- Example 4: Finding a Word -----
Sentence = I am learning C++ string methods
The word C++ starts at index = 14

----- Example 5: Substring -----
Word = programming
Substring from index 0 with 7 characters = program

----- Example 6: Insert Method -----
Before insert = Queens College
After insert = Queensborough College

----- Example 7: Erase Method -----
Before erase = Hello World
After erase = Hello

----- Example 8: Replace Method -----
Before replace = I like Java
After replace = I like C++
*/