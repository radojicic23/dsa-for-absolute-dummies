/*
 /$$$$$$$   /$$$$$$  /$$       /$$$$$$ /$$   /$$ /$$$$$$$  /$$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$$
| $$__  $$ /$$__  $$| $$      |_  $$_/| $$$ | $$| $$__  $$| $$__  $$ /$$__  $$| $$$    /$$$| $$_____/
| $$  \ $$| $$  \ $$| $$        | $$  | $$$$| $$| $$  \ $$| $$  \ $$| $$  \ $$| $$$$  /$$$$| $$      
| $$$$$$$/| $$$$$$$$| $$        | $$  | $$ $$ $$| $$  | $$| $$$$$$$/| $$  | $$| $$ $$/$$ $$| $$$$$   
| $$____/ | $$__  $$| $$        | $$  | $$  $$$$| $$  | $$| $$__  $$| $$  | $$| $$  $$$| $$| $$__/   
| $$      | $$  | $$| $$        | $$  | $$\  $$$| $$  | $$| $$  \ $$| $$  | $$| $$\  $ | $$| $$      
| $$      | $$  | $$| $$$$$$$$ /$$$$$$| $$ \  $$| $$$$$$$/| $$  | $$|  $$$$$$/| $$ \/  | $$| $$$$$$$$
|__/      |__/  |__/|________/|______/|__/  \__/|_______/ |__/  |__/ \______/ |__/     |__/|________/
*/

/*
- A palindrome is a string or number that reads the same backward as forward. 
  For example, "racecar" is a palindrome because it reads the same way forward and backward.

- There are multiple ways to check if a string is a palindrome or not.

- TIME AND SPACE COMPLEXITY:
    - The time complexity of the Palindrome algorithm is O(n/2), which simplifies to O(n), where n is the length of the input string. 
      This is because the algorithm only needs to compare the first half of the string with the second half, which takes n/2 comparisons.

    - The space complexity of the algorithm is also O(n), as the entire input string is stored in memory.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// ITERATION

// function that takes string as an argument
// return true (it's palindrome), false (not palindrome)
bool isPalindrome(string& str) {
    // initialize string size
    int strSize = str.length();
    // go through string untill the middle of string is reached
    for (int i = 0; i < strSize / 2; i++) {
        // compare the first character with the last character
        // compare second character with the second to last and so on..
        if (str[i] != str[strSize - i - 1]) {
            // if any pair of characters is found to be different
            // string is not palindrome
            return false;
        }
    }
    // if all pairs of characters are the same
    // string is palindrome
    return true;
}

// BUILT IN FUNCTION

bool isPalindrome1(string& str) {
    string newStr = str;
    reverse(newStr.begin(), newStr.end());
    return str == newStr;
}

// TWO POINTERS

bool isPalindrome2(string& str, int left, int right) {
    // left pointer at first index
    // right pointer at last index
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


int main() {
    // initialize string
    string str;
    cout << "Enter a string: ";
    // input string
    cin >> str;
    // check if it's palindrome or not with first function
    if (isPalindrome(str)) {
        cout << str << " is palindrome!" << endl;
    } else {
        cout << str << " is not a palindrome!" << endl;
    }

    // check if it's palindrome or not with second function
    if (isPalindrome1(str)) {
        cout << "This string is palindrome!" << endl;
    } else {
        cout << "This string is not palindrome!" << endl;
    }

    // initialize pointers
    // left (first position), right (last position)
    int left = 0;
    int right = str.length() - 1;
    // check if it's palindrome or not with third function
    if (isPalindrome2(str, left, right)) {
        cout << "IT'S PALINDROME!!!" << endl;
    } else {
        cout << "IT's NOT PALINDROME!!!" << endl; 
    }

    return 0;
}
