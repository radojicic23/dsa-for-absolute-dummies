package data_structures.HashMap.Java;

/*
 /$$   /$$                     /$$       /$$      /$$                    
| $$  | $$                    | $$      | $$$    /$$$                    
| $$  | $$  /$$$$$$   /$$$$$$$| $$$$$$$ | $$$$  /$$$$  /$$$$$$   /$$$$$$ 
| $$$$$$$$ |____  $$ /$$_____/| $$__  $$| $$ $$/$$ $$ |____  $$ /$$__  $$
| $$__  $$  /$$$$$$$|  $$$$$$ | $$  \ $$| $$  $$$| $$  /$$$$$$$| $$  \ $$
| $$  | $$ /$$__  $$ \____  $$| $$  | $$| $$\  $ | $$ /$$__  $$| $$  | $$
| $$  | $$|  $$$$$$$ /$$$$$$$/| $$  | $$| $$ \/  | $$|  $$$$$$$| $$$$$$$/
|__/  |__/ \_______/|_______/ |__/  |__/|__/     |__/ \_______/| $$____/ 
                                                               | $$      
                                                               | $$      
                                                               |__/      
*/

/*
### HashMap in Java

 # Definition:
`HashMap` is part of the `java.util` package and implements the `Map<K, V>` interface. It is used to store key-value pairs, where each key is unique. The `HashMap` class is based on a hash table, providing efficient operations for inserting, deleting, and retrieving elements.

 # Key Characteristics:

1.  Unique Keys :
    - Each key in a `HashMap` must be unique. If you try to insert a duplicate key, the new value will replace the old value.

    2.  Null Values :
    - `HashMap` allows one null key and multiple null values.

3.  Non-Synchronized :
    - `HashMap` is not synchronized, meaning it is not thread-safe. If multiple threads access a `HashMap` concurrently, and at least one of the threads modifies the map, it must be synchronized externally.

4.  Ordering :
    - `HashMap` does not guarantee any specific order of the elements. The order of keys and values can change over time.

 # Common Operations:

1.  Creating a HashMap :
    ```java
    HashMap<Integer, String> map = new HashMap<>();
    ```

2.  Adding Elements :
    - Use `put(key, value)` to add key-value pairs.
    ```java
    map.put(1, "One");
    map.put(2, "Two");
    map.put(3, "Three");
    ```

3.  Accessing Elements :
    - Use `get(key)` to retrieve the value associated with a specific key.
    ```java
    String value = map.get(2); // Returns "Two"
    ```

4.  Removing Elements :
    - Use `remove(key)` to remove a key-value pair.
    ```java
    map.remove(2); // Removes the key-value pair for key 2
    ```

5.  Checking if Key or Value Exists :
    - Use `containsKey(key)` to check if a key exists.
    - Use `containsValue(value)` to check if a value exists.
    ```java
    boolean hasKey = map.containsKey(1); // Returns true
    boolean hasValue = map.containsValue("One"); // Returns true
    ```

6.  Iterating through a HashMap :
    - Use `keySet()`, `values()`, or `entrySet()` to iterate through keys, values, or key-value pairs, respectively.
    ```java
    for (Integer key : map.keySet()) {
        System.out.println("Key: " + key);
    }

    for (String val : map.values()) {
        System.out.println("Value: " + val);
    }

    for (Map.Entry<Integer, String> entry : map.entrySet()) {
        System.out.println("Key: " + entry.getKey() + ", Value: " + entry.getValue());
    }
    ```

7.  Getting the Size :
    - Use `size()` to get the number of key-value pairs.
    ```java
    int size = map.size(); // Returns the number of key-value pairs
    ```

8.  Clearing the HashMap :
    - Use `clear()` to remove all key-value pairs.
    ```java
    map.clear(); // Removes all key-value pairs
    ```
                                                               
*/
//java
import java.util.HashMap;
import java.util.Map;


public class HashmapJava {
    public static void main(String[] args) {
        // Creating a HashMap
        HashMap<Integer, String> map = new HashMap<>();

        // Adding elements to the HashMap
        map.put(1, "One");
        map.put(2, "Two");
        map.put(3, "Three");

        // Accessing elements
        System.out.println("Value for key 2: " + map.get(2)); // Outputs "Two"

        // Removing an element
        map.remove(2);

        // Checking if a key or value exists
        System.out.println("Contains key 1: " + map.containsKey(1)); // Outputs "true"
        System.out.println("Contains value 'One': " + map.containsValue("One")); // Outputs "true"

        // Iterating through the HashMap
        System.out.println("Keys:");
        for (Integer key : map.keySet()) {
            System.out.println(key);
        }

        System.out.println("Values:");
        for (String val : map.values()) {
            System.out.println(val);
        }

        System.out.println("Key-Value Pairs:");
        for (Map.Entry<Integer, String> entry : map.entrySet()) {
            System.out.println("Key: " + entry.getKey() + ", Value: " + entry.getValue());
        }

        // Getting the size of the HashMap
        System.out.println("Size of the map: " + map.size());

        // Clearing the HashMap
        map.clear();
        System.out.println("Size of the map after clear: " + map.size());
    }
}