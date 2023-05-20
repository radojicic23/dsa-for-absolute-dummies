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
*/