# Best Time to Buy and Sell Stock

**Difficulty:** Easy-Medium

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum stock price seen so far and calculate the profit that could be made by selling at each later price. Update the maximum profit whenever a higher profit is found.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Notes

The solution makes one pass through the array. The program was tested with a case where profit is possible and a case where the prices continuously decrease.