'''
 /$$   /$$                     /$$        /$$$$$$              /$$    
| $$  | $$                    | $$       /$$__  $$            | $$    
| $$  | $$  /$$$$$$   /$$$$$$$| $$$$$$$ | $$  \__/  /$$$$$$  /$$$$$$  
| $$$$$$$$ |____  $$ /$$_____/| $$__  $$|  $$$$$$  /$$__  $$|_  $$_/  
| $$__  $$  /$$$$$$$|  $$$$$$ | $$  \ $$ \____  $$| $$$$$$$$  | $$    
| $$  | $$ /$$__  $$ \____  $$| $$  | $$ /$$  \ $$| $$_____/  | $$ /$$
| $$  | $$|  $$$$$$$ /$$$$$$$/| $$  | $$|  $$$$$$/|  $$$$$$$  |  $$$$/
|__/  |__/ \_______/|_______/ |__/  |__/ \______/  \_______/   \___/ 
'''

'''
- EXPLANATION:
    - In Python, there is no built-in class named HashSet. 
      However, Python provides a built-in class called set, which can be used to achieve similar functionality to a hash set. 
      The set class in Python represents an unordered collection of unique elements. 
      It is implemented using a hash table data structure, which allows for efficient membership testing, insertion, and deletion operations.
      
      
- KEY FEATURES OF HASHSET:

    - Unique elements: Sets only contain unique elements. 
      If you try to add a duplicate element to a set, it will be ignored.
    
    - Unordered: The elements in a set are not stored in any particular order. 
      Therefore, you cannot access elements in a set by their indices.
    
    - Mutable: Sets are mutable, which means you can add and remove elements from them.
    
    - Hash-based: Sets in Python are implemented using a hash table, which allows for fast insertion, deletion, and membership testing.
    
    - Membership testing: You can easily check whether an element is present in a set using the in operator. 
      This operation has an average time complexity of O(1).
    
    - Set operations: Sets support various set operations such as union, intersection, difference, and symmetric difference. 
      These operations can be performed using built-in methods or operators.
'''