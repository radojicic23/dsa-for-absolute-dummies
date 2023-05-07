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
- EXPLANATION:

    - Brute Force algorithm is a straightforward approach to solve a problem by trying all possible solutions and selecting the best one. 
      This method is usually used when the input size is relatively small and has a limited number of possibilities. 
      Brute Force algorithm is also known as Exhaustive Search algorithm, as it exhausts all possible solutions to find the optimal solution.


- TIME AND SPACE COMPLEXITY:

    - The time and space complexity of the Brute Force algorithm depends on the size of the input and the number of possible solutions.
    
    - For example, if we have an array of size n, and we want to find the maximum element in the array, 
      the time complexity of the Brute Force algorithm is O(n), 
      since we need to iterate through all n elements of the array to find the maximum element. 

      The space complexity is O(1), since we only need to store one variable to keep track of the maximum value.
    
    - However, for some problems, the number of possible solutions can be very large, and the Brute Force algorithm may take exponential time. 
      In such cases, the time complexity of the Brute Force algorithm can be expressed as O(2^n) or O(n!), where n is the size of the input.


- WHEN TO USE:

    - The input size is small.
    - The problem space is not too large.
    - There is no obvious efficient algorithm available.
    - The problem requires exhaustive search.
    - Brute Force algorithm can be used as a baseline for other more advanced algorithms.
*/


// initialzie brute force algorithm function
// it takes array as an input  
const bruteForce = (array) => {
    // we assume that the first value is the max value from the array
    let maxValue = array[0]
    // go through all elements in the array except first element
    for (let i = 1; i < array.length; i++) {
        // if the current value is greater than max value before
        if (array[i] > maxValue) {
            // update max value
            maxValue = array[i];
        }
    }
    // return max value
    return maxValue;
}


// initialize new array
const newArray = [20, 50, 2, 321, 8, 121, 256, 133, 32]
// run brute force algorithm
const maxValue = bruteForce(newArray);

console.log(`Max value of this array is: ${maxValue}`); // 321
