/*
  /$$$$$$  /$$ /$$       /$$ /$$                           /$$      /$$ /$$                 /$$                        
 /$$__  $$| $$|__/      | $$|__/                          | $$  /$ | $$|__/                | $$                        
| $$  \__/| $$ /$$  /$$$$$$$ /$$ /$$$$$$$   /$$$$$$       | $$ /$$$| $$ /$$ /$$$$$$$   /$$$$$$$  /$$$$$$  /$$  /$$  /$$
|  $$$$$$ | $$| $$ /$$__  $$| $$| $$__  $$ /$$__  $$      | $$/$$ $$ $$| $$| $$__  $$ /$$__  $$ /$$__  $$| $$ | $$ | $$
 \____  $$| $$| $$| $$  | $$| $$| $$  \ $$| $$  \ $$      | $$$$_  $$$$| $$| $$  \ $$| $$  | $$| $$  \ $$| $$ | $$ | $$
 /$$  \ $$| $$| $$| $$  | $$| $$| $$  | $$| $$  | $$      | $$$/ \  $$$| $$| $$  | $$| $$  | $$| $$  | $$| $$ | $$ | $$
|  $$$$$$/| $$| $$|  $$$$$$$| $$| $$  | $$|  $$$$$$$      | $$/   \  $$| $$| $$  | $$|  $$$$$$$|  $$$$$$/|  $$$$$/$$$$/
 \______/ |__/|__/ \_______/|__/|__/  |__/ \____  $$      |__/     \__/|__/|__/  |__/ \_______/ \______/  \_____/\___/ 
                                           /$$  \ $$                                                                   
                                          |  $$$$$$/                                                                   
                                           \______/                                                                   
*/

/*
- EXPLANATION:
    - Sliding window algorithm is a commonly used technique in computer science that is used to solve a variety of problems 
      related to arrays, strings, and other data structures. It involves creating a window of fixed size 
      and sliding it over an array or string to perform some computation.
    
    - The size of the window and the number of elements it moves at each step can be adjusted to suit the needs 
      of the specific problem being solved. The technique is commonly used in algorithms that involve 
      finding the maximum/minimum value in a set of data, or counting the number of occurrences of a specific element.


- WHEN TO USE SLIDING WINDOW:
    - Finding the maximum/minimum value in a set of data.

    - Counting the number of occurrences of a specific element.

    - Finding the longest substring without repeating characters.

    - Finding the maximum sum of a sub-array of size "X".
*/

/*
- TIME AND SPACE COMPLEXITY:
    - The time and space complexity of the sliding window algorithm depend on the specific problem being solved 
      and the implementation of the algorithm.
      Overall, the sliding window algorithm is often an efficient way to solve problems that involve subarrays or substrings of a given size.

    - Time complexity:
        - In general, the time complexity of the sliding window algorithm is O(n), where n is the size of the input array or string. 
          This is because the algorithm involves iterating over the entire input once to create the initial window 
          and then sliding the window once for each element of the input.

    - Space complexity:
        - The space complexity of the sliding window algorithm also depends on the specific problem and implementation.
          In general, it's O(1). However, some problems might require additional data structures to be used within the window, 
          such as a hash table or priority queue, which would increase the space complexity.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> 

using namespace std;

// it takes vector (array) as input and k (window size)
int maxSum(vector<int>& arr, int k) {
    // initialize arr size
    int n = arr.size();
    // sum of the current window
    int sum = 0;
    // included from <climits>
    int maxSum = INT_MIN;

    // create a window of size k 
    // calculate the sum of its elements
    for (int i = 0; i < k; i++) {
        // sum of current window
        sum += arr[i];
    }
    // 'max' included from <algorithm>
    // calculate max sum
    maxSum = max(maxSum, sum);

    // slide the window by one element at a time 
    // recalculate the max sum
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}


int main() {
    // initialize input arry
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7, 7}; // Output: 20
    // initialize window size
    int k = 3;
    // execute algorithm
    cout << "Output: " << maxSum(arr, k) << endl;

    return 0;
}

/*
- LEETCODE EXERCISES
    - Substrings of Size Three with Distinct Characters: https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
    - Max Consecutive Ones III: https://leetcode.com/problems/max-consecutive-ones-iii/
*/
