package data_structures.HashSet.Java;

/*
 /$$   /$$                     /$$        /$$$$$$              /$$    
| $$  | $$                    | $$       /$$__  $$            | $$    
| $$  | $$  /$$$$$$   /$$$$$$$| $$$$$$$ | $$  \__/  /$$$$$$  /$$$$$$  
| $$$$$$$$ |____  $$ /$$_____/| $$__  $$|  $$$$$$  /$$__  $$|_  $$_/  
| $$__  $$  /$$$$$$$|  $$$$$$ | $$  \ $$ \____  $$| $$$$$$$$  | $$    
| $$  | $$ /$$__  $$ \____  $$| $$  | $$ /$$  \ $$| $$_____/  | $$ /$$
| $$  | $$|  $$$$$$$ /$$$$$$$/| $$  | $$|  $$$$$$/|  $$$$$$$  |  $$$$/
|__/  |__/ \_______/|_______/ |__/  |__/ \______/  \_______/   \___/ 
*/

/*
### HashSet in Java

 # Definition:
`HashSet` is part of the `java.util` package and implements the `Set<E>` interface. It is used to store a collection of unique elements. `HashSet` is backed by a hash table (actually a `HashMap` instance) and does not guarantee any specific order of the elements.

 # Key Characteristics:

1.  Unique Elements :
    - `HashSet` only stores unique elements. If you try to add a duplicate element, the `HashSet` will ignore it.

2.  Null Values :
    - `HashSet` allows null values.

3.  Non-Synchronized :
    - `HashSet` is not synchronized, meaning it is not thread-safe. If multiple threads access a `HashSet` concurrently, and at least one of the threads modifies the set, it must be synchronized externally.

4.  Ordering :
    - `HashSet` does not guarantee any specific order of the elements. The order of elements can change over time.

 # Common Operations:

1.  Creating a HashSet :
    ```java
    HashSet<String> set = new HashSet<>();
    ```

2.  Adding Elements :
    - Use `add(element)` to add elements to the set.
    ```java
    set.add("One");
    set.add("Two");
    set.add("Three");
    ```
    
3.  Removing Elements :
    - Use `remove(element)` to remove a specific element from the set.
    ```java
    set.remove("Two");
    ```

4.  Checking if Element Exists :
    - Use `contains(element)` to check if an element exists in the set.
    ```java
    boolean exists = set.contains("One"); // Returns true
    ```

5.  Iterating through a HashSet :
    - Use an enhanced for loop or an iterator to iterate through the elements of the set.
    ```java
    for (String element : set) {
        System.out.println(element);
    }

    Iterator<String> iterator = set.iterator();
    while (iterator.hasNext()) {
        System.out.println(iterator.next());
    }
    ```

6.  Getting the Size :
    - Use `size()` to get the number of elements in the set.
    ```java
    int size = set.size(); // Returns the number of elements in the set
    ```

7.  Clearing the HashSet :
    - Use `clear()` to remove all elements from the set.
    ```java
    set.clear(); // Removes all elements from the set
    ```

*/
//java
import java.util.HashSet;
import java.util.Iterator;

public class HashSetJava {
    public static void main(String[] args) {
        // Creating a HashSet
        HashSet<String> set = new HashSet<>();

        // Adding elements to the HashSet
        set.add("One");
        set.add("Two");
        set.add("Three");

        // Adding a duplicate element
        set.add("One"); // This will not add a new element

        // Checking if an element exists
        System.out.println("Contains 'One': " + set.contains("One")); // Outputs "true"

        // Removing an element
        set.remove("Two");

        // Iterating through the HashSet using an enhanced for loop
        System.out.println("Elements in the set:");
        for (String element : set) {
            System.out.println(element);
        }

        // Iterating through the HashSet using an iterator
        System.out.println("Elements in the set (using iterator):");
        Iterator<String> iterator = set.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

        // Getting the size of the HashSet
        System.out.println("Size of the set: " + set.size());

        // Clearing the HashSet
        set.clear();
        System.out.println("Size of the set after clear: " + set.size());
    }
}