'''
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
'''

'''
- EXPLANATION:

    - The Binary Search Algorithm is an efficient way to search for a specific value within a sorted list of values. 
      It works by repeatedly dividing the list in half and checking whether the target value is in the lower or upper half. 
      This process is repeated until the target value is found, or until it is determined that the target value is not in the list.
      
- STEPS:

    - The search begins by comparing the target value to the middle element of the sorted array. 
    - If the target value is equal to the middle element, the search is complete. 
    - If the target value is less than the middle element, the search continues on the lower half of the array. 
    - If the target value is greater than the middle element, the search continues on the upper half of the array. 
    - This process continues until the target value is found or the search interval is empty.
'''

'''
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
'''

# initialize binary search 
# it takes array as an input and target value
def binary_search(arr, target):
    # initialize two pointers 
    # left pointer at the beginning of the list
    # right pointer at the end of the list
    left = 0
    right = len(arr) - 1
    # loop through as long as left pointer is less than or equal to right pointer
    while (left <= right):
        # find middle value
        mid = (left + right) // 2
        # if middle value is target return index (mid)
        if arr[mid] == target:
            return mid
        # if target is greater than middle value
        # we know that the target value must be in the upper half of the array
        # update left pointer 
        elif target > arr[mid]:
            left = mid + 1
        # otherwise
        else:
            right = mid - 1
    # if the target value is not found
    return -1

# initialize array
my_array = [1, 2, 4, 10, 20, 30, 100]
# initialize target value
target = 2
# run binary search algorithm 
result = binary_search(my_array, target)


if result == -1:
    print("Target not found!")
else:
    print("Target value found at index " +  str(result) + ".")
    

'''
- LEETCODE EXAMPLES:

    - Binary Search ==> https://leetcode.com/problems/binary-search/
    - Find Minimum in Rotated Sorted Array ==> https://leetcode.com/problems/binary-search/
    - Find Peak Element ==> https://leetcode.com/problems/find-peak-element/
    - Find Minimum in Rotated Sorted Array II ==> https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
'''