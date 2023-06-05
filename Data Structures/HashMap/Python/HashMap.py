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
      
      
- BRIEF EXPLANATION:

    - Key-Value Mapping: A HashMap is a collection of key-value pairs. 
      Each key in the HashMap must be unique, and it is associated with a corresponding value. 
      The keys are used to look up and retrieve the associated values.
      
    - Mutable and Dynamic: HashMap in Python is mutable, which means you can modify, add, or remove key-value pairs after creating it. 
      The size of the HashMap can dynamically change as you insert or remove elements.
      
    - Hashing: Behind the scenes, a HashMap uses a hash function to map keys to their corresponding positions in the underlying data structure. 
      This hash function calculates a unique hash code for each key and determines where the key-value pair should be stored. 
      The hash function enables efficient retrieval of values based on their keys.
      
    - Efficient Retrieval: The primary advantage of using a HashMap is its fast retrieval time complexity. 
      It provides constant-time average case performance for accessing elements, 
      meaning that the time taken to access a value is not dependent on the size of the HashMap. 
      Retrieval is performed by providing the key, and the associated value is returned.
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