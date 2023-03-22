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
- HashMap is a data structure that allows you to store and retrieve key-value pairs with constant time complexity. 
  In C++, the HashMap data structure is implemented using the unordered_map class from the Standard Template Library (STL).

- Here's a brief explanation of how the HashMap works:
  - A hash function is used to convert the key into an index in the HashMap's underlying array.

  - Each index in the array holds a linked list of key-value pairs that have the same hash code (known as a "bucket").

  - When you want to add a new key-value pair to the HashMap, the hash function is applied to the key to determine the bucket where it belongs. 
    If the bucket is empty, a new node is added to the list with the key-value pair. 
    If the bucket already contains nodes, the new node is added to the end of the list.

  - When you want to retrieve a value from the HashMap, the hash function is applied to the key to determine the bucket where it should be located. 
    Then, the linked list in that bucket is traversed until the node with the matching key is found, and the corresponding value is returned.
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