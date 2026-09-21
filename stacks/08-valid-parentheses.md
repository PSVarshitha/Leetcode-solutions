# Valid Parentheses

**Difficulty:** Easy-Medium

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets as they appear. For every closing bracket, check whether it matches the most recent opening bracket; if all brackets match and the stack is empty at the end, the parentheses are valid.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Notes

The solution handles round, square, and curly brackets using a stack. The program was tested with a valid bracket sequence and a mismatched bracket sequence before submitting to LeetCode.