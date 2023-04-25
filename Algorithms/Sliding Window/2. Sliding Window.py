'''
  /$$$$$$  /$$ /$$       /$$ /$$                           /$$      /$$ /$$                 /$$                        
 /$$__  $$| $$|__/      | $$|__/                          | $$  /$ | $$|__/                | $$                        
| $$  \__/| $$ /$$  /$$$$$$$ /$$ /$$$$$$$   /$$$$$$       | $$ /$$$| $$ /$$ /$$$$$$$   /$$$$$$$  /$$$$$$  /$$  /$$  /$$
|  $$$$$$ | $$| $$ /$$__  $$| $$| $$__  $$ /$$__  $$      | $$/$$ $$ $$| $$| $$__  $$ /$$__  $$ /$$__  $$| $$ | $$ | $$
 \____  $$| $$| $$| $$  | $$| $$| $$  \ $$| $$  \ $$      | $$$$_  $$$$| $$| $$  \ $$| $$  | $$| $$  \ $$| $$ | $$ | $$
 /$$  \ $$| $$| $$| $$  | $$| $$| $$  | $$| $$  | $$      | $$$/ \  $$$| $$| $$  | $$| $$  | $$| $$  | $$| $$ | $$ | $$
|  $$$$$$/| $$| $$|  $$$$$$$| $$| $$  | $$|  $$$$$$$      | $$/   \  $$| $$| $$  | $$|  $$$$$$$|  $$$$$$/|  $$$$$/$$$$/
 \______/ |__/|__/ \_______/|__/|__/  |__/ \____  $$      |__/     \__/|__/|__/  |__/ \_______/ \______/  \_____/\___/ 
                                           /$$  \ $$                                                                   
                                          |  $$$$$$/                                                                   
                                           \______/  
'''

'''
- EXPLANATION:

    - Sliding window algorithm is a commonly used technique in computer science that is used to solve a variety of problems 
      related to arrays, strings, and other data structures. It involves creating a window of fixed size 
      and sliding it over an array or string to perform some computation.
      
    - The size of the window and the number of elements it moves at each step can be adjusted to suit the needs 
      of the specific problem being solved. The technique is commonly used in algorithms that involve 
      finding the maximum/minimum value in a set of data, or counting the number of occurrences of a specific element.
      
- TIME AND SPACE COMPLEXITY:
    - The time and space complexity of the sliding window algorithm depend on the specific problem being solved 
      and the implementation of the algorithm.
      Overall, the sliding window algorithm is often an efficient way to solve problems that involve subarrays or substrings of a given size.
      
    - Time complexity:
        - In general, the time complexity of the sliding window algorithm is O(n), where n is the size of the input array or string. 
          This is because the algorithm involves iterating over the entire input once to create the initial window 
          and then sliding the window once for each element of the input.
          
    - Space complexity:
        - The space complexity of the sliding window algorithm also depends on the specific problem and implementation.
          In general, it's O(1). However, some problems might require additional data structures to be used within the window, 
          such as a hash table or priority queue, which would increase the space complexity.
'''