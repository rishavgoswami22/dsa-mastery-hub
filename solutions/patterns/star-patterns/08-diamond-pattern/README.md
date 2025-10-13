# Diamond Pattern

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


## Explanation
The program prints a diamond pattern using nested loops.  
- The outer loop runs through all rows (`2*n - 1`).  
- The first half (`i <= n`) prints the top pyramid:
  - Spaces decrease while stars increase.  
- The second half (`i > n`) prints the bottom inverted pyramid:
  - Spaces increase while stars decrease.  
- This creates a symmetric diamond shape.
