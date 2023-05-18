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
- EXPLANATION:

    - A palindrome is a string or number that reads the same backward as forward. 
      For example, "racecar" is a palindrome because it reads the same way forward and backward.

    - There are multiple ways to check if a string is a palindrome or not.


- TIME AND SPACE COMPLEXITY:

    - The time complexity of the Palindrome algorithm is O(n/2), which simplifies to O(n), where n is the length of the input string. 
      This is because the algorithm only needs to compare the first half of the string with the second half, which takes n/2 comparisons.

    - The space complexity of the algorithm is also O(n), as the entire input string is stored in memory.
*/


// 1. Method (ITERATION)

// function that takes string as an argument
// return true (it's palindrome), false (not palindrome)
const palindrome1 = (str) => {
  // initialize string size
  const strSize = str.length;
  // go through string untill the middle of string is reached
  for (let i = 0; i < Math.floor(strSize / 2); i++) {
    // compare the first character with the last character
    // compare second character with the second to last and so on..
    if (str[i] !== str[strSize - i - 1]) {
      //  if any pair of characters is found to be different
      // string is not palindrome
      return false;
    }
  }
  // otherwise it's palindrome
  return true;
}


// 2. Method (BUILT-IN FUNCTIONS)

const palindrome2 = (str) => {
  const reversedString = str.split("").reverse().join("");
  return str === reversedString
}


// 3. Method (TWO POINTERS)

const palindrome3 = (str) => {
  // left pointer at first index
  // right pointer at last index
  let left = 0;
  let right = str.length - 1;
  // keep going through until they meet each other
  while (left <= right) {
    // if at any moment character at left index 
    // happens not to be equal to character at right index
    // it's not palindrome 
    if (str[left] !== str[right]) {
      return false;
    }
    // shift pointers
    left++;
    right--;
  }
  // the opposite of if statement
  // it's palindrome
  return true;
}


// initialize input string
const str = "deified";
// run palindrome function 
const result = palindrome3(str);
console.log(result);
