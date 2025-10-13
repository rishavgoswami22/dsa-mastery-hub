# Hourglass Pattern

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

## Explanation
The program prints an hourglass pattern using nested loops.  
- The outer loop runs through all rows (`2*n - 1`).  
- The first half (`i <= n`) prints the top inverted pyramid:
  - Spaces increase while stars decrease.  
- The second half (`i > n`) prints the bottom pyramid:
  - Spaces decrease while stars increase.  
- This forms a symmetric hourglass shape.

