## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/submissions/2145134707/

### Approach
Used a two-pointer technique (`left` starting at 0 and `right` at `sSize - 1`). Swapped the characters at these positions in-place while moving the pointers toward each other until they met in the middle.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Swapping in-place eliminates the need for extra memory allocation, keeping space complexity constant.