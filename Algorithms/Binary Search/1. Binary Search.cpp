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
  The search begins by comparing the target value to the middle element of the sorted array. 
  If the target value is equal to the middle element, the search is complete. 
  If the target value is less than the middle element, the search continues on the lower half of the array. 
  If the target value is greater than the middle element, the search continues on the upper half of the array. 
  This process continues until the target value is found or the search interval is empty.
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
