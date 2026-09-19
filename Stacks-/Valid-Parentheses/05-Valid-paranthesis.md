## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/submissions/2146550415/

### Approach
Used a stack data structure to track open brackets. As characters are processed, open brackets are pushed onto the stack. When a closing bracket is encountered, it is compared against the top element of the stack. If it matches, the stack is popped; otherwise, the string is invalid.

### Complexity
- Time: $O(n)$ - single pass through the string of length $n$.
- Space: $O(n)$ - worst-case stack space required when all characters are opening brackets.

### Notes
Handling boundary checks like checking if the stack is empty before popping prevents underflow errors when strings start with closing brackets.