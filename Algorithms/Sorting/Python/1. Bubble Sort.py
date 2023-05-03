'''
 /$$$$$$$            /$$       /$$       /$$                  /$$$$$$                        /$$    
| $$__  $$          | $$      | $$      | $$                 /$$__  $$                      | $$    
| $$  \ $$ /$$   /$$| $$$$$$$ | $$$$$$$ | $$  /$$$$$$       | $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$  
| $$$$$$$ | $$  | $$| $$__  $$| $$__  $$| $$ /$$__  $$      |  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  
| $$__  $$| $$  | $$| $$  \ $$| $$  \ $$| $$| $$$$$$$$       \____  $$| $$  \ $$| $$  \__/  | $$    
| $$  \ $$| $$  | $$| $$  | $$| $$  | $$| $$| $$_____/       /$$  \ $$| $$  | $$| $$        | $$ /$$
| $$$$$$$/|  $$$$$$/| $$$$$$$/| $$$$$$$/| $$|  $$$$$$$      |  $$$$$$/|  $$$$$$/| $$        |  $$$$/
|_______/  \______/ |_______/ |_______/ |__/ \_______/       \______/  \______/ |__/         \___/
'''

'''
- EXPLANATION:
    - Bubble Sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order. 
      It gets its name because smaller elements "bubble" to the top of the array with each iteration.
      
      
- TIME AND SPACE COMPLEXITY: 
    - Bubble Sort has a worst-case and average-case time complexity of O(n^2), where n is the number of elements in the array. 

    - Best-case time complexity: In the best case, where the input array is already sorted, Bubble Sort has a time complexity of O(n), 
      because the algorithm only needs to make one pass through the array to verify that it is sorted and no swaps are needed.

    - Space complexity: Bubble Sort has a space complexity of O(1), 
      meaning that it sorts the array in place and does not require any additional space proportional to the size of the input. 
      This is because the algorithm only needs to store a few temporary variables to perform the swaps, 
      and does not create any new data structures or arrays.
      

- WHEN TO USE BUBBLE SORT:
    - Bubble sort is generally used for educational purposes or for sorting small datasets where efficiency is not a primary concern. 
      It is also used as a simple example to demonstrate sorting algorithms and their complexity.

    - In general, it is not recommended to use bubble sort for practical applications because it's not efficient.
'''

# initialize bubble sort algorithm function 
# it takes array as an input
def bubble_sort(array):
    # get size of input array
    n = len(array)
    # go through every element in the array
    for i in range(n):
        # loop through to compare each element in the array
        for j in range(0, n - i - 1):
            # compare two adjacent elements
            # if you want to sort in descending order change > to <
            if (array[j] > array[j + 1]):
                # swap them 
                array[j], array[j + 1] = array[j + 1], array[j]
    # return now sorted array
    return array


# initialize new array
new_array = [201, 52, 23, 3, 64, 1, 8, 121]
# run bubble sort
sorted_array = bubble_sort(new_array)

print(sorted_array) # [1, 3, 8, 23, 52, 64, 121, 201]
    