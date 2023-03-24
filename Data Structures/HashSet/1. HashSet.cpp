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
- HashSet is a data structure that is used to store a collection of unique elements in no particular order. 
  It is implemented as an unordered set, using a hash table internally to achieve efficient search and insertion of elements.

- KEY FEATURES OF HASHSET IN C++:
  - It provides constant-time average complexity for most operations such as insertion, removal, and search.
  - The elements in a HashSet are unique, which means that there can be no duplicates.
  - The elements are not sorted in any particular order.
  - It is implemented using a hash table, which is an array of buckets that contain the elements. 
    Each bucket is identified by a unique key, which is generated by a hash function.
  - In C++, the HashSet is implemented as an unordered_set class in the standard library.
*/