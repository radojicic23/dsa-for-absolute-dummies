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
    - If the element is smaller than the sorted elements to its left, move those elements one position to the right to make space for the new element.
    - Insert the new element into its correct position in the sorted portion of the array.
    - Repeat steps 3 and 4 for each subsequent element in the unsorted portion of the array until the entire array is sorted.
*/