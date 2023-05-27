'''
 /$$$$$$                                           /$$     /$$                            /$$$$$$                        /$$    
|_  $$_/                                          | $$    |__/                           /$$__  $$                      | $$    
  | $$   /$$$$$$$   /$$$$$$$  /$$$$$$   /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$       | $$  \__/  /$$$$$$   /$$$$$$  /$$$$$$  
  | $$  | $$__  $$ /$$_____/ /$$__  $$ /$$__  $$|_  $$_/  | $$ /$$__  $$| $$__  $$      |  $$$$$$  /$$__  $$ /$$__  $$|_  $$_/  
  | $$  | $$  \ $$|  $$$$$$ | $$$$$$$$| $$  \__/  | $$    | $$| $$  \ $$| $$  \ $$       \____  $$| $$  \ $$| $$  \__/  | $$    
  | $$  | $$  | $$ \____  $$| $$_____/| $$        | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \ $$| $$  | $$| $$        | $$ /$$
 /$$$$$$| $$  | $$ /$$$$$$$/|  $$$$$$$| $$        |  $$$$/| $$|  $$$$$$/| $$  | $$      |  $$$$$$/|  $$$$$$/| $$        |  $$$$/
|______/|__/  |__/|_______/  \_______/|__/         \___/  |__/ \______/ |__/  |__/       \______/  \______/ |__/         \___/ 
'''

'''
- EXPLANATION:
  - Insertion sort algorithm is a simple sorting algorithm that builds the final sorted array one item at a time. Here's how the algorithm works:

    - Start with an unsorted array of elements.
    - Take the first element of the array and assume it is sorted.
    - For each subsequent element, compare it to the sorted elements to its left. 
    - If the element is smaller than the sorted elements to its left, move those elements one position to the right to make space for the new element.
    - Insert the new element into its correct position in the sorted portion of the array.
    - Repeat steps 3 and 4 for each subsequent element in the unsorted portion of the array until the entire array is sorted.
    
    
- TIME AND SPACE COMPLEXITY:

  - The time complexity of the insertion sort algorithm is O(n^2), where n is the number of elements in the array. 
    This is because, in the worst case scenario, the algorithm must make n comparisons for each of the n elements in the array.

  - The space complexity of the insertion sort algorithm is O(1), meaning it requires a constant amount of extra space. 
    This is because the algorithm sorts the input array in place, without requiring any additional data structures or temporary storage.
    
    
- WHEN TO USE INSERTION SORT:
  - Insertion sort is a good choice when the dataset is small. 
  - Insertion sort is a good choice when sorting small or partially sorted datasets, 
    and when the efficiency of the algorithm is not the primary concern.
'''


def insertion_sort(arr):
    # Loop from the second element
    for i in range(1, len(arr)):
        # This is the element we want to position in its correct place
        key = arr[i]
        # Initialize the variable that will be used to
        # find the correct position of the element referenced
        # by `key`
        j = i - 1
        # Move elements of arr[0..i-1], that are greater than key,
        # to one position ahead of their current position
        #  # Compare key with each element on the left, until an element smaller than it is found
        while j >= 0 and arr[j] > key:
            # Shift the value one position to the left
            # and reposition j to point to the next element
            # (from right to left)
            arr[j + 1] = arr[j]
            j -= 1
         # When you finish shifting the elements, you can position
        # `key` in its correct location
        arr[j + 1] = key
    return arr


# initialize input array
new_array = [12, 52, 121, 3, 64, 1, 8, 23, 44]
# run insertion sort
result = insertion_sort(new_array)

print(result)