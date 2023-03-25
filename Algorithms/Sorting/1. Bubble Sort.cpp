/*
 /$$$$$$$            /$$       /$$       /$$                  /$$$$$$                        /$$    
| $$__  $$          | $$      | $$      | $$                 /$$__  $$                      | $$    
| $$  \ $$ /$$   /$$| $$$$$$$ | $$$$$$$ | $$  /$$$$$$       | $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$  
| $$$$$$$ | $$  | $$| $$__  $$| $$__  $$| $$ /$$__  $$      |  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  
| $$__  $$| $$  | $$| $$  \ $$| $$  \ $$| $$| $$$$$$$$       \____  $$| $$  \ $$| $$  \__/  | $$    
| $$  \ $$| $$  | $$| $$  | $$| $$  | $$| $$| $$_____/       /$$  \ $$| $$  | $$| $$        | $$ /$$
| $$$$$$$/|  $$$$$$/| $$$$$$$/| $$$$$$$/| $$|  $$$$$$$      |  $$$$$$/|  $$$$$$/| $$        |  $$$$/
|_______/  \______/ |_______/ |_______/ |__/ \_______/       \______/  \______/ |__/         \___/ 
*/

/*
- Bubble Sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order. 
  It gets its name because smaller elements "bubble" to the top of the array with each iteration.

- Time and Space Complexity: 
  Bubble Sort has a worst-case and average-case time complexity of O(n^2), where n is the number of elements in the array. 

  - Best-case time complexity: In the best case, where the input array is already sorted, Bubble Sort has a time complexity of O(n), 
    because the algorithm only needs to make one pass through the array to verify that it is sorted and no swaps are needed.

  - Space complexity: Bubble Sort has a space complexity of O(1), 
    meaning that it sorts the array in place and does not require any additional space proportional to the size of the input. 
    This is because the algorithm only needs to store a few temporary variables to perform the swaps, 
    and does not create any new data structures or arrays.
*/

#include <iostream>
#include <vector>

using namespace std;

// bubble sort function takes an arr and its length
void bubbleSort(vector<int> &arr, int& n) {
    // keep track of whether any elements were swapped 
    bool swapped;
    // go through every element in array
    for (int i = 0; i < n; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // if no two elements were swapped by inner loop then break
        if (swapped == false) break;
    }
};

int main() {
    // initialize array
    vector<int> arr = {52, 23, 3, 64, 1, 8, 121};
    // initialize array size
    int n = arr.size();
    // apply bubble sort algorithm
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << endl;
	}
  return 0;
}

/*
- More Examples on LeetCode:
  - Sort Colors: https://leetcode.com/problems/sort-colors/
*/