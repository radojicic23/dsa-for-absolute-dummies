/*
 /$$   /$$                     /$$        /$$$$$$              /$$    
| $$  | $$                    | $$       /$$__  $$            | $$    
| $$  | $$  /$$$$$$   /$$$$$$$| $$$$$$$ | $$  \__/  /$$$$$$  /$$$$$$  
| $$$$$$$$ |____  $$ /$$_____/| $$__  $$|  $$$$$$  /$$__  $$|_  $$_/  
| $$__  $$  /$$$$$$$|  $$$$$$ | $$  \ $$ \____  $$| $$$$$$$$  | $$    
| $$  | $$ /$$__  $$ \____  $$| $$  | $$ /$$  \ $$| $$_____/  | $$ /$$
| $$  | $$|  $$$$$$$ /$$$$$$$/| $$  | $$|  $$$$$$/|  $$$$$$$  |  $$$$/
|__/  |__/ \_______/|_______/ |__/  |__/ \______/  \_______/   \___/ 
*/

/*
- EXPLANATION:

    - A HashSet is a data structure that represents a collection of unique elements, where each element appears only once in the collection. 
      It is designed to efficiently store and manage a set of distinct values without allowing duplicates. 
      HashSets typically provide fast insertion, deletion, and lookup operations, 
      making them useful for scenarios where you need to quickly determine the presence of an element or 
      ensure that no duplicates exist within the collection.


- KEY FEATURES:

      Uniqueness: The primary feature of a HashSet is that it stores unique elements, meaning that duplicate values are not allowed. 
      Each element can appear only once in the set.

      Fast Lookup: HashSets use a hashing function to map elements to specific locations in memory, allowing for efficient retrieval of elements. 
      On average, lookup operations have constant time complexity O(1), making it ideal for quick membership checks.

      Fast Insertion and Deletion: Similarly, insertion and deletion operations in a HashSet are typically fast with constant time complexity O(1) on average. 
      The hashing function helps determine the exact position of the element, simplifying these operations.

      No Guaranteed Order: HashSets do not maintain any specific order of elements. 
      The order in which elements are inserted may not be the same as the order in which they are iterated.

      Dynamic Size: HashSets can dynamically grow or shrink as elements are added or removed. 
      They automatically manage memory allocation and resizing to accommodate changes in the number of elements.

      Common Set Operations: HashSet supports standard set operations like union, intersection, difference, and subset checks, 
      making it useful in various algorithmic scenarios.

      Common Use Cases: HashSets are commonly used in scenarios where unique elements need to be efficiently managed, 
      such as removing duplicates from a list, checking for the existence of elements, or storing a collection of unique items.

      Implementation Variations: Depending on the programming language, HashSet implementations may differ. 
      Some languages provide built-in HashSet data structures (e.g., Java, C#), 
      while others use standard libraries or simulate HashSet behavior using objects or other data structures (e.g., JavaScript).

      Hashing and Collision Handling: The efficiency of HashSets depends on the quality of the hashing function used. 
      In cases of hash collisions (where two different elements are mapped to the same location), 
      various collision resolution techniques are employed to handle and manage these situations.

      Memory Overhead: HashSets generally have a slightly higher memory overhead compared to simple arrays or 
      lists due to the need for maintaining the underlying hash table and managing collision resolution.
*/

/*
- LEETCODE EXERCISES:
    - Two Sum (Easy): https://leetcode.com/problems/two-sum/
    - Contains Duplicate (Easy): https://leetcode.com/problems/contains-duplicate/
    - Happy Number (Easy): https://leetcode.com/problems/happy-number/
    - Isomorphic Strings (Easy): https://leetcode.com/problems/isomorphic-strings/
    - Valid Sudoku (Medium): https://leetcode.com/problems/valid-sudoku/
    - Longest Consecutive Sequence (Hard): https://leetcode.com/problems/longest-consecutive-sequence/
*/
