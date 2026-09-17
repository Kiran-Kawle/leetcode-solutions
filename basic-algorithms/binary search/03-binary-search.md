## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/submissions/2145144049/

### Approach
Used a two-pointer divide-and-conquer strategy (`left` and `right`). Calculated `mid = left + (right - left) / 2` to avoid integer overflow, halving the search space in each iteration based on whether the target was greater or smaller than `nums[mid]`.

### Complexity
- Time: O(\log n) - halving the search space at each step gives logarithmic time.
- Space: O(1) - iterative approach uses constant auxiliary space.

### Notes
Using `left + (right - left) / 2` prevents potential overflow errors compared to `(left + right) / 2`.