/*
  /$$$$$$            /$$                       /$$     /$$                            /$$$$$$                        /$$    
 /$$__  $$          | $$                      | $$    |__/                           /$$__  $$                      | $$    
| $$  \__/  /$$$$$$ | $$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       | $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$  
|  $$$$$$  /$$__  $$| $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$      |  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  
 \____  $$| $$$$$$$$| $$| $$$$$$$$| $$        | $$    | $$| $$  \ $$| $$  \ $$       \____  $$| $$  \ $$| $$  \__/  | $$    
 /$$  \ $$| $$_____/| $$| $$_____/| $$        | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \ $$| $$  | $$| $$        | $$ /$$
|  $$$$$$/|  $$$$$$$| $$|  $$$$$$$|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$      |  $$$$$$/|  $$$$$$/| $$        |  $$$$/
 \______/  \_______/|__/ \_______/ \_______/   \___/  |__/ \______/ |__/  |__/       \______/  \______/ |__/         \___/  
*/

/*
- Selection sort is a simple sorting algorithm that works by repeatedly 
  finding the minimum element from an unsorted portion of the array and putting it at the beginning of the array.

- Time and Space Complexity:

    - The Time Complexity of the selection sort algorithm is O(n^2), where "n" is the number of elements in the array,
      which means it's not the most efficient sorting algorithm out there, but it's still useful for small arrays or for educational purposes.
      This is because the algorithm has to compare each element with every other element in the array, 
      which results in n*(n-1)/2 comparisons in the worst case.

    - The Space Complexity of the selection sort algorithm is O(1), 
      which means that it uses a constant amount of additional memory regardless of the size of the input array. 
      This is because the algorithm sorts the elements in-place, without requiring any additional data structures such as arrays, lists, or trees.
*/

#include <iostream>
#include <vector>

using namespace std;

// it takes input array and the size of that input array
void selectionSort(vector<int>& arr, int n) {
  int minIndex;
  // go through all the elements of the array except for the last one
  for (int i = 0; i < n - 1; i++) {
    // initialize minimum index to 'i'
    // This is because we assume that 
    // the first unsorted element is the minimum element.
    minIndex = i;
    //  loops through all the remaining unsorted elements from 'i + 1' 
    for (int j = i + 1; j < n; j++) {
      // compare current element with the assumed minimum element
      // if it's smaller, we found new minimum element
      // update midIndex
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    // inner loop is finished
    // minimum element is at index 'minIndex'
    // swap with the first element in array
    // now the minimum element is at correct position (at beginning)
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
}


int main() {
  // initialize array
  vector<int> arr = {20, 7, 3, 43, 22, 16};
  // initialize array size
  int n = arr.size();
  // execute selection sort on array
  selectionSort(arr, n);

  // make sure it's sorted now
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}

/*
- More Examples on LeetCode:
  - Sort Colors: https://leetcode.com/problems/sort-colors/
*/
