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
