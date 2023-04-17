/*
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
*/

/*
- EXPLANATIONS:
  - HashMap is a data structure that allows you to store and retrieve key-value pairs with constant time complexity. 
    In C++, the HashMap data structure is implemented using the unordered_map class from the Standard Template Library (STL).

- BRIEF EXPLANATION OF HOW THE HASHMAP WORKS:
  - A hash function is used to convert the key into an index in the HashMap's underlying array.

  - Each index in the array holds a linked list of key-value pairs that have the same hash code (known as a "bucket").

  - When you want to add a new key-value pair to the HashMap, the hash function is applied to the key to determine the bucket where it belongs. 
    If the bucket is empty, a new node is added to the list with the key-value pair. 
    If the bucket already contains nodes, the new node is added to the end of the list.

  - When you want to retrieve a value from the HashMap, the hash function is applied to the key to determine the bucket where it should be located. 
    Then, the linked list in that bucket is traversed until the node with the matching key is found, and the corresponding value is returned.
*/

/*
- - SOME OF THE MOST COMMONLY USED BUILT-IN FUNCTIONS: 

  - std::unordered_map: This is the standard C++ library implementation of a hashmap. It provides a way to store and access key-value pairs in constant time (on average) using hash functions.
    - On average, the time complexity of accessing, inserting, or deleting an element in an unordered map is O(1), which means constant time. 
      However, in the worst case, the time complexity can be O(n), where n is the number of elements in the hashmap. 
      The space complexity of an unordered map is O(n), where n is the number of elements in the map.

  - insert(): This function is used to insert a key-value pair into the hashmap. If the key already exists, it updates the value.
    - The time complexity of this function is O(1) on average, and O(n) in the worst case, where n is the number of elements in the hashmap. 
      The space complexity of this function is also O(1).

  - erase(): This function is used to remove a key-value pair from the hashmap.
    - The time complexity of this function is O(1) on average, and O(n) in the worst case, where n is the number of elements in the hashmap. 
      The space complexity of this function is also O(1).

  - find(): This function is used to find the value associated with a given key in the hashmap. 
    If the key is not found, it returns an iterator pointing to the end of the hashmap.
    - The time complexity of this function is O(1) on average, and O(n) in the worst case, where n is the number of elements in the hashmap. 
      The space complexity of this function is O(1).

  - clear(): This function is used to remove all elements from the hashmap.
    - The time complexity of this function is O(n), where n is the number of elements in the hashmap. The space complexity of this function is also O(1).

  - size(): This function is used to get the number of elements in the hashmap.
    - The time complexity of this function is O(1). The space complexity of this function is also O(1).

  - empty(): This function is used to check if the hashmap is empty.
    - The time complexity of this function is O(1). The space complexity of this function is also O(1).

  - begin(): This function returns an iterator to the beginning of the hashmap.
    - The time complexity of this function is O(1). The space complexity of this function is also O(1).

  - end(): This function returns an iterator to the end of the hashmap.
    - The time complexity of this function is O(1). The space complexity of this function is also O(1).

  - at(): This function is used to access the value associated with a given key in the hashmap. If the key is not found, it throws an exception.
    - The time complexity of this function is O(1) on average, and O(n) in the worst case, where n is the number of elements in the hashmap. 
      The space complexity of this function is O(1).
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // create HashMap that maps strings to integers
    unordered_map<string, int> myMap;

    // add some key-value pairs
    myMap["apple"] = 5;
    myMap["banana"] = 10;
    myMap["orange"] = 7;
    myMap["pear"] = 3;

    // retrieve the value associated with a key
    cout << "The value of 'pear' is: " << myMap["pear"] << endl;

    // check if a key is present in the HashMap
    if (myMap.count("apple")) {
        cout << "'Apple' is in the HashMap." << endl;
    } else {
        cout << "'Apple' is not in the HashMap." << endl;
    }

    // remove a key-value pair from the HashMap
    myMap.erase("orange");

    return 0;
}

/*
- More Examples on LeetCode:

  1. Two Sum ==> https://leetcode.com/problems/two-sum/

  2. Contains Duplicate ==> https://leetcode.com/problems/contains-duplicate/

  3. Contains Duplicates II ==> https://leetcode.com/problems/contains-duplicate-ii/

  4. Longest Substring Without Repeating Characters ==> https://leetcode.com/problems/longest-substring-without-repeating-characters/

  5. Design HashMap ==> https://leetcode.com/problems/design-hashmap/
*/
