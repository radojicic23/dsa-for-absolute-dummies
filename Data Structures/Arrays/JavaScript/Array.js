/*
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
*/

/*
- EXPLANATIONS:
    - An array is a data structure that stores a collection of elements of the same data type in a contiguous block of memory. 
      It provides a way to store and access a group of related values using a single variable name.
      
    - Each element in an array is identified by an index, which represents its position in the array. 
      The index starts at 0 for the first element, and increases by 1 for each subsequent element. 
      This means that if an array has n elements, the indices range from 0 to n-1.
      
    - Arrays can be used to store and manipulate different types of data, such as numbers, characters, strings, and objects. 
      They are commonly used in programming for a variety of tasks, such as sorting, searching, and processing large amounts of data.


- MOST COMMONLY USED BUILT-IN FUNCTIONS:

    - Array.push(): Adds one or more elements to the end of an array and returns the new length of the array.
    - Array.pop(): Removes the last element from an array and returns that element.
    - Array.shift(): Removes the first element from an array and returns that element.
    - Array.unshift(): Adds one or more elements to the beginning of an array and returns the new length of the array.
    - Array.slice(): Returns a shallow copy of a portion of an array into a new array.
    - Array.splice(): Changes the contents of an array by removing, replacing, or adding elements at a specified position.
    - Array.concat(): Returns a new array that combines two or more arrays.
    - Array.join(): Joins all elements of an array into a string.
    - Array.indexOf(): Returns the first index at which a given element can be found in an array, or -1 if it is not present.
    - Array.includes(): Determines whether an array includes a certain element and returns a boolean.


- TIME AND SPACE COMPLEXITY:
    Array.push():
        - Time Complexity: O(1)
        - Space Complexity: O(1)

    Array.pop():
        - Time Complexity: O(1)
        - Space Complexity: O(1)

    Array.shift():
        - Time Complexity: O(n)
        - Space Complexity: O(1)
    
    Array.unshift():
        - Time Complexity: O(n)
        - Space Complexity: O(n)
        
    Array.slice():
        - Time Complexity: O(k) (where k is the length of the extracted portion)
        - Space Complexity: O(k)
    
    Array.splice():
        - Time Complexity: O(n) (where n is the length of the array)
        - Space Complexity: O(n)
        
    Array.concat():
        - Time Complexity: O(m + n) (where m and n are the lengths of the two arrays being concatenated)
        - Space Complexity: O(m + n)
        
    Array.join():
        - Time Complexity: O(n) (where n is the length of the array)
        - Space Complexity: O(n)

    Array.indexOf():
        - Time Complexity: O(n) (where n is the length of the array)
        - Space Complexity: O(1)
        
    Array.includes():
        - Time Complexity: O(n) (where n is the length of the array)
        - Space Complexity: O(1)
    */