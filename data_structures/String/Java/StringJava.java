package data_structures.String.Java;
/*
  /$$$$$$   /$$               /$$                    
 /$$__  $$ | $$              |__/                    
| $$  \__//$$$$$$    /$$$$$$  /$$ /$$$$$$$   /$$$$$$ 
|  $$$$$$|_  $$_/   /$$__  $$| $$| $$__  $$ /$$__  $$
 \____  $$ | $$    | $$  \__/| $$| $$  \ $$| $$  \ $$
 /$$  \ $$ | $$ /$$| $$      | $$| $$  | $$| $$  | $$
|  $$$$$$/ |  $$$$/| $$      | $$| $$  | $$|  $$$$$$$
 \______/   \___/  |__/      |__/|__/  |__/ \____  $$
                                            /$$  \ $$
                                           |  $$$$$$/
                                            \______/ 
*/





/*
### Strings in Java

Strings in Java are objects that represent sequences of characters. The `String` class in Java is used to create and manipulate strings. Strings are immutable, meaning once created, their values cannot be changed.

#### Creating Strings

There are several ways to create strings in Java:

1.  String Literal :
    ```java
    String str1 = "Hello, World!";
    ```

2.  Using the `new` Keyword :
    ```java
    String str2 = new String("Hello, World!");
    ```

3.  From a `char` Array :
    ```java
    char[] charArray = {'H', 'e', 'l', 'l', 'o'};
    String str3 = new String(charArray);
    ```

#### Common String Methods

1.  Length :
    ```java
    int length = str1.length();
    ```
    
2.  Character at Specific Index :
    ```java
    char ch = str1.charAt(0); // 'H'
    ```

    3.  Substring :
    ```java
    String subStr = str1.substring(0, 5); // "Hello"
    ```

    4.  Contains :
    ```java
    boolean contains = str1.contains("World"); // true
    ```

5.  Index of Character or Substring :
    ```java
    int index = str1.indexOf('W'); // 7
    ```

6.  Last Index of Character or Substring :
```java
int lastIndex = str1.lastIndexOf('o'); // 8
    ```

7.  Equals :
```java
boolean isEqual = str1.equals("Hello, World!"); // true
    ```

8.  Equals Ignoring Case :
    ```java
    boolean isEqualIgnoreCase = str1.equalsIgnoreCase("hello, world!"); // true
    ```

    9.  Compare To :
    ```java
    int compareToResult = str1.compareTo("Hello, World!"); // 0
    ```

10.  Starts With :
    ```java
    boolean startsWith = str1.startsWith("Hello"); // true
    ```

11.  Ends With :
```java
boolean endsWith = str1.endsWith("World!"); // true
    ```
    
    12.  Replace :
    ```java
    String replacedStr = str1.replace('H', 'h'); // "hello, World!"
    ```
    
    13.  Trim :
    ```java
    String strWithSpaces = "   Hello, World!   ";
    String trimmedStr = strWithSpaces.trim(); // "Hello, World!"
    ```

    14.  Split :
    ```java
    String[] words = str1.split(", "); // ["Hello", "World!"]
    ```

15.  Convert to Uppercase :
    ```java
    String upperCaseStr = str1.toUpperCase(); // "HELLO, WORLD!"
    ```

    16.  Convert to Lowercase :
    ```java
    String lowerCaseStr = str1.toLowerCase(); // "hello, world!"
    ```
    
17.  Concatenate :
```java
String str4 = str1 + " How are you?"; // "Hello, World! How are you?"
    String str5 = str1.concat(" How are you?"); // "Hello, World! How are you?"
    ```

    #### StringBuilder and StringBuffer

For mutable strings, Java provides `StringBuilder` and `StringBuffer`. Both classes are used to create strings that can be modified after creation.

-  StringBuilder : Non-synchronized (not thread-safe), but faster.
-  StringBuffer : Synchronized (thread-safe), but slower.

#### StringBuilder Example

```java
StringBuilder sb = new StringBuilder("Hello");
sb.append(", World!");
String result = sb.toString(); // "Hello, World!"
```

#### StringBuffer Example

```java
StringBuffer sbf = new StringBuffer("Hello");
sbf.append(", World!");
String result = sbf.toString(); // "Hello, World!"
```

#### String Formatting

Java provides a way to format strings using the `String.format` method.

```java
String formattedString = String.format("Hello, %s!", "World"); // "Hello, World!"
```

#### Converting Between Strings and Other Data Types

1.  String to Integer :
    ```java
    int number = Integer.parseInt("123");
    ```
    
2.  Integer to String :
    ```java
    String numberStr = Integer.toString(123);
    ```

3.  String to Double :
    ```java
    double d = Double.parseDouble("123.45");
    ```

4.  Double to String :
    ```java
    String doubleStr = Double.toString(123.45);
    ```

5.  String to Char Array :
    ```java
    char[] charArray = str1.toCharArray();
    ```
    
6.  Char Array to String :
    ```java
    String strFromArray = new String(charArray);
    ```
    
*/

public class StringJava {
public static void main(String[] args) {
        String str1 = "Hello, World!";
        System.out.println("Original String: " + str1);
        
        // Length of the string
        System.out.println("Length: " + str1.length());
        
        // Character at a specific index
        System.out.println("Character at index 0: " + str1.charAt(0));
        
        // Substring
        System.out.println("Substring (0, 5): " + str1.substring(0, 5));

        // Contains
        System.out.println("Contains 'World': " + str1.contains("World"));
        
        // Index of a character
        System.out.println("Index of 'W': " + str1.indexOf('W'));

        // Last index of a character
        System.out.println("Last index of 'o': " + str1.lastIndexOf('o'));

        // Equals
        System.out.println("Equals 'Hello, World!': " + str1.equals("Hello, World!"));
        
        // Equals ignoring case
        System.out.println("Equals ignoring case 'hello, world!': " + str1.equalsIgnoreCase("hello, world!"));

        // Compare to
        System.out.println("Compare to 'Hello, World!': " + str1.compareTo("Hello, World!"));

        // Starts with
        System.out.println("Starts with 'Hello': " + str1.startsWith("Hello"));

        // Ends with
        System.out.println("Ends with 'World!': " + str1.endsWith("World!"));

        // Replace
        System.out.println("Replace 'H' with 'h': " + str1.replace('H', 'h'));

        // Trim
        String strWithSpaces = "   Hello, World!   ";
        System.out.println("Trimmed string: '" + strWithSpaces.trim() + "'");

        // Split
        String[] words = str1.split(", ");
        System.out.println("Split string: ");
        for (String word : words) {
            System.out.println(word);
        }

        // Convert to uppercase
        System.out.println("Uppercase: " + str1.toUpperCase());

        // Convert to lowercase
        System.out.println("Lowercase: " + str1.toLowerCase());

        // Concatenate
        System.out.println("Concatenated string: " + str1.concat(" How are you?"));

        // StringBuilder usage
        StringBuilder sb = new StringBuilder("Hello");
        sb.append(", World!");
        System.out.println("StringBuilder result: " + sb.toString());

        // StringBuffer usage
        StringBuffer sbf = new StringBuffer("Hello");
        sbf.append(", World!");
        System.out.println("StringBuffer result: " + sbf.toString());

        // String formatting
        String formattedString = String.format("Hello, %s!", "World");
        System.out.println("Formatted string: " + formattedString);
    }
}

/* 
### Explanation:

-  String Creation : Demonstrates various ways to create strings.
-  String Methods : Showcases common methods used for string manipulation.
-  StringBuilder and StringBuffer : Highlights mutable string classes.
-  String Formatting : Shows how to format strings using `String.format`.
-  Conversion : Demonstrates how to convert between strings and other data types.
*/