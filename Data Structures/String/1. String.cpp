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
