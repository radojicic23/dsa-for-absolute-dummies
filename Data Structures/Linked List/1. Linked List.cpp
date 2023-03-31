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


class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        this->head = NULL;
    }

    void insert(int data) {
        Node* newNode = new Node(data);

        if (this->head == NULL) {
            this->head = newNode;
        } else {
            Node* current = this->head;
            
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void insertAtIndex(int data, int position) {
        Node* newNode = new Node(data);

        if (this->head == NULL || position == 0) {
            newNode->next = this->head;
            this->head = newNode;
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

    void remove(int target) {
        if (this->head == NULL) {
            return;
        }

        if (this->head->data == target) {
            Node* temp = this->head;
            this->head = this->head->next;
            delete temp;
            return;
        }

        Node* current = this->head;

        while (current->next != NULL) {
            if (current->next->data == target) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }
    }

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

    return 0;
}
