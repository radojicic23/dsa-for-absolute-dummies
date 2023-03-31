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

#include <iostream>

using namespace std;

// Node class represents each node in Linked List
class Node {
public:
    // stores data of node
    int data;
    // point to the next node
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Linked List class represents itself
class LinkedList {
private:
    // pointer to the first node in the list
    Node* head;

public:
    LinkedList() {
        this->head = NULL;
    }
    // insert new node at the end of Lined List
    void insert(int data) {
        // create new Node
        Node* newNode = new Node(data);
        // if the list is empty
        if (this->head == NULL) {
            // insert new Node at the beginning
            this->head = newNode;
        // otherwise insert new Node at the end of the list
        } else {
            Node* current = this->head;
            
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    // insert new node at some index position
    void insertAtIndex(int data, int position) {
        // create new Node
        Node* newNode = new Node(data);
        // if position is 0 or the list is empty
        if (this->head == NULL || position == 0) {
            // insert new node at the beginning
            newNode->next = this->head;
            this->head = newNode;
        // Otherwise, the method traverses the list to find the node 
        // at the position just before the insertion point.
        } else {
            Node* current = this->head;
            int i = 0;

            while (i < position - 1 && current->next != NULL) {
                current = current->next;
                i++;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }
    // remove node from Linked List
    void remove(int target) {
        // if head doesn't exist
        if (this->head == NULL) {
            return;
        }
        // if head happens to be target value
        if (this->head->data == target) {
            Node* temp = this->head;
            this->head = this->head->next;
            delete temp;
            return;
        }
        // set current pointer at head node
        Node* current = this->head;
        // shift current pointer through Linked List
        while (current->next != NULL) {
            // if next node from current is target value
            // delete it
            if (current->next->data == target) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            // shifting current pointer through LL
            current = current->next;
        }
    }
    // prints out the data of each node from Linked List
    void print() {
        Node* current = this->head;

        while (current != NULL) {
            cout << current->data << "-->";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    // initialize Linked List
    LinkedList list;

    // insert at the end of Linked List
    list.insert(1);
    list.insert(2);
    list.insert(3);

    // print whole Linked List
    list.print();

    // insert 4 at position 1
    list.insertAtIndex(4, 1);

    // print whole Linked List
    list.print();

    // insert 5 at position 0
    list.insertAtIndex(5, 0);

    list.print();

    // remove 5 and 4
    list.remove(5);
    list.remove(4);

    list.print();

    return 0;
}


/*
- LEETCODE EXERCISES:

    - Reverse Linked List: https://leetcode.com/problems/reverse-linked-list/
    - Sort List: https://leetcode.com/problems/sort-list/
    - Partition List: https://leetcode.com/problems/partition-list/
    - Delete Node in a Linked List: https://leetcode.com/problems/delete-node-in-a-linked-list/
    - Remove Nth Node From End of List: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
    - Palindrome Linked List: https://leetcode.com/problems/palindrome-linked-list/
    - https://leetcode.com/problems/odd-even-linked-list/
*/

