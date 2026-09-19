## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2146568563/

### Approach
Used a single-pass greedy approach. Iterate through the array maintaining the lowest stock price seen so far (`minPrice`). At each day, calculate the profit if sold on that day (`prices[i] - minPrice`) and update `maxProfit` if it exceeds the maximum profit recorded.

### Complexity
- Time: $O(n)$ - single traversal through the price array of length $n$.
- Space: $O(1)$ - uses constant extra space for tracking variables.

### Notes
This dynamic tracking avoids nested loops (brute force $O(n^2)$), keeping the time complexity linear.