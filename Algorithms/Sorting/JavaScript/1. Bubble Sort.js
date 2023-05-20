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
- EXPLANATION:
    - Bubble Sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order. 
      It gets its name because smaller elements "bubble" to the top of the array with each iteration.


- TIME AND SPACE COMPLEXITY: 
    - Bubble Sort has a worst-case and average-case time complexity of O(n^2), where n is the number of elements in the array. 

    - Best-case time complexity: In the best case, where the input array is already sorted, Bubble Sort has a time complexity of O(n), 
      because the algorithm only needs to make one pass through the array to verify that it is sorted and no swaps are needed.

    - Space complexity: Bubble Sort has a space complexity of O(1), 
      meaning that it sorts the array in place and does not require any additional space proportional to the size of the input. 
      This is because the algorithm only needs to store a few temporary variables to perform the swaps, 
      and does not create any new data structures or arrays.


- WHEN TO USE BUBBLE SORT:

    - Bubble sort is generally used for educational purposes or for sorting small datasets where efficiency is not a primary concern. 
      It is also used as a simple example to demonstrate sorting algorithms and their complexity.

    - In general, it is not recommended to use bubble sort for practical applications because it's not efficient.
*/


// initialize bubble sort algorithm function 
// it takes array as an input
const bubbleSort = (arr) => {
    // initialize array size
    const n = arr.length;
    // go through every element in the array
    for (let i = 0; i < n; i++) {
        // loop through to compare each element in the array
        for (let j = 0; j < n - i - 1; j++) {
            // compare two adjacent elements
            // if you want to sort in descending order change > to <
            if (arr[j] > arr[j + 1]) {
                // swap them
                let tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    // return sorted array 
    return arr;
}


// initialize new array
const newArray = [252, 57, 21, 2, 69, 1, 8, 133];
// run bubble sort
const sortedArray = bubbleSort(newArray);

console.log(sortedArray); // [1, 2, 8, 21, 57, 69, 133, 252]


/*
- MORE EXAMPLES ON LEETCODE:

    - Sort Colors: https://leetcode.com/problems/sort-colors/
*/
