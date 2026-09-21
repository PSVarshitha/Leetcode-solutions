# Valid Anagram

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-anagram/

## Approach

Use a frequency array to count the occurrences of each character in the first string and decrease the count for each character in the second string. If all character counts become zero, the two strings are anagrams.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Notes

The solution checks whether both strings contain the same characters with the same frequencies. The program was tested with an anagram case and a non-anagram case before submitting to LeetCode.