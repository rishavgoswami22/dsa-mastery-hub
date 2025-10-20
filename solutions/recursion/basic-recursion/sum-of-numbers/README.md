## 2. Sum of Digits of a Number

<!-- Concept: Reducing a number, recursion on digits.

Problem:

Write a recursive function sumOfDigits(num) that returns the sum of digits of a number.

Example:
Input: num = 1234..897
Output: 10   // (1 + 2 + 3 + 4)

Edge Cases:
Case	Input	Output	Why
Single digit	num = 9	9	Base case
Zero	num = 0	0	Recursive stop
Large	num = 98765	35	Check stack behavior
Recursion Concept:

Divide and conquer → sumOfDigits(num/10) + (num % 10)

Base case when num == 0. -->