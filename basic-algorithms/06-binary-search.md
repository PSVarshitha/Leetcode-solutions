# Binary Search

**Difficulty:** Easy-Medium

**LeetCode:** https://leetcode.com/problems/binary-search/

## Approach

Use two pointers, `left` and `right`, to represent the current search range. Check the middle element and eliminate half of the search range depending on whether the target is smaller or larger than the middle element.

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Notes

Binary search requires the input array to be sorted. The program was tested with a target that exists in the array and a target that is not present.