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
      
      
- HERE ARE SOME OF THE MOST COMMONLY USED BUILT-IN FUNCTIONS:

    - add(element): Adds an element to the set.

    - remove(element): Removes an element from the set. Raises a KeyError if the element is not found.

    - discard(element): Removes an element from the set if it is present. Does not raise an error if the element is not found.

    - clear(): Removes all elements from the set, making it an empty set.

    - copy(): Returns a shallow copy of the set.

    - union(*sets): Returns a new set that is the union of the current set and the provided sets.

    - intersection(*sets): Returns a new set that is the intersection of the current set and the provided sets.

    - difference(*sets): Returns a new set that contains elements present in the current set but not in the provided sets.

    - symmetric_difference(other_set): Returns a new set that contains elements present in either the current set or the provided set, but not in both.

    - issubset(other_set): Checks if the current set is a subset of the provided set and returns a boolean value.

    - issuperset(other_set): Checks if the current set is a superset of the provided set and returns a boolean value.

    - isdisjoint(other_set): Checks if the current set and the provided set have no common elements and returns a boolean value.

    - len(set): Returns the number of elements in the set.

    - iter(set): Returns an iterator over the set, allowing you to iterate through its elements.
'''


# Creating a set
my_set = set()

# Adding elements to the set
my_set.add(1)
my_set.add(2)
my_set.add(3)
my_set.add(1)  # Ignored, as 1 is already present

print(my_set)  # Output: {1, 2, 3}

# Removing an element from the set
my_set.remove(2)

print(my_set)  # Output: {1, 3}

# Checking membership
print(1 in my_set)  # Output: True
print(2 in my_set)  # Output: False

# Set operations
set1 = {1, 2, 3}
set2 = {2, 3, 4}

union_set = set1.union(set2)
print(union_set)  # Output: {1, 2, 3, 4}

intersection_set = set1.intersection(set2)
print(intersection_set)  # Output: {2, 3}

difference_set = set1.difference(set2)
print(difference_set)  # Output: {1}

symmetric_difference_set = set1.symmetric_difference(set2)
print(symmetric_difference_set)  # Output: {1, 4}