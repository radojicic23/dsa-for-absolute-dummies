/*
 /$$       /$$$$$$ /$$   /$$ /$$   /$$ /$$$$$$$$ /$$$$$$$        /$$       /$$$$$$  /$$$$$$  /$$$$$$$$
| $$      |_  $$_/| $$$ | $$| $$  /$$/| $$_____/| $$__  $$      | $$      |_  $$_/ /$$__  $$|__  $$__/
| $$        | $$  | $$$$| $$| $$ /$$/ | $$      | $$  \ $$      | $$        | $$  | $$  \__/   | $$   
| $$        | $$  | $$ $$ $$| $$$$$/  | $$$$$   | $$  | $$      | $$        | $$  |  $$$$$$    | $$   
| $$        | $$  | $$  $$$$| $$  $$  | $$__/   | $$  | $$      | $$        | $$   \____  $$   | $$   
| $$        | $$  | $$\  $$$| $$\  $$ | $$      | $$  | $$      | $$        | $$   /$$  \ $$   | $$   
| $$$$$$$$ /$$$$$$| $$ \  $$| $$ \  $$| $$$$$$$$| $$$$$$$/      | $$$$$$$$ /$$$$$$|  $$$$$$/   | $$   
|________/|______/|__/  \__/|__/  \__/|________/|_______/       |________/|______/ \______/    |__/   
                                                                                                     
*/

/*
 - A linked list is a data structure consisting of a sequence of nodes, where each node contains data and a pointer to the next node in the sequence. 
  It is useful for storing and manipulating collections of data that need to be dynamically resized or modified.

- RESPRESENTATION OF LINKED LIST:
    - Each node in a linked list contains:
        - A data item
        - Address of the next node

- BASIC LINKED LIST FUNCTIONS:
    - Traversal (Have access to each element in Linked List)
    - Insertion (insert to the beginning or middle or at the end)
    - Deletion (Delete the first node, or the last node, or some other position.)
    - Search (Find specific node)

- TIME AND SPACE COMPLEXITY:
    - Search - O(n) - We have to iterate from head till the element we want.
    - Insert (beginning) - O(1) - Only change the head pointer.
    - Insert (end) - O(n) - Move from the head to the last item in Linked List then change the pointers to new value.
    - Delete (beginning) - O(1) - Only change the head pointer.
    - Delete (end) - O(n) - Move from the head to the node just before the item you want to delete.
*/