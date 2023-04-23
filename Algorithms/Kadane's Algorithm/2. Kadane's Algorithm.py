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

# initialize kadane's algorithm function that takes array as an input 
# returns integer which is the maximum subarray sum.
def kadanes_algorithm(array):
    # initialize two variables to keep track of the current sum and maximum sum
    max_so_far = array[0]
    max_sum = array[0]
    # starting from a second element
    # iterate through the rest of the array
    for i in range(1, len(array)):
        # calculate the current sum by adding the current element to the previous current sum 
        # if the current number (arr[i]) is greater then current sum
        # set the current sum to current number value
        max_so_far = max(array[i], max_so_far + array[i])
        # compare the current sum and maximum sum
        # if current sum is greater, update maximum sum 
        max_sum = max(max_sum, max_so_far)
    # return maximum sum at the end
    return max_sum


# initialize new array
my_array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
# run kadane's algorithm on new array
maximum_sum = kadanes_algorithm(my_array)
# print maximum sum 
print(maximum_sum)


'''
- LEETCODE EXAMPLES:
    - Maximum Subarray: https://leetcode.com/problems/maximum-subarray/
    - Best Time to Buy and Sell Stock: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
    - Maximum Product Subarray: https://leetcode.com/problems/maximum-product-subarray/
'''
