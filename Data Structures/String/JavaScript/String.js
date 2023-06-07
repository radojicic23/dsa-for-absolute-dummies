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

    - In JavaScript, a string is a data type that represents a sequence of characters. 
      It is used to store and manipulate textual data such as names, messages, and other pieces of information.
      A string in JavaScript is created by enclosing the characters within single quotes (''), double quotes ("") or backticks (``).

    - Strings are immutable in JavaScript, which means once a string is created, it cannot be changed. 
      However, you can perform various operations on strings to extract information or manipulate them in different ways.


SOME COMMON STRING OPERATIONS IN JAVASCRIPT:
    - Accessing characters: You can access individual characters in a string using square brackets and the index of the character (indexes start at 0).
    - Concatenation: You can concatenate (join) two or more strings together using the + operator or the concat() method.
    - String length: You can find the length of a string (number of characters) using the length property.
    - String methods: JavaScript provides several built-in methods for working with strings. 
      Some commonly used methods include toUpperCase(), toLowerCase(), slice(), substring(), indexOf(), replace(), and split().


- TIME AND SPACE COMPLEXITY OF MOST COMMONLY USED METHODS:

    - length: The length property of a string is a simple operation that returns the number of characters in the string. 
      It has a time complexity of O(1) because the length is stored as a property of the string object and can be accessed directly. 
      The space complexity is also O(1) because it does not require any additional memory.
    
    - concat(): The concat() method is used to concatenate two or more strings together. 
      The time complexity of this method is O(n), where n is the total length of the resulting string. 
      It requires creating a new string with the combined characters of the input strings. 
      The space complexity is also O(n) because it creates a new string object.

    - toUpperCase() and toLowerCase(): These methods convert the characters of a string to uppercase or lowercase, respectively. 
      The time complexity of both methods is O(n), where n is the length of the string. 
      They need to iterate over each character of the string to perform the case conversion. 
      The space complexity is O(n) because a new string object is created to store the converted string.

    - slice(), substring(), and substr(): These methods are used to extract a portion of a string. 
      The time complexity of these methods is O(k), where k is the length of the extracted substring. 
      They create a new string containing the extracted characters. The space complexity is also O(k) because a new string object is created.

    - indexOf(): The indexOf() method is used to find the index of a specified substring within a string. 
      The time complexity is O(n), where n is the length of the string. In the worst case, it needs to search through the entire string to find the substring. 
      The space complexity is O(1) because it does not require any additional memory.

    - replace(): The replace() method is used to replace occurrences of a substring with another substring. 
      The time complexity of this method is O(n), where n is the length of the string. 
      It needs to search for the occurrences of the substring and perform the replacements. 
      The space complexity is O(n) because it creates a new string object to store the modified string.

    - split(): The split() method is used to split a string into an array of substrings based on a specified delimiter. 
      The time complexity is O(n), where n is the length of the string. 
      It needs to iterate over each character of the string to identify the delimiter and split the string accordingly. 
      The space complexity is O(m), where m is the number of substrings produced. It requires creating an array to store the substrings.
*/