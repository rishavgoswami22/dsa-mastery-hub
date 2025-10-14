# Star Patterns in Java

This repository contains various star patterns implemented using Java. Each pattern demonstrates the use of nested loops to print stars (*) in specific shapes.

# 1. Right Half Pyramid

## 🧩 Problem Statement

Write a Java program to print a Right Half Pyramid pattern made of stars (*).
The number of rows should be fixed (for example, n = 5), and each new row should contain one more star than the previous row — starting from one star in the first row and ending with five stars in the last row.

## Output
```
* 
* * 
* * * 
* * * * 
* * * * * 
```

# 2. Left Half Pyramid

## 🧩 Problem Statement

Write a Java program to print a Left Half Pyramid star pattern.
The pyramid should be aligned to the right side, with stars (*) increasing in each row.
The number of rows is fixed (for example, n = 5), and proper spacing should be added to align the stars in a left-half pyramid shape.

## Output
```
        *
      * *
    * * *
  * * * *
* * * * *
```

# 3. Full Pyramid

## 🧩 Problem Statement

Write a Java program to print a Full Pyramid star pattern.
The program should display stars (*) in a centered pyramid shape, where each row has an increasing number of stars and decreasing spaces.
The height of the pyramid (number of rows) is defined by the variable n.

## Output
```
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
```

# 4. Inverted Right Half Pyramid

## 🧩 Problem Statement

Write a Java program to print an Inverted Right Half Pyramid star pattern.
The program should display stars (*) in decreasing order per row — starting with the maximum number of stars in the first row and reducing by one in each subsequent row until only one star remains.

## Output
```
* * * * *  
* * * *   
* * *    
* *     
* 
```

# 5. Inverted Left Half Pyramid

## 🧩 Problem Statement

Write a Java program to print an Inverted Left Half Pyramid star pattern.
The program should display stars (*) aligned to the left but inverted, meaning the first row starts with the maximum number of stars and each subsequent row decreases the star count while increasing spaces to maintain alignment.

## Output
```
* * * *
  * * *
    * *
      *
```

# 6. Inverted Full Pyramid

## 🧩 Problem Statement

Write a Java program to print an Inverted Full Pyramid star pattern.
The program should display stars (*) in a centered pyramid shape that is inverted, meaning the first row contains the maximum number of stars and each subsequent row contains fewer stars, while spaces are adjusted to maintain the pyramid alignment.

## Output
```
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
```

# 7. Rhombus Pattern

## 🧩 Problem Statement

Write a Java program to print a Rhombus star pattern.
The program should display stars (*) in a slanted square shape (rhombus) where each row contains the same number of stars but is shifted to the right using spaces.

## Output
```
*****
 *****
  *****
   *****
    *****
```

# 8. Diamond Pattern

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

# 9. Hourglass Pattern

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

# 10. Hollow Square Pattern

## 🧩 Problem Statement

Write a Java program to print a Hollow Square star pattern.
The program should display stars (*) forming the boundary of a square while keeping the inner area hollow.

- The number of rows and columns is defined by n.
## Output
```
* * * * * 
*       *
*       *
*       *
* * * * * 
```

# 11. Hollow Full Pyramid Pattern

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

# 12. Hollow Inverted Full Pyramid Pattern

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

# 13. Hollow Diamond Pyramid Pattern

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