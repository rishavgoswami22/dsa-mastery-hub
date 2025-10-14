# Hollow Diamond Pyramid Pattern

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
👨‍💻 Author:- [Sayantan Pandey](https://github.com/sayantan-pandey)

This program prints a **hollow diamond-shaped pyramid** using nested loops:

- The **outer loop** (`i`) runs from `1` to `2 * n - 1`, covering both the upper and lower halves of the diamond.
- For the **top half** (`i <= n`):
  - Leading spaces decrease with each row (`n - i`).
  - Stars (`*`) are printed only at the **first** and **last** positions of each row, creating a hollow effect.
- For the **bottom half** (`i > n`):
  - Leading spaces increase with each row (`s`).
  - Stars again appear only at the edges (`j == 1` or `j == 2 * n - i`).
- After each row, a newline is printed to move to the next line.





