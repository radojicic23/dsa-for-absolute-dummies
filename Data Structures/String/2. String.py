'''
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
'''

'''
- EXPLANATION:
    - In Python, a string is a sequence of characters enclosed within single quotes ('...') or double quotes ("..."). 
      For example, the string "Hello, World!" is a sequence of characters that includes the letters 
      'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', and '!'.
      
    - Strings are one of the basic data structures in Python and are commonly used to store text-based information.
'''

'''
- HERE ARE SOME OF THE MOST COMMONLY USED BUILT-IN FUNCTIONS FOR STRINGS IN PYTHON:

    - len(string): Returns the length of the string.
    - string.upper(): Returns a new string with all characters in uppercase.
    - string.lower(): Returns a new string with all characters in lowercase.
    - string.title(): Returns a new string with the first character of each word capitalized.
    - string.strip(): Returns a new string with any whitespace characters removed from the beginning and end of the string.
    - string.startswith(substring): Returns True if the string starts with the specified substring, otherwise returns False.
    - string.endswith(substring): Returns True if the string ends with the specified substring, otherwise returns False.
    - string.find(substring): Returns the index of the first occurrence of the specified substring in the string, or -1 if the substring is not found.
    - string.replace(old, new): Returns a new string where all occurrences of the old substring are replaced with the new substring.
    - string.split(separator): Returns a list of substrings separated by the specified separator.
    - string.join(iterable): Returns a new string that is the concatenation of the strings in the iterable, separated by the original string.
    - string.format(*args, **kwargs): Returns a formatted string using replacement fields surrounded by curly braces. 
      The replacement fields can be filled in using positional or keyword arguments.
      
- TIME AND SPACE COMPLEXITY:
    - The time and space complexity of built-in string functions in Python 
      can vary depending on the specific function and the size of the input string.

        - len(string): This function has a time complexity of O(1), since it simply returns the length of the string. 
          The space complexity is also O(1), since the function only needs to store a single integer value.

        - string.upper(), string.lower(), and string.title(): These functions have a time complexity of O(n), 
          where n is the length of the string, since they need to iterate over every character in the string and perform 
          a case transformation or capitalization operation. The space complexity is also O(n), 
          since the function needs to create a new string object to store the transformed text.

        - string.strip(), string.startswith(substring), string.endswith(substring), and string.find(substring): 
          These functions have a time complexity of O(n), where n is the length of the string, 
          since they need to iterate over every character in the string and check for the presence or 
          absence of a specific substring or whitespace character. The space complexity is also O(n), 
          since the function needs to create a new string object to store the stripped or sliced text.

        - string.replace(old, new): This function has a time complexity of O(n), where n is the length of the string, 
          since it needs to iterate over every character in the string and perform a comparison and replacement operation 
          for each occurrence of the old substring. The space complexity is also O(n), 
          since the function needs to create a new string object to store the modified text.

        - string.split(separator): This function has a time complexity of O(n), where n is the length of the string, 
          since it needs to iterate over every character in the string and check for the presence of the separator character. 
          The space complexity is O(n) for the worst-case scenario, where the input string contains no separator characters and 
          the entire string is returned as a single list element. In the best-case scenario, 
          where the input string contains many separator characters, the space complexity can be lower, 
          since the function only needs to create a small number of new string objects to store the individual substrings.

        - string.join(iterable): This function has a time complexity of O(n), 
          where n is the total length of all strings in the iterable plus the length of the separator string. 
          The space complexity is O(n) for the worst-case scenario, 
          where all strings in the iterable are joined together into a single long string. 
          In the best-case scenario, where the iterable contains only a single string, the space complexity is lower, 
          since the function only needs to create a new string object to store the joined text.

        - string.format(*args, **kwargs): This function has a time complexity that depends on the complexity of the format string and 
          the number and complexity of the replacement values. In general, the time complexity can be considered O(n), 
          where n is the total length of the format string plus the total length of all replacement values. 
          The space complexity is also O(n), since the function needs to create a new string object to store the formatted text.
'''