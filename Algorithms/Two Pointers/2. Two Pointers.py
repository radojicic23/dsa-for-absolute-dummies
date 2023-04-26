'''
 /$$$$$$$$                            /$$$$$$$           /$$             /$$                                  
|__  $$__/                           | $$__  $$         |__/            | $$                                  
   | $$ /$$  /$$  /$$  /$$$$$$       | $$  \ $$ /$$$$$$  /$$ /$$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$   /$$$$$$$
   | $$| $$ | $$ | $$ /$$__  $$      | $$$$$$$//$$__  $$| $$| $$__  $$|_  $$_/   /$$__  $$ /$$__  $$ /$$_____/
   | $$| $$ | $$ | $$| $$  \ $$      | $$____/| $$  \ $$| $$| $$  \ $$  | $$    | $$$$$$$$| $$  \__/|  $$$$$$ 
   | $$| $$ | $$ | $$| $$  | $$      | $$     | $$  | $$| $$| $$  | $$  | $$ /$$| $$_____/| $$       \____  $$
   | $$|  $$$$$/$$$$/|  $$$$$$/      | $$     |  $$$$$$/| $$| $$  | $$  |  $$$$/|  $$$$$$$| $$       /$$$$$$$/
   |__/ \_____/\___/  \______/       |__/      \______/ |__/|__/  |__/   \___/   \_______/|__/      |_______/ 
'''

'''
- EXPLANATION:

    - Certainly, the Two Pointers algorithm is a technique commonly used in array/string problems where you have to find a subsequence 
      or a subset that satisfies a certain condition. It is called "Two Pointers" because the algorithm uses two pointers that move 
      through the array in different directions to find the solution.
      
- TIME AND SPACE COMPLEXITY:

    - In general, the time complexity of the Two Pointers algorithm is O(n), where n is the size of the input array or string. 
      This is because the algorithm only requires a single pass through the input, incrementing or decrementing the pointers as needed,
      and does not require nested loops or other expensive operations.

    - The space complexity of the Two Pointers algorithm is also O(1), 
      since the algorithm only requires a constant amount of extra space to store the pointers and any other variables used in the algorithm. 
      This is because the algorithm modifies the input array or string in place, 
      rather than creating new data structures to store intermediate results.

    - However, it's important to note that the time and space complexity of the Two Pointers algorithm 
      can be affected by the specifics of the problem being solved. 
      For example, if the input data is not already sorted, sorting it can take O(nlogn) time, 
      which would increase the overall time complexity of the algorithm.
      
- WHEN TO USE:

    - When you need to find a subarray or substring that meets certain conditions, 
      such as a subarray that adds up to a given sum or a substring that contains all the elements of a given set.

    - When you need to search for a target value in a sorted array or string, 
      and you can't use binary search because the elements are not unique.

    - When you need to merge two sorted arrays or strings into a single sorted array or string.
  
    - When you need to solve a problem that involves comparing two or more elements of an array or string, 
      such as finding the longest palindromic substring or the maximum sum of non-overlapping intervals.

    - When you need to identify a pattern or sequence in an array or string, 
      such as identifying all the pairs of elements that add up to a given value or all the triplets that satisfy a certain condition.


- In general, the Two Pointers algorithm is most useful when the input data is sorted or partially sorted, 
  since this allows the algorithm to efficiently navigate the data using two pointers. 
  However, even if the data is not sorted, the Two Pointers algorithm can still be useful in certain situations, 
  such as when you need to find a subarray that adds up to a given sum or a substring that contains all the elements of a given set.
'''