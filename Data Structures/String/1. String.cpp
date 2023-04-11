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
- EXPLANATION:
  - String is a sequence of characters stored in contiguous memory locations. 
    It is represented by the std::string class, which is a part of the standard library.
    
  - Strings can be manipulated in a variety of ways using built-in string functions, such as length(), substr(), find(), and replace(). 
    There are also operators that can be used with strings, such as the + operator, which concatenates two strings.
*/

/*
- HERE ARE SOME OF THE MOST COMMONLY USED BUILT-IN FUNCTIONS FOR HASHMAP IN C++:

  - length(): This function returns the length of the string, i.e., the number of characters in the string.
  - substr(): This function returns a substring of the original string, starting from a given position and with a given length.
  - find(): This function searches the string for a given substring and returns the index of the first occurrence.
  - replace(): This function replaces a portion of the string with another string.
  - at(): This function returns the character at a given index in the string.
  - append(): This function appends another string to the end of the current string.
  - c_str(): This function returns a const char* pointer to the underlying character array of the string.

  These are just a few examples of the many functions available for working with strings in C++. 
  For a full list of functions, see the C++ documentation.


- TIME AND SPACE COMPLEXITY:

  - length(): O(1) time complexity. Space complexity is also O(1), as no additional memory is required.

  - substr(): O(m) time complexity, where m is the length of the substring being extracted. 
    Space complexity is O(m), as a new string of length m must be created to store the substring.

  - find(): O(n*m) time complexity in the worst case, where n is the length of the string and m is the length of the substring being searched for. 
    Space complexity is O(1), as no additional memory is required.

  - replace(): O(m) time complexity, where m is the length of the substring being replaced. 
    Space complexity is also O(m), as a new string of length m may need to be created to store the replacement substring.

  - at(): O(1) time complexity. Space complexity is also O(1), as no additional memory is required.

  - append(): O(m) time complexity, where m is the length of the string being appended. 
    Space complexity is also O(m), as the string may need to allocate additional memory to accommodate the appended characters.

  - c_str(): O(1) time complexity. Space complexity is O(n), where n is the length of the string, 
    as a null-terminated character array of size n+1 needs to be created to store the string.
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
