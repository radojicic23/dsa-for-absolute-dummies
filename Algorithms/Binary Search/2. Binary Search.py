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