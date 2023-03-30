/*
 /$$       /$$$$$$ /$$   /$$ /$$$$$$$$  /$$$$$$  /$$$$$$$         /$$$$$$  /$$$$$$$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$   /$$
| $$      |_  $$_/| $$$ | $$| $$_____/ /$$__  $$| $$__  $$       /$$__  $$| $$_____/ /$$__  $$| $$__  $$ /$$__  $$| $$  | $$
| $$        | $$  | $$$$| $$| $$      | $$  \ $$| $$  \ $$      | $$  \__/| $$      | $$  \ $$| $$  \ $$| $$  \__/| $$  | $$
| $$        | $$  | $$ $$ $$| $$$$$   | $$$$$$$$| $$$$$$$/      |  $$$$$$ | $$$$$   | $$$$$$$$| $$$$$$$/| $$      | $$$$$$$$
| $$        | $$  | $$  $$$$| $$__/   | $$__  $$| $$__  $$       \____  $$| $$__/   | $$__  $$| $$__  $$| $$      | $$__  $$
| $$        | $$  | $$\  $$$| $$      | $$  | $$| $$  \ $$       /$$  \ $$| $$      | $$  | $$| $$  \ $$| $$    $$| $$  | $$
| $$$$$$$$ /$$$$$$| $$ \  $$| $$$$$$$$| $$  | $$| $$  | $$      |  $$$$$$/| $$$$$$$$| $$  | $$| $$  | $$|  $$$$$$/| $$  | $$
|________/|______/|__/  \__/|________/|__/  |__/|__/  |__/       \______/ |________/|__/  |__/|__/  |__/ \______/ |__/  |__/
*/

/*
- Linear search, also known as sequential search, is a simple algorithm for finding a value in a list or array. 
  The algorithm checks each element of the list in turn, starting from the first, until it finds the target value or reaches the end of the list.
*/

#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &arr, int n, int target) {
    // go through arr
    for (int i = 0; i < arr.size(); i++) {
        // if target is found
        if (arr[i] == target) {
            // return index of element
            return i;
        }
    }
    // element not found
    return -1;
}

int main() {
    // initialize arr
    vector<int> arr = {5, 9, 7, 4, 1, 0};
    // size of array
    int n = arr.size();
    // initialize target
    int target = 4;
    // apply linear search algorithm
    int ans = linearSearch(arr, n, target);
    
    if (ans == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at index " << ans;
    }

    return 0;
}