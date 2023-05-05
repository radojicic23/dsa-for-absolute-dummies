'''
 /$$$$$$$   /$$$$$$  /$$       /$$$$$$ /$$   /$$ /$$$$$$$  /$$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$$
| $$__  $$ /$$__  $$| $$      |_  $$_/| $$$ | $$| $$__  $$| $$__  $$ /$$__  $$| $$$    /$$$| $$_____/
| $$  \ $$| $$  \ $$| $$        | $$  | $$$$| $$| $$  \ $$| $$  \ $$| $$  \ $$| $$$$  /$$$$| $$      
| $$$$$$$/| $$$$$$$$| $$        | $$  | $$ $$ $$| $$  | $$| $$$$$$$/| $$  | $$| $$ $$/$$ $$| $$$$$   
| $$____/ | $$__  $$| $$        | $$  | $$  $$$$| $$  | $$| $$__  $$| $$  | $$| $$  $$$| $$| $$__/   
| $$      | $$  | $$| $$        | $$  | $$\  $$$| $$  | $$| $$  \ $$| $$  | $$| $$\  $ | $$| $$      
| $$      | $$  | $$| $$$$$$$$ /$$$$$$| $$ \  $$| $$$$$$$/| $$  | $$|  $$$$$$/| $$ \/  | $$| $$$$$$$$
|__/      |__/  |__/|________/|______/|__/  \__/|_______/ |__/  |__/ \______/ |__/     |__/|________/
'''

'''
- EXPLANATION:
    - A palindrome is a string or number that reads the same backward as forward. 
      For example, "racecar" is a palindrome because it reads the same way forward and backward.

    - There are multiple ways to check if a string is a palindrome or not.
    

- TIME AND SPACE COMPLEXITY:
    - The time complexity of the Palindrome algorithm is O(n/2), which simplifies to O(n), where n is the length of the input string. 
      This is because the algorithm only needs to compare the first half of the string with the second half, which takes n/2 comparisons.

    - The space complexity of the algorithm is also O(n), as the entire input string is stored in memory.
'''

# 1. Method (ITERATION)

# function that takes string as an argument
# return true (it's palindrome), false (not palindrome)
def palindrome1(string):
    # string size 
    str_size = len(string)
    # go through string untill the middle of string is reached
    for i in range(str_size // 2):
        # compare the first character with the last character
        # compare second character with the second to last and so on..
        if (string[i] != string[str_size - i - 1]):
            # if any pair of characters is found to be different
            # string is not palindrome
            return False
    # if all pairs of characters are the same
    # string is palindrome
    return True


# 2. Method (BUILT-IN FUNCTIONS)

def palindrome2(string):
    new_string = "".join(reversed(list(string)))
    return string == new_string


# 3. Method(TWO POINTERS)

def palindrome3(string):
    # left pointer at first index
    # right pointer at last index
    left = 0
    right = len(string) - 1
    # keep going through until they meet each other
    while (left < right):
        # if at any moment character at left index 
        # happens not to be equal to character at right index
        # it's not palindrome 
        if string[left] != string[right]:
            return False
        # shift pointers
        left += 1
        right -= 1
    # the opposite of if statement
    # it's palindrome
    return True
        


# inititalize new string (enter it)
my_string = input("Enter a string: ")
# run palindrome algorithm 
result = palindrome3(my_string)
# if result happens to be true it's palindrome
if result == True:
    print("It's palindrome.")
# if result happens to be false it's not palindrome
else:
    print("It's not palindrome.")



'''
- LEETCODE EXERCISES:

    - Valid Palindrome: https://leetcode.com/problems/valid-palindrome/
    - Palindrome Number: https://leetcode.com/problems/palindrome-number/
    - Longest Palindromic Substring: https://leetcode.com/problems/longest-palindromic-substring/
'''
