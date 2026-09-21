# Move Zeroes

**Difficulty:** Easy-Medium

**LeetCode:** https://leetcode.com/problems/move-zeroes/

## Approach

Traverse the array and keep a position for the next non-zero element. Whenever a non-zero element is found, swap it with the element at that position, keeping all zeroes toward the end of the array.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Notes

The solution moves all zeroes to the end while maintaining the relative order of the non-zero elements. The program was tested with an array containing zeroes and an array without zeroes.