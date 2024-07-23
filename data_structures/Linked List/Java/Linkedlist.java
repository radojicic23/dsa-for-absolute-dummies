package data_structures.Linked List.Java;

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
### Explanation:

1.  Node Class :
    - Represents a single node in the linked list with `int` data and a reference to the next node.

2.  LinkedList Class :
    - Manages the linked list operations:
      - `insertAtBeginning(int data)`: Inserts a new node with the specified data at the beginning of the list.
      - `insertAtEnd(int data)`: Inserts a new node with the specified data at the end of the list.
      - `deleteByKey(int key)`: Deletes the first occurrence of the specified key in the list.
      - `display()`: Displays all the elements in the list.
      - `size()`: Returns the number of nodes in the list.
      - `search(int key)`: Searches for the specified key in the list and returns `true` if found, otherwise `false`.

3.  Main Class :
    - Demonstrates the use of the `LinkedList` class by performing various operations like inserting elements, displaying the list, deleting an element, checking the size, and searching for an element.   */

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}
class LinkedList {
    private Node head;

    public LinkedList() {
        this.head = null;
    }

    // Insert at the beginning
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }

    // Insert at the end
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = newNode;
    }

    // Delete by key
    public void deleteByKey(int key) {
        Node current = head, prev = null;

        // If head node itself holds the key
        if (current != null && current.data == key) {
            head = current.next;
            return;
        }

        // Search for the key to be deleted
        while (current != null && current.data != key) {
            prev = current;
            current = current.next;
        }

        // If key was not present in linked list
        if (current == null) {
            return;
        }

        // Unlink the node from linked list
        prev.next = current.next;
    }

    // Display the list
    public void display() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    // Get the size of the list
    public int size() {
        int count = 0;
        Node current = head;
        while (current != null) {
            count++;
            current = current.next;
        }
        return count;
    }

    // Search for an element
    public boolean search(int key) {
        Node current = head;
        while (current != null) {
            if (current.data == key) {
                return true;
            }
            current = current.next;
        }
        return false;
    }
}

public class Linkedlist {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        // Insert elements
        list.insertAtBeginning(1);
        list.insertAtEnd(2);
        list.insertAtEnd(3);
        list.insertAtEnd(4);

        // Display the list
        System.out.println("Linked List:");
        list.display();

        // Delete an element
        list.deleteByKey(3);

        // Display the list
        System.out.println("Linked List after deletion:");
        list.display();

        // Get the size of the list
        System.out.println("Size of the linked list: " + list.size());

        // Search for an element
        int searchKey = 2;
        if (list.search(searchKey)) {
            System.out.println("Element " + searchKey + " is present in the list.");
        } else {
            System.out.println("Element " + searchKey + " is not present in the list.");
        }
    }
}