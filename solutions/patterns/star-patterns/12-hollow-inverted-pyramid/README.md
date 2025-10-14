# Hollow Inverted Full Pyramid Pattern

## 🧩 Problem Statement

Write a Java program to print a Hollow Inverted Full Pyramid star pattern.
The pattern should be an inverted pyramid where:

- The first row has the maximum number of stars.

- The middle rows have stars only at the edges, leaving the center hollow.

- The last row has a single star.

- The number of rows is defined by n

## Output
```
 * * * * 
  *   * 
   * * 
    *  
```



## Explanation ✅ Solved using Java 
👨‍💻 Author:- [Sayantan Pandey](https://github.com/sayantan-pandey)

This program prints a **hollow inverted full pyramid** using nested loops:

- The **outer loop** (`i`) runs from `1` to `n` (each row).
- The **first inner loop** prints **leading spaces** that increase with each row to invert the pyramid.
- If the row is the **first or last**, it prints all stars.
- Otherwise, it prints a star only at the **first and last column positions**, leaving the inside **hollow**.
- After each row, a newline is printed.





