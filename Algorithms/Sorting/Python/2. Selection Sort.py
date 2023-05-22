'''
  /$$$$$$            /$$                       /$$     /$$                            /$$$$$$                        /$$    
 /$$__  $$          | $$                      | $$    |__/                           /$$__  $$                      | $$    
| $$  \__/  /$$$$$$ | $$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       | $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$  
|  $$$$$$  /$$__  $$| $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$      |  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  
 \____  $$| $$$$$$$$| $$| $$$$$$$$| $$        | $$    | $$| $$  \ $$| $$  \ $$       \____  $$| $$  \ $$| $$  \__/  | $$    
 /$$  \ $$| $$_____/| $$| $$_____/| $$        | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \ $$| $$  | $$| $$        | $$ /$$
|  $$$$$$/|  $$$$$$$| $$|  $$$$$$$|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$      |  $$$$$$/|  $$$$$$/| $$        |  $$$$/
 \______/  \_______/|__/ \_______/ \_______/   \___/  |__/ \______/ |__/  |__/       \______/  \______/ |__/         \___/  
'''

'''
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
      
      
- WHEN TO USE SELECTION SORT:

    - In general, selection sort is a good choice when the dataset is small or nearly sorted, when memory space is limited, 
      or when minimizing the number of swaps is important.
'''

# initialize selection sort function 
# it takes array as an input
def selection_sort(array):
    for i in range(len(array)):
        # initialize minimum index to 'i'
        # This is because we assume that 
        # the first unsorted element is the minimum element
        min_index = i
        # loops through all the remaining unsorted elements from 'i + 1'
        for j in range(i + 1, len(array)):
            # compare current element with the assumed minimum element
            # if it's smaller, we found new minimum element
            # update midIndex
            if array[j] < array[min_index]:
                min_index = j
        # inner loop is finished
        # minimum element is at index 'minIndex'
        # swap with the first element in array
        # now the minimum element is at correct position (at beginning)
        array[i], array[min_index] = array[min_index], array[i]
    # return sorted array 
    return array


# initialize input array
new_array = [20, 7, 3, 43, 22, 16, 1, 24]
# run selection sort
sorted_array = selection_sort(new_array)

print(sorted_array)



'''
- More Examples on LeetCode:

  - Sort Colors: https://leetcode.com/problems/sort-colors/
'''
