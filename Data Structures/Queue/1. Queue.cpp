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

    - The display() method returns (print) all data from queue.

    - The getFront() method returns the data of the front node without removing it. 

    - The getSize() method returns the number of nodes in the linked list. 

    - The isEmpty() method returns true if the queue is empty and false otherwise.
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

#include <iostream>
// we can implement a queue using the standard template library (later)
#include <queue> 

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;
    int size;
    
    Queue() {
        this->front = nullptr;
        this->rear = nullptr;
        this->size = 0;
    }
    
    
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (this->front == nullptr) {
            this->front = newNode;
            this->rear = newNode;
        }
        else {
            this->rear->next = newNode;
            this->rear = newNode;
        }
        this->size++;
    }
    
    
    int dequeue() {
        if (this->front == nullptr) {
            throw "Queue is empty";
        }
        int data = this->front->data;
        Node* temp = this->front;
        this->front = this->front->next;
        delete temp;
        this->size--;
        return data;
    }
    
    
    int getFront() {
        if (this->front == nullptr) {
            throw "Queue is empty";
        }
        return this->front->data;
    }
    
    void display() {
		Node* temp = front;
		if (front == NULL && rear == NULL) {
			cout << "Queue is empty." << endl;
			return;
		}
		while (temp != NULL) {
			cout << temp->data << "-->";
			temp = temp->next;
		}
		cout << endl;
	};
    
    int getSize() {
        return this->size;
    }
    
    
    bool isEmpty() {
        return (this->front == nullptr);
    }
};


int main() {
    cout << "Implemented Queue: " << endl;
    // create Queue
    Queue myQueue;
    // insert at the end of Queue
    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    // print data from Queue
    myQueue.display();
    // returns front element
    cout << "The front of the queue is: " << myQueue.getFront() << endl; // should print 1
    // delete front element
    myQueue.dequeue();
    // print data from queue
    myQueue.display();
    // check front element
    cout << "The front of the queue is: " << myQueue.getFront() << endl; // should print 2
    // check size of Queue
    cout << "The size of the queue is: " << myQueue.getSize() << endl; // should print 2
    // check if it's empty
    cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl; // should print No
    cout << endl;


    // We can also implement a queue using the standard template library (STL) container called std::queue. 
    cout << "Built in Queue: " << endl; 
    std::queue<int> stdQueue;

    // Add elements to the back of the queue
    stdQueue.push(1);
    stdQueue.push(2);
    stdQueue.push(3);
    stdQueue.push(4);

    // check the front element
    cout << "The front element of the queue: " << stdQueue.front() << endl;
    // check size of the queue
    cout << "The size of the queue: " << stdQueue.size() << endl;

    // remove element from the queue
    stdQueue.pop();
    // check the front of the queue again
    cout << "The front element of the queue: " << stdQueue.front() << endl;

    // Print all the elements in the queue (it's empty after that)
	while (!stdQueue.empty()) {
		cout << stdQueue.front() << "-->"; // Access the front element
		stdQueue.pop(); // pop element from Queue
	}
	
	cout << endl;
	
	// check if the Queue is empty
	if (stdQueue.empty()) {
		cout << "Queue is empty." << endl;
	} else {
		cout << "Queue is not empty" << endl;
	}

    return 0;
}
