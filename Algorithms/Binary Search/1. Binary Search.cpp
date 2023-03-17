/*
 /$$$$$$$  /$$                                                /$$$$$$                                          /$$      
| $$__  $$|__/                                               /$$__  $$                                        | $$      
| $$  \ $$ /$$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$      | $$  \__/  /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$$| $$$$$$$ 
| $$$$$$$ | $$| $$__  $$ |____  $$ /$$__  $$| $$  | $$      |  $$$$$$  /$$__  $$ |____  $$ /$$__  $$ /$$_____/| $$__  $$
| $$__  $$| $$| $$  \ $$  /$$$$$$$| $$  \__/| $$  | $$       \____  $$| $$$$$$$$  /$$$$$$$| $$  \__/| $$      | $$  \ $$
| $$  \ $$| $$| $$  | $$ /$$__  $$| $$      | $$  | $$       /$$  \ $$| $$_____/ /$$__  $$| $$      | $$      | $$  | $$
| $$$$$$$/| $$| $$  | $$|  $$$$$$$| $$      |  $$$$$$$      |  $$$$$$/|  $$$$$$$|  $$$$$$$| $$      |  $$$$$$$| $$  | $$
|_______/ |__/|__/  |__/ \_______/|__/       \____  $$       \______/  \_______/ \_______/|__/       \_______/|__/  |__/
                                             /$$  | $$                                                                  
                                            |  $$$$$$/                                                                  
                                             \______/                                                                   
*/
/*
- Binary search is a searching algorithm used to search for an element in a sorted array or list by repeatedly dividing the search interval in half. 
  - The search begins by comparing the target value to the middle element of the sorted array. 
  - If the target value is equal to the middle element, the search is complete. 
  - If the target value is less than the middle element, the search continues on the lower half of the array. 
  - If the target value is greater than the middle element, the search continues on the upper half of the array. 
  - This process continues until the target value is found or the search interval is empty.

- The time complexity of binary search is O(logn), which is more efficient than the linear search algorithm O(n), 
  which checks all elements one by one. However, for binary search to work, the array or list must be sorted.
  Binary search can be implemented using a while loop, recursion, or a combination of both. 
*/
// Implementation in C++:

#include <iostream>
#include <vector>
using namespace std;
// Binary Search Algorithm
int binarySearch(vector<int> arr, int leftPointer, int rightPointer, int target) {
    while (leftPointer <= rightPointer) {
        // find middle value value 
        int mid = leftPointer + (rightPointer - leftPointer) / 2;
        // if mid value is equal to target value, return mid index (search is complete)
        if (arr[mid] == target) {
            return mid;
        }
        // if mid value is less then target
        // the search continues on the upper half of the array
        if (arr[mid] < target) {
            leftPointer = mid + 1;
        // if mid value is greater then target
        // the search continues on the lower half of the array
        } else {
            rightPointer = mid - 1;
        }
    }
    // if target value is not found then simple return -1
    return -1;
};

int main() {
    vector<int> arr = {1, 2, 4, 10, 20, 30, 100};
    int target = 20;
    int n = arr.size();
    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1) {
        cout << "Target is not found!" << endl;
    } else {
        cout << "Target found on index " << result << endl;
    }
    return 0;
}

/*
- When to use Binary Search: 
  - 1. Searching in a sorted array or list: If you have a sorted array or list, binary search algorithm can be used to search for a specific element in it.
  
  - 2. Finding the maximum or minimum value in a function: 
       If you have a function that is monotonically increasing or decreasing over a range, 
       you can use binary search algorithm to find the maximum or minimum value in that range. 
       For example, if you have a function that represents the height of a person at a given age, 
       you can use binary search algorithm to find the age at which the person reaches their maximum height.
  
  - 3. If you have a sorted array of integers, you can use binary search algorithm to find the first occurrence of a specific integer.
  
  - 4. Finding the closest value to a target value: 
       If you have a sorted array or list and you want to find the closest value to a target value, you can use binary search algorithm.

- Overall, binary search algorithm is most useful when we are dealing with sorted arrays or lists, 
  monotonic properties, and when we need to find the maximum or minimum value in a function.
*/
