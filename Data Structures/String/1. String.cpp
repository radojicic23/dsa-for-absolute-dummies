/*
  /$$$$$$   /$$               /$$                    
 /$$__  $$ | $$              |__/                    
| $$  \__//$$$$$$    /$$$$$$  /$$ /$$$$$$$   /$$$$$$ 
|  $$$$$$|_  $$_/   /$$__  $$| $$| $$__  $$ /$$__  $$
 \____  $$ | $$    | $$  \__/| $$| $$  \ $$| $$  \ $$
 /$$  \ $$ | $$ /$$| $$      | $$| $$  | $$| $$  | $$
|  $$$$$$/ |  $$$$/| $$      | $$| $$  | $$|  $$$$$$$
 \______/   \___/  |__/      |__/|__/  |__/ \____  $$
                                            /$$  \ $$
                                           |  $$$$$$/
                                            \______/ 
*/

/*
- String is a sequence of characters stored in contiguous memory locations. 
  It is represented by the std::string class, which is a part of the standard library.
  Strings can be manipulated in a variety of ways using built-in string functions, such as length(), substr(), find(), and replace(). 
  There are also operators that can be used with strings, such as the + operator, which concatenates two strings.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  // declare and initialize a string variable
  string myString = "Hello World!";
  // built-in function for string size
  int strSize = myString.length();
  // we can use operators like "+" on strings
  string str1 = "John";
  string str2 = "Wick";
  string fullName = str1 + " " + str2;

  cout << myString << endl;
  cout << strSize << endl;
  cout << "Hello, " << fullName << "!" << endl;
  return 0; 
}

/*
- C++ provides a number of built-in functions for working with strings. Here are some of the most commonly used ones:

  1. length(): This function returns the length of the string, i.e., the number of characters in the string.
  2. substr(): This function returns a substring of the original string, starting from a given position and with a given length.
  3. find(): This function searches the string for a given substring and returns the index of the first occurrence.
  4. replace(): This function replaces a portion of the string with another string.
  5. at(): This function returns the character at a given index in the string.
  6. append(): This function appends another string to the end of the current string.
  7. c_str(): This function returns a const char* pointer to the underlying character array of the string.

  These are just a few examples of the many functions available for working with strings in C++. 
  For a full list of functions, see the C++ documentation.
*/
