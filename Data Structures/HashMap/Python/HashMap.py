'''
 /$$   /$$                     /$$       /$$      /$$                    
| $$  | $$                    | $$      | $$$    /$$$                    
| $$  | $$  /$$$$$$   /$$$$$$$| $$$$$$$ | $$$$  /$$$$  /$$$$$$   /$$$$$$ 
| $$$$$$$$ |____  $$ /$$_____/| $$__  $$| $$ $$/$$ $$ |____  $$ /$$__  $$
| $$__  $$  /$$$$$$$|  $$$$$$ | $$  \ $$| $$  $$$| $$  /$$$$$$$| $$  \ $$
| $$  | $$ /$$__  $$ \____  $$| $$  | $$| $$\  $ | $$ /$$__  $$| $$  | $$
| $$  | $$|  $$$$$$$ /$$$$$$$/| $$  | $$| $$ \/  | $$|  $$$$$$$| $$$$$$$/
|__/  |__/ \_______/|_______/ |__/  |__/|__/     |__/ \_______/| $$____/ 
                                                               | $$      
                                                               | $$      
                                                               |__/ 
'''

'''
- EXPLANATIONS:
    - In Python, the HashMap data structure is commonly referred to as a dictionary or dict. 
      It is a built-in data type that allows you to store and retrieve key-value pairs efficiently. 
      The HashMap provides fast access to values based on their corresponding keys.
'''

# Creating a HashMap
my_dict = {"apple": 3, "banana": 5, "orange": 2}

# Accessing values
print(my_dict["apple"])  # Output: 3

# Modifying values
my_dict["banana"] = 10
print(my_dict["banana"])  # Output: 10

# Adding new key-value pairs
my_dict["grape"] = 7
print(my_dict["grape"])  # Output: 7

# Removing key-value pairs
del my_dict["orange"]
print(my_dict.get("orange"))  # Output: None

# Iterating over key-value pairs
for key, value in my_dict.items():
    print(key, value)





'''
- More Examples on LeetCode:

    - Two Sum ==> https://leetcode.com/problems/two-sum/
    - Contains Duplicate ==> https://leetcode.com/problems/contains-duplicate/
    - Contains Duplicates II ==> https://leetcode.com/problems/contains-duplicate-ii/
    - Longest Substring Without Repeating Characters ==> https://leetcode.com/problems/longest-substring-without-repeating-characters/
    - Design HashMap ==> https://leetcode.com/problems/design-hashmap/
'''