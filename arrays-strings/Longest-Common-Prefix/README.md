## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/submissions/2146575040/

### Approach
Used a horizontal scanning approach. Started by setting the prefix to the first string in the array, then sequentially compared this prefix with each subsequent string, truncating the prefix at the first character mismatch until all strings were checked or the prefix became empty.

### Complexity
- Time: $O(S)$ - where $S$ is the sum of all characters in all strings.
- Space: $O(1)$ - auxiliary memory used for storing the prefix string output.

### Notes
Adding an early exit check (`prefix[0] == '\0'`) optimizes runtime when strings share no common starting characters.