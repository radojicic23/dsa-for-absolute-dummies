/*
 /$$$$$$                                           /$$     /$$                            /$$$$$$                        /$$    
|_  $$_/                                          | $$    |__/                           /$$__  $$                      | $$    
  | $$   /$$$$$$$   /$$$$$$$  /$$$$$$   /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$       | $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$  
  | $$  | $$__  $$ /$$_____/ /$$__  $$ /$$__  $$|_  $$_/  | $$ /$$__  $$| $$__  $$      |  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  
  | $$  | $$  \ $$|  $$$$$$ | $$$$$$$$| $$  \__/  | $$    | $$| $$  \ $$| $$  \ $$       \____  $$| $$  \ $$| $$  \__/  | $$    
  | $$  | $$  | $$ \____  $$| $$_____/| $$        | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \ $$| $$  | $$| $$        | $$ /$$
 /$$$$$$| $$  | $$ /$$$$$$$/|  $$$$$$$| $$        |  $$$$/| $$|  $$$$$$/| $$  | $$      |  $$$$$$/|  $$$$$$/| $$        |  $$$$/
|______/|__/  |__/|_______/  \_______/|__/         \___/  |__/ \______/ |__/  |__/       \______/  \______/ |__/         \___/  
*/

/*
- EXPLANATION:
  - Insertion sort algorithm is a simple sorting algorithm that builds the final sorted array one item at a time. Here's how the algorithm works:

  - Start with an unsorted array of elements.
  - Take the first element of the array and assume it is sorted.
  - For each subsequent element, compare it to the sorted elements to its left. 
    If the element is smaller than the sorted elements to its left, move those elements one position to the right to make space for the new element.
  - Insert the new element into its correct position in the sorted portion of the array.
  - Repeat steps 3 and 4 for each subsequent element in the unsorted portion of the array until the entire array is sorted.

- TIME AND SPACE COMPLEXITY:

  - The time complexity of the insertion sort algorithm is O(n^2), where n is the number of elements in the array. 
    This is because, in the worst case scenario, the algorithm must make n comparisons for each of the n elements in the array.

  - The space complexity of the insertion sort algorithm is O(1), meaning it requires a constant amount of extra space. 
    This is because the algorithm sorts the input array in place, without requiring any additional data structures or temporary storage.

- WHEN TO USE INSERTION SORT:
  - Insertion sort is a good choice when the dataset is small. 
  - Insertion sort is a good choice when sorting small or partially sorted datasets, 
    and when the efficiency of the algorithm is not the primary concern.
*/

#include <iostream>
#include <vector>

using namespace std;


void insertionSort(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {
    vector<int> arr = {52, 121, 3, 64, 1, 8, 23};
    int n = arr.size();
    // execute insertion sort on array and size 
    insertionSort(arr, n);
    // check to see if it's sorted
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
