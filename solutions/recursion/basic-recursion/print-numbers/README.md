## 1. Print Numbers from N to 1

<!-- Concept: Basic recursion flow (base case + decreasing call)

Problem:

Write a recursive function printDescending(n) that prints numbers from n down to 1.

Example:
Input: n = 5
Output: 5 4 3 2 1

Edge Cases:
Case	Input	Output	Why
Base	n = 1	1	Smallest valid input
Invalid	n = 0 or negative	(nothing printed)	Ensure base case stops recursion
Recursion Concept:

Base case stops the recursion (if n <= 0 return)

Recursive call prints smaller problems (printDescending(n-1)) -->