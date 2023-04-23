'''
 /$$   /$$                 /$$                              /$$             
| $$  /$$/                | $$                             | $/             
| $$ /$$/   /$$$$$$   /$$$$$$$  /$$$$$$  /$$$$$$$   /$$$$$$|_//$$$$$$$      
| $$$$$/   |____  $$ /$$__  $$ |____  $$| $$__  $$ /$$__  $$ /$$_____/      
| $$  $$    /$$$$$$$| $$  | $$  /$$$$$$$| $$  \ $$| $$$$$$$$|  $$$$$$       
| $$\  $$  /$$__  $$| $$  | $$ /$$__  $$| $$  | $$| $$_____/ \____  $$      
| $$ \  $$|  $$$$$$$|  $$$$$$$|  $$$$$$$| $$  | $$|  $$$$$$$ /$$$$$$$/      
|__/  \__/ \_______/ \_______/ \_______/|__/  |__/ \_______/|_______/

  /$$$$$$  /$$                               /$$   /$$     /$$                    
 /$$__  $$| $$                              |__/  | $$    | $$                    
| $$  \ $$| $$  /$$$$$$   /$$$$$$   /$$$$$$  /$$ /$$$$$$  | $$$$$$$  /$$$$$$/$$$$ 
| $$$$$$$$| $$ /$$__  $$ /$$__  $$ /$$__  $$| $$|_  $$_/  | $$__  $$| $$_  $$_  $$
| $$__  $$| $$| $$  \ $$| $$  \ $$| $$  \__/| $$  | $$    | $$  \ $$| $$ \ $$ \ $$
| $$  | $$| $$| $$  | $$| $$  | $$| $$      | $$  | $$ /$$| $$  | $$| $$ | $$ | $$
| $$  | $$| $$|  $$$$$$$|  $$$$$$/| $$      | $$  |  $$$$/| $$  | $$| $$ | $$ | $$
|__/  |__/|__/ \____  $$ \______/ |__/      |__/   \___/  |__/  |__/|__/ |__/ |__/
               /$$  \ $$                                                          
              |  $$$$$$/                                                          
               \______/ 
'''

'''
- EXPLANATION:
    - Kadane's algorithm is a well-known algorithm for solving the maximum subarray problem, 
      which asks for finding the contiguous subarray within array of numbers that has the largest sum.
    
    - The basic idea behind the algorithm is to iterate through the array, 
      keeping track of the maximum sum seen so far and the current sum, and updating the maximum sum whenever a new maximum is found.
      
- STEPS:
    - Initialize variables to keep track of the current sum and maximum sum, setting them both to the first element of the array.
    - Starting from the second element, iterate through the rest of the array.
    - At each element, calculate the current sum by adding the current element to the previous current sum. 
    - Compare the current sum to the maximum sum and update the maximum sum if the current sum is greater.
    - Return the maximum sum as the result of the algorithm.

- TIME AND SPACE COMPLEXITY:

    - The time complexity of Kadane's algorithm is O(n), where n is the length of the input array. 
      This is because the algorithm only loops through the array once.

    - The space complexity of the algorithm is O(1), which means it uses a constant amount of extra space.
      This is because the algorithm only uses two variables (variable for current sum and varable for maximum sum in the end).
      Therefore, the space used by the algorithm does not depend on the size of the input array.
      
- WHEN TO USE KADANE'S ALGORITHM:
    - Kadane's algorithm is a good choice when there is a need to find the maximum subarray sum in an array of integers or 
      to find the largest continuous subarray sum in an array that may contain both positive and negative integers.
'''