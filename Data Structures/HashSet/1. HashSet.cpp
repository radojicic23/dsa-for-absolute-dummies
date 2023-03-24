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

#include <iostream>
#include <unordered_set>

using namespace std;


int main() {
    // create a hashset
    unordered_set<int> mySet;

    // insert some values in hashset
    mySet.insert(3);
    mySet.insert(2);
    mySet.insert(4);
    mySet.insert(1);

    // check if an element is in hashset
    if (mySet.count(4)) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    // remove element from hashset
    mySet.erase(2);

    // iterate through the elements
    for (auto i = mySet.begin(); i != mySet.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    
    return 0;
}

/*
- HERE ARE SOME OF THE MOST COMMONLY USED BUILT-IN FUNCTIONS FOR HASHSET IN C++:

  - insert(): This function is used to insert an element into the HashSet. 
    It returns a pair object containing an iterator to the inserted element and a boolean value indicating whether the insertion was successful.
    - The time complexity of insert() is amortized constant O(1) on average. 
      The space complexity of insert() is O(N), where N is the number of elements in the HashSet.

  - erase(): This function is used to remove an element from the HashSet. 
    It takes an iterator or a value as an argument and returns the number of elements removed.
    - The time complexity of erase() is constant O(1) on average. 
      The space complexity of erase() is O(N), where N is the number of elements in the HashSet.

  - clear(): This function is used to remove all elements from the HashSet.
    - The time complexity of clear() is linear O(N), where N is the number of elements in the HashSet. The space complexity of clear() is O(1).

  - find(): This function is used to find an element in the HashSet. 
    It returns an iterator to the element if it is found, or the end() iterator if it is not found.
    -  The time complexity of find() is constant O(1) on average. The space complexity of find() is O(1).

  - size(): This function returns the number of elements in the HashSet.
    - The time complexity of size() is constant O(1) on average. The space complexity of size() is O(1).

  - empty(): This function returns a boolean value indicating whether the HashSet is empty or not.
    - The time complexity of empty() is constant O(1) on average. The space complexity of empty() is O(1).

  - count(): This function is used to count the number of elements in the HashSet that match a specific value. It returns the number of elements that match.
    - The time complexity of count() is constant O(1) on average. The space complexity of count() is O(1).
*/