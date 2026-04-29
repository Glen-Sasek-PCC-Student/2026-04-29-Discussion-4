// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  string first = "";
  string last = "";
  string last_2_digits = "";
  string login = "";

  char x = '\0';

  const int MAX_LETTERS_OF_LAST_NAME = 5;

  cin >> first >> last >> x >> x >> last_2_digits;

  login = last.substr(0, MAX_LETTERS_OF_LAST_NAME);
  login += first.at(0);
  login += last_2_digits;

  cout << login << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:
Create Login Name

With your programming partner, write a program that creates a login name for a user, 
given the user's 
first name, 
last name, and a 
four-digit integer as input. 

Output the login name, 
which is made up of the 
first five letters of the last name, followed by the 
first letter of the first name, and then the 
last two digits of the number (use the % operator). 

If the last name has less than five letters, then use all letters of the last name.

Hint: Use the to_string() function to convert numerical data to a string.
// https://en.cppreference.com/cpp/string/basic_string/to_string

Example:
Input: Poppie Panther 3045
Output: PanthP45

Input: Felipe Mora 2021
Output: MoraF21

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Poppie Panther 3045
PanthP45

Felipe Mora 2021
MoraF21

*/
