# Hourglass Pattern

## 🧩 Problem Statement

Write a Java program to print an Hourglass star pattern.
The program should display stars (*) in a symmetric hourglass shape:

- The top half is an inverted full pyramid.

- The bottom half is a full pyramid.

- The number of rows in the top half is defined by n.

## Output
```
* * * * 
 * * * 
  * * 
   * 
  * * 
 * * * 
* * * *
```

## Explanation ✅ Solved using Java 
👨‍💻 Author:- [Sayantan Pandey](https://github.com/sayantan-pandey)

The program prints an hourglass pattern using nested loops.  
- The outer loop runs through all rows (`2*n - 1`).  
- The first half (`i <= n`) prints the top inverted pyramid:
  - Spaces increase while stars decrease.  
- The second half (`i > n`) prints the bottom pyramid:
  - Spaces decrease while stars increase.  
- This forms a symmetric hourglass shape.

