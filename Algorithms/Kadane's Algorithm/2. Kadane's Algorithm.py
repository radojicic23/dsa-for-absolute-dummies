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
'''