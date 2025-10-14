# Hollow Full Pyramid Pattern

## 🧩 Problem Statement

Write a Java program to print a Hollow Full Pyramid star pattern.
The program should display stars (*) in a centered pyramid shape where:

- The first row has one star, the last row is completely filled, and the middle rows have stars only at the edges, leaving the inner area hollow.

- The number of rows is defined by n.

## Output
```
    * 
   * * 
  *   * 
 *     * 
* * * * * 
```


## Explanation ✅ Solved using Java 
👨‍💻 Author:- [Sayantan Pandey](https://github.com/sayantan-pandey)

This program prints a **hollow full pyramid** using nested loops:

- The **outer loop** runs from `1` to `n` (each row).
- The **first inner loop** prints leading spaces to align the pyramid shape.
- For each row:
  - If it's the **first or last row**, stars are printed in all positions.
  - Otherwise, stars are printed only at the **first and last positions** of the row, leaving the center **hollow**.
- A newline (`println`) is used after each row to move to the next line.



