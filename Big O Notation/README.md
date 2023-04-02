```bash
 /$$$$$$$  /$$$$$$  /$$$$$$           /$$$$$$ 
| $$__  $$|_  $$_/ /$$__  $$         /$$__  $$
| $$  \ $$  | $$  | $$  \__/        | $$  \ $$
| $$$$$$$   | $$  | $$ /$$$$ /$$$$$$| $$  | $$
| $$__  $$  | $$  | $$|_  $$|______/| $$  | $$
| $$  \ $$  | $$  | $$  \ $$        | $$  | $$
| $$$$$$$/ /$$$$$$|  $$$$$$/        |  $$$$$$/
|_______/ |______/ \______/          \______/ 

 /$$   /$$  /$$$$$$  /$$$$$$$$ /$$$$$$  /$$$$$$$$ /$$$$$$  /$$$$$$  /$$   /$$
| $$$ | $$ /$$__  $$|__  $$__//$$__  $$|__  $$__/|_  $$_/ /$$__  $$| $$$ | $$
| $$$$| $$| $$  \ $$   | $$  | $$  \ $$   | $$     | $$  | $$  \ $$| $$$$| $$
| $$ $$ $$| $$  | $$   | $$  | $$$$$$$$   | $$     | $$  | $$  | $$| $$ $$ $$
| $$  $$$$| $$  | $$   | $$  | $$__  $$   | $$     | $$  | $$  | $$| $$  $$$$
| $$\  $$$| $$  | $$   | $$  | $$  | $$   | $$     | $$  | $$  | $$| $$\  $$$
| $$ \  $$|  $$$$$$/   | $$  | $$  | $$   | $$    /$$$$$$|  $$$$$$/| $$ \  $$
|__/  \__/ \______/    |__/  |__/  |__/   |__/   |______/ \______/ |__/  \__/
```

# Big-O Notation📈
- `Big-O` notation is a way of describing the complexity of an algorithm in terms of the input size. In other words, it tells you how much time and/or memory an algorithm will require as the input size grows.

## Big-O Complexity
- `Time Complexity` - refers to the total count of operations an algorithm will perform given a set of items.
- `Space Complexity` -  refers to the total memory an algorithm will take up while running given a set of items. 

We measure these independently from one another because while an algorithm
may perform fewer operations than another, it may also take up way more
memory. Depending on what your requirements are, one may be a better choice
than the other.

## Common Big-O's
- `O(1)` - Constant Time: This notation represents an algorithm that always takes the same amount of time or space to complete, regardless of the size of the input. For example, accessing an element in an array, adding a node to the beginning of a linked list, or performing a mathematical operation like addition or multiplication.

- `O(log n)` - Logarithmic Time: This notation represents an algorithm that takes less time or space to complete as the size of the input increases. However, the rate of decrease slows down as the input gets larger. Common examples include binary search algorithms or algorithms that split the input in half with each iteration.

- `O(n)` - Linear Time: This notation represents an algorithm that takes a proportionate amount of time or space to complete as the size of the input increases. For example, iterating through an array or linked list to find an element, or counting the number of occurrences of a value in a list.

- `O(n log n)` - Linearithmic Time: This notation represents an algorithm that combines linear and logarithmic time. An example is the QuickSort algorithm, which has an average-case time complexity of O(n log n).

- `O(n^2)` - Quadratic Time: This notation represents an algorithm that takes a square proportionate amount of time or space to complete as the size of the input increases. For example, nested loops that iterate through an array or matrix, or comparing each element in one array to each element in another array.

- `O(n^3)` - Cubic Time: This notation represents an algorithm that takes a cube proportionate amount of time or space to complete as the size of the input increases. For example, algorithms that require nested loops that iterate through a 3D array or matrix.

- `O(2^n)` - Exponential Time: This notation represents an algorithm that takes an exponential amount of time or space to complete as the size of the input increases. For example, algorithms that require checking all possible combinations or permutations of the input, such as brute-force algorithms.

- `O(n!)` - Factorial Time: This notation represents an algorithm that takes a factorial amount of time or space to complete as the size of the input increases. This is the slowest possible time complexity, and is typically only encountered in algorithms that require checking all possible permutations or combinations of the input.

## Simpler explanation

```bash
Name                   Notation              Feeling About Notations
------------------------------------------------------------------------
Constant              `O(1)`                  AWESOME! THE BEST!
Logarithmic           `O(log N)`              GREAT! IT'S GOOD!
Linear                `O(N)`                  IT'S OKAY.
Linearithmic          `O(N log N)`            UGH.. I DON'T KNOW!
Quadratuc             `O(N ^ 2)`              THIS IS SHITTY.
Exponential           `O(2 ^ N)`              THIS IS HORRIBLE.
Cubic                 `O(n ^ 3)`              MAN THIS IS REALLY BAD!
Factorial             `O(N!)`                 WTF YOU DOING? THIS IS THE WORST THING!!
```

## Conclusion
- There is no perfect data structure, and you choose one over another based on the data that you are working with and the things you are going to do with it. 
- It's important to understand the complexity of your algorithms, because as input size grows, the performance of your program may become slower or require more memory. In general, you want to choose algorithms that have the lowest possible time and/or space complexity for your particular use case. However, it's important to balance this with other considerations, such as code readability, maintainability, and ease of development.
