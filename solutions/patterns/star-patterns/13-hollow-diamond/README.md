# Hollow Diamond Pyramid Pattern

## 🧩 Problem Statement

Write a Java program to print a Hollow Diamond Pyramid star pattern.
- The pattern should be a symmetric diamond where:

- The top half is a hollow full pyramid.

- The bottom half is an inverted hollow pyramid.

- Stars (*) appear only at the edges of each row, leaving the inner area hollow.

## Output
```
   * 
  * * 
 *   * 
*     * 
 *   * 
  * * 
   *
```



## Explanation ✅ Solved using Java 
👨‍💻 Author:- [Sayantan Pandey](https://github.com/sayantanpandey)

This program prints a **hollow diamond-shaped pyramid** using nested loops:

- The **outer loop** (`i`) runs from `1` to `2 * n - 1`, covering both the upper and lower halves of the diamond.
- For the **top half** (`i <= n`):
  - Leading spaces decrease with each row (`n - i`).
  - Stars (`*`) are printed only at the **first** and **last** positions of each row, creating a hollow effect.
- For the **bottom half** (`i > n`):
  - Leading spaces increase with each row (`s`).
  - Stars again appear only at the edges (`j == 1` or `j == 2 * n - i`).
- After each row, a newline is printed to move to the next line.





