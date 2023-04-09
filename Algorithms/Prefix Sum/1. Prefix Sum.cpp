/*
 /$$$$$$$                      /$$$$$$  /$$                  /$$$$$$                         
| $$__  $$                    /$$__  $$|__/                 /$$__  $$                        
| $$  \ $$ /$$$$$$   /$$$$$$ | $$  \__/ /$$ /$$   /$$      | $$  \__/ /$$   /$$ /$$$$$$/$$$$ 
| $$$$$$$//$$__  $$ /$$__  $$| $$$$    | $$|  $$ /$$/      |  $$$$$$ | $$  | $$| $$_  $$_  $$
| $$____/| $$  \__/| $$$$$$$$| $$_/    | $$ \  $$$$/        \____  $$| $$  | $$| $$ \ $$ \ $$
| $$     | $$      | $$_____/| $$      | $$  >$$  $$        /$$  \ $$| $$  | $$| $$ | $$ | $$
| $$     | $$      |  $$$$$$$| $$      | $$ /$$/\  $$      |  $$$$$$/|  $$$$$$/| $$ | $$ | $$
|__/     |__/       \_______/|__/      |__/|__/  \__/       \______/  \______/ |__/ |__/ |__/
*/

/*
- The prefix sum algorithm, also known as the cumulative sum algorithm, 
  is a simple and efficient algorithm that calculates the cumulative sum of an array. 
  This algorithm is often used in computer science to preprocess an array in order to answer range queries in constant time.

- Time and Space complexity:
    - The time complexity of the prefix sum algorithm is O(N), where N is the size of the input array. 
      This is because the algorithm iterates over each element of the array exactly once and performs a constant amount of work at each iteration. 
      Therefore, the time required to compute the prefix sum is proportional to the size of the input array.
    
    - The space complexity of the algorithm is also O(N), since we need to allocate an additional vector of size N to store the prefix sum. 
      This is because the size of the prefix sum vector is equal to the size of the input array.
*/

#include <iostream>
#include <vector>

using namespace std;


vector<int> prefixSum(vector<int>& arr) {
    vector<int> prefixArr(arr.size());
    prefixArr[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        prefixArr[i] = prefixArr[i - 1] + arr[i];
    }
    return prefixArr;
}


int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> prefixArr = prefixSum(nums);
    for (int i = 0; i < prefixArr.size(); i++) {
        cout << prefixArr[i] << " ";
    }

    return 0;
}