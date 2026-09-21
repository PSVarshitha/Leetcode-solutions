# Longest Common Prefix

**Difficulty:** Easy-Medium

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

## Approach

Take the first string as the initial prefix and compare it with each of the remaining strings. Keep only the matching characters from the beginning until a mismatch or the end of a string is reached.

## Time Complexity

O(n × m)

## Space Complexity

O(1)

## Notes

The solution finds the common prefix shared by all the given strings. The program was tested with strings having a common prefix and with strings having no common prefix.