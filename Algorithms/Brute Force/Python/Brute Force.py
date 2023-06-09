"""
 /$$$$$$$                        /$$                     /$$$$$$$$                                     
| $$__  $$                      | $$                    | $$_____/                                     
| $$  \ $$  /$$$$$$  /$$   /$$ /$$$$$$    /$$$$$$       | $$     /$$$$$$   /$$$$$$   /$$$$$$$  /$$$$$$ 
| $$$$$$$  /$$__  $$| $$  | $$|_  $$_/   /$$__  $$      | $$$$$ /$$__  $$ /$$__  $$ /$$_____/ /$$__  $$
| $$__  $$| $$  \__/| $$  | $$  | $$    | $$$$$$$$      | $$__/| $$  \ $$| $$  \__/| $$      | $$$$$$$$
| $$  \ $$| $$      | $$  | $$  | $$ /$$| $$_____/      | $$   | $$  | $$| $$      | $$      | $$_____/
| $$$$$$$/| $$      |  $$$$$$/  |  $$$$/|  $$$$$$$      | $$   |  $$$$$$/| $$      |  $$$$$$$|  $$$$$$$
|_______/ |__/       \______/    \___/   \_______/      |__/    \______/ |__/       \_______/ \_______/
"""

"""
- EXPLANATION:
    - Brute Force algorithm is a straightforward approach to solve a problem by trying all possible solutions and selecting the best one. 
      This method is usually used when the input size is relatively small and has a limited number of possibilities. 
      Brute Force algorithm is also known as Exhaustive Search algorithm, as it exhausts all possible solutions to find the optimal solution.
      
- TIME AND SPACE COMPLEXITY:
    - The time and space complexity of the Brute Force algorithm depends on the size of the input and the number of possible solutions.
    
    - For example, if we have an array of size n, and we want to find the maximum element in the array, 
      the time complexity of the Brute Force algorithm is O(n), 
      since we need to iterate through all n elements of the array to find the maximum element. 
      The space complexity is O(1), since we only need to store one variable to keep track of the maximum value.
    
    - However, for some problems, the number of possible solutions can be very large, and the Brute Force algorithm may take exponential time. 
      In such cases, the time complexity of the Brute Force algorithm can be expressed as O(2^n) or O(n!), where n is the size of the input.
      
- WHEN TO USE:
    - The input size is small
    - The problem space is not too large
    - There is no obvious efficient algorithm available
    - The problem requires exhaustive search
    - Brute Force algorithm can be used as a baseline for other more advanced algorithms.
"""

"""
- EXAMPLE:
    - Let's consider a simple example to illustrate the Brute Force algorithm. 
      Suppose we have an array of integers, and we want to find the maximum element in the array. 
"""

# takes array as an input
def bruteForce(array):
    # we assume that the first value is the max value from the array
    max_value = array[0]
    # go through all numbers in the array
    for i in range(len(array)):
        # if current value is greater than the last max value
        if array[i] > max_value:
            # update max value
            max_value = array[i]
    # return max value
    return max_value

# initialize new array
my_array = [20, 50, 2, 321, 8, 121, 256, 133, 32]
# run Brute Force algorithm 
max_value = bruteForce(my_array)
print(max_value) # 321

"""
- LEETCODE EXAMPLES:
    - Running Sum of 1d Array ==> https://leetcode.com/problems/running-sum-of-1d-array/
    - Count Number of Pairs With Absolute Difference K ==> https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
"""
