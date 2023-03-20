/*
 /$$$$$$$$                            /$$$$$$$           /$$             /$$                                  
|__  $$__/                           | $$__  $$         |__/            | $$                                  
   | $$ /$$  /$$  /$$  /$$$$$$       | $$  \ $$ /$$$$$$  /$$ /$$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$   /$$$$$$$
   | $$| $$ | $$ | $$ /$$__  $$      | $$$$$$$//$$__  $$| $$| $$__  $$|_  $$_/   /$$__  $$ /$$__  $$ /$$_____/
   | $$| $$ | $$ | $$| $$  \ $$      | $$____/| $$  \ $$| $$| $$  \ $$  | $$    | $$$$$$$$| $$  \__/|  $$$$$$ 
   | $$| $$ | $$ | $$| $$  | $$      | $$     | $$  | $$| $$| $$  | $$  | $$ /$$| $$_____/| $$       \____  $$
   | $$|  $$$$$/$$$$/|  $$$$$$/      | $$     |  $$$$$$/| $$| $$  | $$  |  $$$$/|  $$$$$$$| $$       /$$$$$$$/
   |__/ \_____/\___/  \______/       |__/      \______/ |__/|__/  |__/   \___/   \_______/|__/      |_______/ 
*/

/*
- Certainly, the Two Pointers algorithm is a technique commonly used in array/string problems where you have to find a subsequence 
  or a subset that satisfies a certain condition. It is called "Two Pointers" because the algorithm uses two pointers that move 
  through the array in different directions to find the solution.

- Time and Space Complexity: 
  In general, the time complexity of the Two Pointers algorithm is O(n), where n is the size of the input array or string. 
  This is because the algorithm only requires a single pass through the input, incrementing or decrementing the pointers as needed,
  and does not require nested loops or other expensive operations.

  The space complexity of the Two Pointers algorithm is also O(1), 
  since the algorithm only requires a constant amount of extra space to store the pointers and any other variables used in the algorithm. 
  This is because the algorithm modifies the input array or string in place, rather than creating new data structures to store intermediate results.

  However, it's important to note that the time and space complexity of the Two Pointers algorithm can be affected by the specifics of the problem being solved. 
  For example, if the input data is not already sorted, sorting it can take O(nlogn) time, which would increase the overall time complexity of the algorithm.
*/

/*
- Implementation in C++:
  In this example, we're trying to find a pair of numbers in the nums vector that add up to the target value.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoPointers(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    // return this if no such pair exists
    return {-1, -1};
};

int main() {
    vector <int> nums = {1, 3, 4, 5, 10, 20};
    int target = 24;
    vector<int> ans = twoPointers(nums, target);
    if (ans[0] == -1 && ans[1] == -1) {
        cout << "No such pair exist." << endl;
    } else {
        cout << "Pair found at indices " << ans[0] << " and " << ans[1] << "." << endl;
    }
    return 0;
};

/*
- When to use Two Pointers Algorithm: 
  1. When you need to find a subarray or substring that meets certain conditions, 
     such as a subarray that adds up to a given sum or a substring that contains all the elements of a given set.

  2. When you need to search for a target value in a sorted array or string, and you can't use binary search because the elements are not unique.

  3. When you need to merge two sorted arrays or strings into a single sorted array or string.
  
  4. When you need to solve a problem that involves comparing two or more elements of an array or string, 
     such as finding the longest palindromic substring or the maximum sum of non-overlapping intervals.

  5. When you need to identify a pattern or sequence in an array or string, 
     such as identifying all the pairs of elements that add up to a given value or all the triplets that satisfy a certain condition.

- In general, the Two Pointers algorithm is most useful when the input data is sorted or partially sorted, 
  since this allows the algorithm to efficiently navigate the data using two pointers. 
  However, even if the data is not sorted, the Two Pointers algorithm can still be useful in certain situations, 
  such as when you need to find a subarray that adds up to a given sum or a substring that contains all the elements of a given set.

- Overall, the Two Pointers algorithm is a versatile and powerful technique that can be used to solve a wide variety of problems efficiently and effectively.
*/

/*
- More Examples on LeetCode: 
  1. Valid Palindrome ==> https://leetcode.com/problems/valid-palindrome/
  2. Container With Most Water ==> https://leetcode.com/problems/container-with-most-water/
  3. 3Sum ==> https://leetcode.com/problems/3sum/
  4. Remove Nth Node From End of List ==> https://leetcode.com/problems/remove-nth-node-from-end-of-list/
  5. Linked List Cycle II ==> https://leetcode.com/problems/linked-list-cycle-ii/
*/
