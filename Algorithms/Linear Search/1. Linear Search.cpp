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

- TIME AND SPACE COMPLEXITY:

    - Time Complexity:
        - In the worst case, the linear search algorithm will have to check every element in the array, giving it a worst-case time complexity of O(n), 
          where n is the size of the array. In the best case, the target element will be found at the beginning of the array, resulting in a time complexity of O(1). 
          On average, the linear search algorithm has a time complexity of O(n/2) or O(n).

    - Space Complexity:
        - The space complexity of the linear search algorithm is O(1), because it uses a constant amount of additional space, regardless of the size of the input array. 
          The only additional space used by the algorithm is the memory required to store the loop index variable i and the function arguments arr, n, and x. 
          Therefore, the space used by the algorithm is independent of the size of the input array, making it a space-efficient algorithm
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


/*
- LeetCode Exercises: 
    - Find Target Indices After Sorting Array: https://leetcode.com/problems/find-target-indices-after-sorting-array/
    - Find Numbers with Even Number of Digits: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
*/