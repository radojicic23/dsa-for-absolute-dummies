/*
  /$$$$$$  /$$   /$$ /$$$$$$$$ /$$   /$$ /$$$$$$$$
 /$$__  $$| $$  | $$| $$_____/| $$  | $$| $$_____/
| $$  \ $$| $$  | $$| $$      | $$  | $$| $$      
| $$  | $$| $$  | $$| $$$$$   | $$  | $$| $$$$$   
| $$  | $$| $$  | $$| $$__/   | $$  | $$| $$__/   
| $$/$$ $$| $$  | $$| $$      | $$  | $$| $$      
|  $$$$$$/|  $$$$$$/| $$$$$$$$|  $$$$$$/| $$$$$$$$
 \____ $$$ \______/ |________/ \______/ |________/
      \__/ 
*/

/*
- A queue is a data structure in C++ that is similar to a real-world queue, such as a line at a store or a bus stop. 
  The queue data structure is a collection of elements, where the elements are added to the back and removed from the front. 
  The first element added to the queue will be the first one to be removed, 
  which is why it is also called a First-In-First-Out (FIFO) data structure.


- IMPLEMENTATION:
    - In this implementation, the Queue class is defined using a linked list. 
      The Node class represents a node in the linked list, with an integer data field and a pointer to the next node. 
      The Queue class has three fields - front (a pointer to the first node in the linked list), 
      rear (a pointer to the last node in the linked list), and size (the number of nodes in the linked list).

- FUNCTIONS:
    - The enqueue() method adds an element to the back of the queue by creating a new node and updating the rear pointer to point to the new node. 
      If the queue is empty, both the front and rear pointers are updated to point to the new node.

    - The dequeue() method removes the front element of the queue by updating the front pointer to point to the next node 
      and deleting the old front node. If the queue becomes empty after the deletion, both the front and rear pointers are set to nullptr.

    - The getFront() method returns the data of the front node without removing it. 
      The getSize() method returns the number of nodes in the linked list. 
      The isEmpty() method returns true if the queue is empty and false otherwise.
*/













/*
- TIME AND SPACE COMPLEXITY:
    - Time and Space Complexity of built-in functions (push(), pop(), front(), empty() and size()) is O(1).
    
    - The Time Complexity of the enqueue(), dequeue(), getFront(), getSize(), and isEmpty() methods is also O(1).
    - The Space complexity of this implementation is O(n), where n is the number of elements in the queue, 
      because it uses a linked list to store the nodes, and each node takes up some space in memory. 
      The size of the queue is stored in a separate integer variable, which also takes up some space. 
      Overall, the amount of memory used by this implementation increases linearly with the number of elements in the queue.
*/