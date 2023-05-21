/*
  /$$$$$$            /$$                       /$$     /$$                            /$$$$$$                        /$$    
 /$$__  $$          | $$                      | $$    |__/                           /$$__  $$                      | $$    
| $$  \__/  /$$$$$$ | $$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       | $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$  
|  $$$$$$  /$$__  $$| $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$      |  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  
 \____  $$| $$$$$$$$| $$| $$$$$$$$| $$        | $$    | $$| $$  \ $$| $$  \ $$       \____  $$| $$  \ $$| $$  \__/  | $$    
 /$$  \ $$| $$_____/| $$| $$_____/| $$        | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \ $$| $$  | $$| $$        | $$ /$$
|  $$$$$$/|  $$$$$$$| $$|  $$$$$$$|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$      |  $$$$$$/|  $$$$$$/| $$        |  $$$$/
 \______/  \_______/|__/ \_______/ \_______/   \___/  |__/ \______/ |__/  |__/       \______/  \______/ |__/         \___/  
*/

/*
- EXPLANATION:
    - Selection sort is a simple sorting algorithm that works by repeatedly 
      finding the minimum element from an unsorted portion of the array and putting it at the beginning of the array.


- TIME AND SPACE COMPLEXITY:

    - The Time Complexity of the selection sort algorithm is O(n^2), where "n" is the number of elements in the array,
      which means it's not the most efficient sorting algorithm out there, but it's still useful for small arrays or for educational purposes.
      This is because the algorithm has to compare each element with every other element in the array, 
      which results in n*(n-1)/2 comparisons in the worst case.

    - The Space Complexity of the selection sort algorithm is O(1), 
      which means that it uses a constant amount of additional memory regardless of the size of the input array. 
      This is because the algorithm sorts the elements in-place, without requiring any additional data structures such as arrays, lists, or trees.
*/