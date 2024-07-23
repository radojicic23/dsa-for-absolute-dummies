/*
  /$$$$$$   /$$                         /$$      
 /$$__  $$ | $$                        | $$      
| $$  \__//$$$$$$    /$$$$$$   /$$$$$$$| $$   /$$
|  $$$$$$|_  $$_/   |____  $$ /$$_____/| $$  /$$/
 \____  $$ | $$      /$$$$$$$| $$      | $$$$$$/ 
 /$$  \ $$ | $$ /$$ /$$__  $$| $$      | $$_  $$ 
|  $$$$$$/ |  $$$$/|  $$$$$$$|  $$$$$$$| $$ \  $$
 \______/   \___/   \_______/ \_______/|__/  \__/
*/

/*
- EXPLANATION:
    - A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. 
      This means that the last element added to the stack will be the first one to be removed. 
      Imagine a stack of plates in a restaurant, where new plates are added to the top of the stack and removed from the top of the stack as well.

- IMPLEMENTATION:
    - In programming, a stack can be implemented using an array or a linked list. We will use array now.

    - The stack class has the following member variables:
        - top: an integer variable that keeps track of the index of the top element in the stack.
        - arr: an integer array that stores the elements of the stack.


- THE STACK CLASS HAS THE FOLLOWING MEMBER FUNCTIONS:

    - "push(int x)" - a function that adds an element x to the top of the stack. It first checks if the stack is full 
      (i.e., the top index is at the maximum size of the array), and if it is, it prints an error message and returns. 
      Otherwise, it increments the top variable and assigns the element x to the next available index in the array.

    - "pop()" - a function that removes the element at the top of the stack and returns its value. 
       It first checks if the stack is empty (i.e., the top index is less than 0), and if it is, it prints an error message and returns -1 (a default value). 
       Otherwise, it returns the value of the element at the top index and decrements the top variable.

    - "isEmpty()" - a function that returns a boolean value indicating whether the stack is empty.

    - "peek()" -  a function that returns the value of the element at the top of the stack without removing it. 
       It first checks if the stack is empty, and if it is, it prints an error message and returns -1 (a default value). 
       Otherwise, it returns the value of the element at the top index.
*/

/*
- TIME AND SPACE COMPLEXITY:

    - TIME COMPLEXITY:

        - Push operation: O(1)
        - Pop operation: O(1)
        - Peek operation: O(1)
        - IsEmpty operation: O(1)

    - All of the stack operations have a constant time complexity of O(1), 
      which means they take the same amount of time to execute regardless of the size of the stack.

    - SPACE COMPLEXITY:

        - The space complexity of a stack implemented using an array is O(n), where n is the maximum size of the stack. 
          This is because we need to allocate an array of size n to store the elements of the stack.
        
        - In practice, the space complexity may be less than O(n) if the size of the stack is dynamic and can grow or shrink based on the number 
          of elements it contains. A stack implemented using a dynamic array or a linked list would have a space complexity of O(m), 
          where m is the number of elements in the stack.
*/


#include <iostream>
  
using namespace std;
  
#define MAX 1000
  

class Stack {
    // index of the top element in the stack
    int top;
  
public:
    // Maximum size of Stack
    int a[MAX]; 
    // constructor to initialize the stack
    Stack() { top = -1; }
    // initialize functions
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
  
// function adds element on the top of the stack
bool Stack::push(int x) {
    // check if stack is full
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    // if it's not full
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
  
// remove element on the top of the stack
int Stack::pop() {
    // check if the stack is empty
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    } else { // if the stack is not empty
        int x = a[top--];
        return x;
    }
}

// return last element of the stack
int Stack::peek() {
    // check if the stack is empty
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else { // if the stack is not empty
        int x = a[top];
        return x;
    }
}

// check if the stack is empty or not
bool Stack::isEmpty() {
    return (top < 0);
}


// driver program to test above functions
int main() {
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    
    // print top element of stack after popping
    cout << "Top element is : " << s.peek() << endl;
    
    // print all elements in stack
    cout <<"Elements present in stack : ";
    while(!s.isEmpty()) {
        // print top element in stack
        cout << s.peek() <<" ";
        // remove top element in stack
        s.pop();
    }
  
    return 0;
}
