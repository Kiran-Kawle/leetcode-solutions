## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/submissions/2145400966/

### Approach
Used a two-pointer technique. Iterate through the array with a fast pointer `i`. Whenever a non-zero element is encountered, write it to the position tracked by `lastNonZeroFoundAt` and increment that index. Once all non-zero elements are moved forward, fill the remaining array slots up to `numsSize` with zeroes.

### Complexity
- Time: O(n) - two linear passes through the array of length $n$.
- Space: O(1) - in-place modification using constant auxiliary space.

### Notes
This approach avoids creating a secondary array, directly satisfying the requirement to perform operations in-place without extra memory allocation.