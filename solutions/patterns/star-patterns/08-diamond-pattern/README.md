# Diamond Pattern

## 🧩 Problem Statement

Write a Java program to print a Diamond star pattern.
The program should display stars (*) in a symmetric diamond shape.

- The top half is a full pyramid, and the bottom half is an inverted full pyramid.

- The height of the diamond is defined by n (number of rows in the top half).

## Output
```
   * 
  * * 
 * * * 
* * * * 
 * * * 
  * * 
   * 
```


## Explanation ✅ Solved using Java 
👨‍💻 Author:- [Sayantan Pandey](https://github.com/sayantanpandey)

The program prints a diamond pattern using nested loops.  
- The outer loop runs through all rows (`2*n - 1`).  
- The first half (`i <= n`) prints the top pyramid:
  - Spaces decrease while stars increase.  
- The second half (`i > n`) prints the bottom inverted pyramid:
  - Spaces increase while stars decrease.  
- This creates a symmetric diamond shape.
