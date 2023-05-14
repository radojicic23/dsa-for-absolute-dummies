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
- EXPLANATION:
    - The prefix sum algorithm, also known as the cumulative sum algorithm, 
      is a simple and efficient algorithm that calculates the cumulative sum of an array. 
      This algorithm is often used in computer science to preprocess an array in order to answer range queries in constant time.


- TIME AND SPACE COMPLEXITY:
    - The time complexity of the prefix sum algorithm is O(N), where N is the size of the input array. 
      This is because the algorithm iterates over each element of the array exactly once and performs a constant amount of work at each iteration. 
      Therefore, the time required to compute the prefix sum is proportional to the size of the input array.
    
    - The space complexity of the algorithm is also O(N), since we need to allocate an additional vector of size N to store the prefix sum. 
      This is because the size of the prefix sum vector is equal to the size of the input array.
*/


// prefix sum algorithm function 
// it takes array as an input
const prefixSum = (array) => {
    // initialize result empty list
    // it will store the prefix sum 
    let result = [];
    // this varable keeps track of the cumulative sum
    let sumSoFar = 0;
    // iterate through array
    for (let i = 0; i < array.length; i++) {
        // update cumulative sum
        sumSoFar += array[i];
        // add cumulative sum to the result
        result.push(sumSoFar);
    }
    // return prefix sum
    return result;
}


// initialize input array
const newArray = [1, 2, 3, 4, 5, 6];
// run prefix sum algorithm
const answer = prefixSum(newArray);

console.log(answer); // [1, 3, 6, 10, 15, 21]


/*
- Exercises from LeetCode:
    - Running Sum of 1d Array: https://leetcode.com/problems/running-sum-of-1d-array/
    - Maximum Subarray: https://leetcode.com/problems/maximum-subarray/
*/
