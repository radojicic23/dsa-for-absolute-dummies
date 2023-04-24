'''
 /$$       /$$$$$$ /$$   /$$ /$$$$$$$$  /$$$$$$  /$$$$$$$         /$$$$$$  /$$$$$$$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$   /$$
| $$      |_  $$_/| $$$ | $$| $$_____/ /$$__  $$| $$__  $$       /$$__  $$| $$_____/ /$$__  $$| $$__  $$ /$$__  $$| $$  | $$
| $$        | $$  | $$$$| $$| $$      | $$  \ $$| $$  \ $$      | $$  \__/| $$      | $$  \ $$| $$  \ $$| $$  \__/| $$  | $$
| $$        | $$  | $$ $$ $$| $$$$$   | $$$$$$$$| $$$$$$$/      |  $$$$$$ | $$$$$   | $$$$$$$$| $$$$$$$/| $$      | $$$$$$$$
| $$        | $$  | $$  $$$$| $$__/   | $$__  $$| $$__  $$       \____  $$| $$__/   | $$__  $$| $$__  $$| $$      | $$__  $$
| $$        | $$  | $$\  $$$| $$      | $$  | $$| $$  \ $$       /$$  \ $$| $$      | $$  | $$| $$  \ $$| $$    $$| $$  | $$
| $$$$$$$$ /$$$$$$| $$ \  $$| $$$$$$$$| $$  | $$| $$  | $$      |  $$$$$$/| $$$$$$$$| $$  | $$| $$  | $$|  $$$$$$/| $$  | $$
|________/|______/|__/  \__/|________/|__/  |__/|__/  |__/       \______/ |________/|__/  |__/|__/  |__/ \______/ |__/  |__/
'''

'''
- EXPLANATION:
    - Linear search, also known as sequential search, is a simple algorithm for finding a value in a list or array. 
      The algorithm checks each element of the list in turn, starting from the first, 
      until it finds the target value or reaches the end of the list.
      
- TIME AND SPACE COMPLEXITY:

    - Time Complexity:
        - In the worst case, the linear search algorithm will have to check every element in the array, 
          giving it a worst-case time complexity of O(n), where n is the size of the array. 
          In the best case, the target element will be found at the beginning of the array, resulting in a time complexity of O(1). 
          On average, the linear search algorithm has a time complexity of O(n/2) or O(n).

    - Space Complexity:
        - The algorithm only requires a constant amount of additional memory to store the loop index variable and the target value, 
          so the space complexity of the Linear Search algorithm is O(1).
'''