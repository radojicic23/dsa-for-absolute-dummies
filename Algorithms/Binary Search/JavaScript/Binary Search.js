/*
 /$$$$$$$  /$$                                                /$$$$$$                                          /$$      
| $$__  $$|__/                                               /$$__  $$                                        | $$      
| $$  \ $$ /$$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$      | $$  \__/  /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$$| $$$$$$$ 
| $$$$$$$ | $$| $$__  $$ |____  $$ /$$__  $$| $$  | $$      |  $$$$$$  /$$__  $$ |____  $$ /$$__  $$ /$$_____/| $$__  $$
| $$__  $$| $$| $$  \ $$  /$$$$$$$| $$  \__/| $$  | $$       \____  $$| $$$$$$$$  /$$$$$$$| $$  \__/| $$      | $$  \ $$
| $$  \ $$| $$| $$  | $$ /$$__  $$| $$      | $$  | $$       /$$  \ $$| $$_____/ /$$__  $$| $$      | $$      | $$  | $$
| $$$$$$$/| $$| $$  | $$|  $$$$$$$| $$      |  $$$$$$$      |  $$$$$$/|  $$$$$$$|  $$$$$$$| $$      |  $$$$$$$| $$  | $$
|_______/ |__/|__/  |__/ \_______/|__/       \____  $$       \______/  \_______/ \_______/|__/       \_______/|__/  |__/
                                             /$$  | $$                                                                  
                                            |  $$$$$$/                                                                  
                                             \______/ 
*/

/*
- EXPLANATION:

    - The Binary Search Algorithm is an efficient way to search for a specific value within a sorted list of values. 
      It works by repeatedly dividing the list in half and checking whether the target value is in the lower or upper half. 
      This process is repeated until the target value is found, or until it is determined that the target value is not in the list.


- TIME AND SPACE COMPLEXITY:

    - The time complexity of the Binary Search Algorithm is O(log n), where n is the number of elements in the list. 
      This is because each iteration of the loop cuts the size of the search space in half. 
      Therefore, the algorithm can find the target value in a large list much more quickly than a linear search 
      that would have a time complexity of O(n).
      
    - The space complexity of the Binary Search Algorithm is O(1), which means that it uses a constant amount of memory. 
      This is because the algorithm only needs to store a few variables (low, high, and mid) 
      to keep track of the search space and the current position. 


- WHEN TO USE:

    - Searching in a sorted array or list: If you have a sorted array or list, 
      binary search algorithm can be used to search for a specific element in it.
  
    - Finding the maximum or minimum value in a function: 
      If you have a function that is monotonically increasing or decreasing over a range, 
      you can use binary search algorithm to find the maximum or minimum value in that range. 
      For example, if you have a function that represents the height of a person at a given age, 
      you can use binary search algorithm to find the age at which the person reaches their maximum height.
  
    - If you have a sorted array of integers, you can use binary search algorithm to find the first occurrence of a specific integer.
  
    - Finding the closest value to a target value: 
      If you have a sorted array or list and you want to find the closest value to a target value, you can use binary search algorithm.

- Overall, binary search algorithm is most useful when we are dealing with sorted arrays or lists, 
  monotonic properties, and when we need to find the maximum or minimum value in a function.
*/