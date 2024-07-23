package data_structures.Queue.Java;
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

}
### Queue in Java

A `Queue` is a data structure that follows the First In First Out (FIFO) principle, where elements are added to the rear (end) and removed from the front (beginning).

Java provides the `Queue` interface as part of the `java.util` package. The most commonly used classes that implement the `Queue` interface are `LinkedList` and `PriorityQueue`.

 # Common Operations:

1.  Add Elements :
- `add(E e)` or `offer(E e)`: Inserts the specified element into the queue. The `add` method throws an exception if the element cannot be added, while `offer` returns `false`.

2.  Remove Elements :
    - `remove()` or `poll()`: Retrieves and removes the head of the queue. The `remove` method throws an exception if the queue is empty, while `poll` returns `null`.

    3.  Examine Elements :
    - `element()` or `peek()`: Retrieves, but does not remove, the head of the queue. The `element` method throws an exception if the queue is empty, while `peek` returns `null`.

*/
import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

public class QueueJava {
    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();

        // Add elements to the queue
        queue.add(1);
        queue.add(2);
        queue.add(3);

        // Display the queue
        System.out.println("Queue: " + queue);

        // Remove elements from the queue
        int removedElement = queue.remove(); // Removes the head (1)
        System.out.println("Removed Element: " + removedElement);

        // Display the queue
        System.out.println("Queue after removal: " + queue);

        // Peek at the head of the queue
        int head = queue.peek(); // Retrieves but does not remove the head (2)
        System.out.println("Head of the queue: " + head);

        // Display the queue size
        System.out.println("Queue size: " + queue.size());
    }
}


// Example Using `PriorityQueue`

class PriorityQueueExample {
    public static void main(String[] args) {
        Queue<Integer> priorityQueue = new PriorityQueue<>();

        // Add elements to the priority queue
        priorityQueue.add(5);
        priorityQueue.add(1);
        priorityQueue.add(3);

        // Display the priority queue
        System.out.println("PriorityQueue: " + priorityQueue);

        // Remove elements from the priority queue
        int removedElement = priorityQueue.poll(); // Removes the head (1)
        System.out.println("Removed Element: " + removedElement);

        // Display the priority queue
        System.out.println("PriorityQueue after removal: " + priorityQueue);

        // Peek at the head of the priority queue
        int head = priorityQueue.peek(); // Retrieves but does not remove the head (3)
        System.out.println("Head of the priority queue: " + head);

        // Display the priority queue size
        System.out.println("PriorityQueue size: " + priorityQueue.size());

        CustomQueue cq = new CustomQueue();
        cq.main2(args);
    }
}

// Implementing a Custom Queue

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class CustomQueue {
    private Node front, rear;
    private int size;

    public CustomQueue() {
        this.front = this.rear = null;
        this.size = 0;
    }

    // Add element to the rear
    public void enqueue(int data) {
        Node newNode = new Node(data);
        if (rear == null) {
            front = rear = newNode;
        } else {
            rear.next = newNode;
            rear = newNode;
        }
        size++;
    }

    // Remove element from the front
    public int dequeue() {
        if (front == null) {
            throw new IllegalStateException("Queue is empty");
        }
        int data = front.data;
        front = front.next;
        if (front == null) {
            rear = null;
        }
        size--;
        return data;
    }

    // Peek at the front element
    public int peek() {
        if (front == null) {
            throw new IllegalStateException("Queue is empty");
        }
        return front.data;
    }

    // Get the size of the queue
    public int size() {
        return size;
    }

    // Check if the queue is empty
    public boolean isEmpty() {
        return front == null;
    }

    // Display the queue
    public void display() {
        Node current = front;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public static void main2(String[] args) {
        CustomQueue queue = new CustomQueue();

        // Add elements to the queue
        queue.enqueue(10);
        queue.enqueue(20);
        queue.enqueue(30);

        // Display the queue
        System.out.println("Queue:");
        queue.display();

        // Remove an element from the queue
        int removedElement = queue.dequeue();
        System.out.println("Removed Element: " + removedElement);

        // Display the queue
        System.out.println("Queue after removal:");
        queue.display();

        // Peek at the front element
        int front = queue.peek();
        System.out.println("Front of the queue: " + front);

        // Display the queue size
        System.out.println("Queue size: " + queue.size());
    }
}

/*
 * 
 ### Explanation:
 
1.  Using `LinkedList` and `PriorityQueue` :
    - Demonstrates the basic operations using Java's built-in `LinkedList` and `PriorityQueue` classes that implement the `Queue` interface.

2.  Custom Queue Implementation :
    - Demonstrates how to create a custom queue using a singly linked list.
    - Includes methods to add (`enqueue`), remove (`dequeue`), peek, check size, and check if the queue is empty.
    - Includes a `main` method to demonstrate usage.
 */