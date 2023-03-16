/*
- An array is a data structure that stores a collection of elements of the same data type in a contiguous block of memory. 
  It provides a way to store and access a group of related values using a single variable name.

- Each element in an array is identified by an index, which represents its position in the array. 
  The index starts at 0 for the first element, and increases by 1 for each subsequent element. 
  This means that if an array has n elements, the indices range from 0 to n-1.

- Arrays can be used to store and manipulate different types of data, such as numbers, characters, strings, and objects. 
  They are commonly used in programming for a variety of tasks, such as sorting, searching, and processing large amounts of data.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  // - One Dimensional Array
  vector<int> arr = {1, 2, 3, 4};

  // - Two Dimensional Array 
  vector<vector<int>> arr1 = {{1, 2, 3}, {4, 5, 6}};

  // - Two Dimensional (n x n) Array
  vector<vector<int>> arr2 = {{1, 20, 32, 4},
                              {5, 6, 70, 81},
                              {9, 10, 7, 12},
                              {3, 14, 5, 16}}; 
};

// max(arr) -> Returns highest number in array, in this case 4.
// min(arr) -> Returns smallest number in array, in this case 1.
// sort(arr.begin(), arr.end()) -> Sorting arr in increasing order, in this case it's already in increasing order.
// arr.size -> Return size or length of this array, in this case 4.
// arr.empty() -> Test if array is empty.
// arr.push_back('something here') -> Append or insert element in array.
// arr.pop_back() -> Pop or remove element from array.
// arr.erase() -> Erase element from array.
// swap(element1, element2) -> swap elements.

/*
- Look-up (Access) - O(1) -	When we do array[1], the program can instantly find the value stored at the first location.
- Add	- O(1) - More accurately this is amortised O(1). When we add to the end of the array, it only takes constant time.
- Pop	- O(1) - When we remove the last element of the array, it takes constant time.
- Insert - O(N) - When we insert an element to the middle of the array, it takes O(N) time. The whole array needs to be restructured to accommodate the new element.
- Remove - O(N) -	When we remove an element in the middle of the array, it takes O(N) time. The whole array needs to be restructured to replace the missing gap of the replaced element.
- Length - O(1) - This may seem like to be O(N) as we have to go through the whole array to check its length. However, checking the length of an array in many languages should be pre-computed in their data structures, so it only takes constant time.
*/