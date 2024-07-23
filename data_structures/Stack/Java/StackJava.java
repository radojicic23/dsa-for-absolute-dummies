package data_structures.Stack.Java;
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
 * 
 ### Stack in Java
 
A `Stack` is a data structure that follows the Last In First Out (LIFO) principle, where elements are added to and removed from the top of the stack.

Java provides a `Stack` class as part of the `java.util` package, but it is recommended to use `Deque` (a double-ended queue) for stack operations due to its improved performance and flexibility.

 # Using `Stack` Class:

1.  Basic Operations :
    - `push(E item)`: Pushes an item onto the top of the stack.
    - `pop()`: Removes and returns the item at the top of the stack.
    - `peek()`: Returns the item at the top of the stack without removing it.
    - `isEmpty()`: Checks if the stack is empty.
    - `search(Object o)`: Returns the 1-based position of the item on the stack.
    
     # Example Using `Stack` Class:

```java
import java.util.Stack;

public class StackExample {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();

        // Push elements onto the stack
        stack.push(1);
        stack.push(2);
        stack.push(3);

        // Display the stack
        System.out.println("Stack: " + stack);

        // Peek at the top element
        int topElement = stack.peek();
        System.out.println("Top element: " + topElement);

        // Pop elements from the stack
        int removedElement = stack.pop();
        System.out.println("Removed element: " + removedElement);

        // Display the stack
        System.out.println("Stack after pop: " + stack);

        // Check if the stack is empty
        System.out.println("Is stack empty? " + stack.isEmpty());

        // Search for an element
        int position = stack.search(1);
        System.out.println("Position of element 1: " + position);
    }
    }
```

 # Using `Deque` for Stack Operations:

1.  Basic Operations :
    - `addFirst(E e)`: Pushes an element onto the stack.
    - `removeFirst()`: Pops an element from the stack.
    - `peekFirst()`: Peeks at the top element of the stack.
    - `isEmpty()`: Checks if the stack is empty.
    
 # Example Using `Deque`:

*/
import java.util.ArrayDeque;
import java.util.Deque;

//DequeStackExample 
    public class StackJava {
    public static void main(String[] args) {
        Deque<Integer> stack = new ArrayDeque<>();

        // Push elements onto the stack
        stack.addFirst(1);
        stack.addFirst(2);
        stack.addFirst(3);

        // Display the stack
        System.out.println("Stack: " + stack);

        // Peek at the top element
        int topElement = stack.peekFirst();
        System.out.println("Top element: " + topElement);

        // Pop elements from the stack
        int removedElement = stack.removeFirst();
        System.out.println("Removed element: " + removedElement);

        // Display the stack
        System.out.println("Stack after pop: " + stack);

        // Check if the stack is empty
        System.out.println("Is stack empty? " + stack.isEmpty());
        CustomStack cs = new CustomStack(5);
        cs.main2(args);
    }
}

// # Implementing a Custom Stack

 class CustomStack {
    private int maxSize;
    private int[] stackArray;
    private int top;

    public CustomStack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;
    }

    // Push element onto the stack
    public void push(int value) {
        if (top == maxSize - 1) {
            throw new StackOverflowError("Stack is full");
        }
        stackArray[++top] = value;
    }

    // Pop element from the stack
    public int pop() {
        if (isEmpty()) {
            throw new IllegalStateException("Stack is empty");
        }
        return stackArray[top--];
    }

    // Peek at the top element
    public int peek() {
        if (isEmpty()) {
            throw new IllegalStateException("Stack is empty");
        }
        return stackArray[top];
    }

    // Check if the stack is empty
    public boolean isEmpty() {
        return (top == -1);
    }

    // Check if the stack is full
    public boolean isFull() {
        return (top == maxSize - 1);
    }

    // Display the stack
    public void display() {
        for (int i = 0; i <= top; i++) {
            System.out.print(stackArray[i] + " ");
        }
        System.out.println();
    }

    public static void main2(String[] args) {
        CustomStack stack = new CustomStack(5);

        // Push elements onto the stack
        stack.push(10);
        stack.push(20);
        stack.push(30);

        // Display the stack
        System.out.println("Stack:");
        stack.display();

        // Peek at the top element
        System.out.println("Top element: " + stack.peek());

        // Pop elements from the stack
        System.out.println("Removed element: " + stack.pop());

        // Display the stack
        System.out.println("Stack after pop:");
        stack.display();

        // Check if the stack is empty
        System.out.println("Is stack empty? " + stack.isEmpty());

        // Check if the stack is full
        System.out.println("Is stack full? " + stack.isFull());
    }
}

/*
 * 
 ### Explanation:
 
 1.  Using `Stack` Class :
    - Demonstrates the basic stack operations using Java's built-in `Stack` class.

2.  Using `Deque` :
    - Demonstrates stack operations using `Deque` for better performance and flexibility.

3.  Custom Stack Implementation :
    - Demonstrates how to create a custom stack using an array.
    - Includes methods to push, pop, peek, check if the stack is empty or full, and display the stack.
    - Includes a `main` method to demonstrate usage.
 */