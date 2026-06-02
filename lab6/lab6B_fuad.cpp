/* 
   md imad fuad 
   June 2, 2026 
   Lab 6b: Leveraging AI as a C++ Coding Assistant (Google Gemini Version)
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string new_word;
    
    // Prompt the user for input string
    cout << "Type a word: ";
    cin >> new_word;
    
    // Safe index evaluation using .at() bound checking
    if (new_word.length() > 3) {
        cout << "The 4th character is: " << new_word.at(3) << endl;
    } else {
        cout << "The 4th character is: N/A (String too short)" << endl;
    }
    
    // Output total character length
    cout << "The length of the word is: " << new_word.length() << " characters." << endl;
    
    // Perform string substring modification
    if (new_word.length() >= 4) {
        new_word.replace(1, 3, "--$--");
        cout << "After replacement: " << new_word << endl;
    }
    
    // Erase specific elements from the back of the string
    if (new_word.length() >= 2) {
        new_word.erase(new_word.length() - 2, 2);
        cout << "After removing two characters from the end: " << new_word << endl;
    }
    
    return 0;
}

/*
--- AI Assistant Used: Google Gemini ---

// Q1) Was the code correct? (Yes/No and explain your answer)
// Answer: Yes. The code satisfies every condition from Lab 5. It safely prompts for input, processes character indexing, prints lengths, and executes inplace modifications.

// Q2) Was it readable and properly commented? Explain your answer
// Answer: Yes. Gemini organized the operations with direct comments that focus strictly on the structural functions of the code block.

// Q3) Were you able to explain each line of code? Explain your answer
// Answer: Yes. It leverages standard logic and conditional strings to complete tasks in a clean, top-to-bottom pipeline.

// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar.
// Answer: Yes, it closely mirrors Lab 5. It used `.length()`, `.replace()`, and `.erase()`. It used `.at(3)` instead of explicit bracket indexing `[3]`, which was covered in Example 1 of the lab sheet.

// Q5) Terminal Output: 
// Type a word: programming
// The 4th character is: g
// The length of the word is: 11 characters.
// After replacement: p--$--ramming
// After removing two characters from the end: p--$--rammi
*/
