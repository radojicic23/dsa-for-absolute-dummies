/*
 /$$$$$$$                        /$$                     /$$$$$$$$                                     
| $$__  $$                      | $$                    | $$_____/                                     
| $$  \ $$  /$$$$$$  /$$   /$$ /$$$$$$    /$$$$$$       | $$     /$$$$$$   /$$$$$$   /$$$$$$$  /$$$$$$ 
| $$$$$$$  /$$__  $$| $$  | $$|_  $$_/   /$$__  $$      | $$$$$ /$$__  $$ /$$__  $$ /$$_____/ /$$__  $$
| $$__  $$| $$  \__/| $$  | $$  | $$    | $$$$$$$$      | $$__/| $$  \ $$| $$  \__/| $$      | $$$$$$$$
| $$  \ $$| $$      | $$  | $$  | $$ /$$| $$_____/      | $$   | $$  | $$| $$      | $$      | $$_____/
| $$$$$$$/| $$      |  $$$$$$/  |  $$$$/|  $$$$$$$      | $$   |  $$$$$$/| $$      |  $$$$$$$|  $$$$$$$
|_______/ |__/       \______/    \___/   \_______/      |__/    \______/ |__/       \_______/ \_______/
*/

/*
- Brute Force algorithm is a straightforward approach to solve a problem by trying all possible solutions and selecting the best one. 
  This method is usually used when the input size is relatively small and has a limited number of possibilities. 
  Brute Force algorithm is also known as Exhaustive Search algorithm, as it exhausts all possible solutions to find the optimal solution.

- Time and Space Complexity:
  The time and space complexity of the Brute Force algorithm depends on the size of the input and the number of possible solutions.
  
  For example, if we have an array of size n, and we want to find the maximum element in the array, 
  the time complexity of the Brute Force algorithm is O(n), since we need to iterate through all n elements of the array to find the maximum element. 
  The space complexity is O(1), since we only need to store one variable to keep track of the maximum value.

  However, for some problems, the number of possible solutions can be very large, and the Brute Force algorithm may take exponential time. 
  In such cases, the time complexity of the Brute Force algorithm can be expressed as O(2^n) or O(n!), where n is the size of the input.
*/

/*
- Example: 
  Let's consider a simple example to illustrate the Brute Force algorithm. 
  Suppose we have an array of integers, and we want to find the maximum element in the array. 
  We can implement the Brute Force algorithm to solve this problem as follows:
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 55, 24, 2, 7, 80, 167, 91};
    int maxValue = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    cout << "Max value of this array is: " << maxValue << endl;
    return 0;
}

/* - More Examples on LeetCode:
   1. Running Sum of 1d Array ==> https://leetcode.com/problems/running-sum-of-1d-array/
   2. Count Number of Pairs With Absolute Difference K ==> https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
*/
