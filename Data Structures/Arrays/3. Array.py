'''
  /$$$$$$                                                  
 /$$__  $$                                                 
| $$  \ $$  /$$$$$$   /$$$$$$  /$$$$$$  /$$   /$$  /$$$$$$$
| $$$$$$$$ /$$__  $$ /$$__  $$|____  $$| $$  | $$ /$$_____/
| $$__  $$| $$  \__/| $$  \__/ /$$$$$$$| $$  | $$|  $$$$$$ 
| $$  | $$| $$      | $$      /$$__  $$| $$  | $$ \____  $$
| $$  | $$| $$      | $$     |  $$$$$$$|  $$$$$$$ /$$$$$$$/
|__/  |__/|__/      |__/      \_______/ \____  $$|_______/ 
                                        /$$  | $$          
                                       |  $$$$$$/          
                                        \______/ 
'''

'''
- EXPLANATIONS:
    - An array is a data structure that stores a collection of elements of the same data type in a contiguous block of memory. 
      It provides a way to store and access a group of related values using a single variable name.
      
    - Each element in an array is identified by an index, which represents its position in the array. 
      The index starts at 0 for the first element, and increases by 1 for each subsequent element. 
      This means that if an array has n elements, the indices range from 0 to n-1.
      
    - Arrays can be used to store and manipulate different types of data, such as numbers, characters, strings, and objects. 
      They are commonly used in programming for a variety of tasks, such as sorting, searching, and processing large amounts of data.
      
- MOST COMMONLY USED BUILT-IN FUNCTIONS:

    - array.append(x) - This function is used to add an element x to the end of the array.
    - array.extend(iterable) - This function is used to add the elements of an iterable (such as a list or tuple) to the end of the array.
    - array.insert(i, x) - This function is used to insert an element x at a specific index i in the array.
    - array.remove(x) - This function is used to remove the first occurrence of element x from the array.
    - array.pop(i) - This function is used to remove and return the element at a specific index i in the array. If no index is specified, the last element of the array is removed and returned.
    - array.index(x) - This function is used to find the first occurrence of element x in the array and return its index.
    - array.count(x) - This function is used to count the number of occurrences of element x in the array.
    - array.sort() - This function is used to sort the elements of the array in ascending order.
    - array.reverse() - This function is used to reverse the order of the elements in the array.
    - len(array) - This function is used to return the number of elements in the array.
    
- TIME AND SPACE COMPLEXITY:

    - array.append(x) - Time complexity: O(1), Space complexity: O(1)
    - array.extend(iterable) - Time complexity: O(k), where k is the length of the iterable being added, Space complexity: O(k)
    - array.insert(i, x) - Time complexity: O(n), where n is the number of elements in the array, Space complexity: O(1)
    - array.remove(x) - Time complexity: O(n), where n is the number of elements in the array, Space complexity: O(1)
    - array.pop(i) - Time complexity: O(n), where n is the number of elements in the array, Space complexity: O(1)
    - array.index(x) - Time complexity: O(n), where n is the number of elements in the array, Space complexity: O(1)
    - array.count(x) - Time complexity: O(n), where n is the number of elements in the array, Space complexity: O(1)
    - array.sort() - Time complexity: O(n log n), where n is the number of elements in the array, Space complexity: O(1)
    - array.reverse() - Time complexity: O(n), where n is the number of elements in the array, Space complexity: O(1)
    - len(array) - Time complexity: O(1), Space complexity: O(1)
'''

# One Dimensional Array
array1D = [1, 2, 3, 4]

# Two Dimensional Array
array2D = [[1, 2, 3], [4, 5, 6]]

# Two Dimensional (n x n) Array
array2DNxN = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

# initialize new array
newArray = []

# add element to array
newArray.append(1) # [1]
newArray.append(2) # [1, 2]
newArray.append(3) # [1, 2, 3]

# insert element at a specific index
newArray.insert(1, 10) # [1, 10, 2, 3]

# remove specific element
newArray.remove(10) # [1, 2, 3]

# remove element from top of the array
newArray.pop() # [1, 2]

# return position of element
newArray.index(1) # 0

# initialize new array
myArray = [3, 3, 2, 1, 4, 5, 5, 0]

# count the number of occurrences
myArray.count(3) # 2

# sort array elements in ascending order
myArray.sort() # [0, 1, 2, 3, 3, 4, 5, 5]

# reverse the order of the elements in the array
myArray.reverse() # [5, 5, 4, 3, 3, 2, 1, 0]

# number of elements in the array
print(len(myArray)) # 8
