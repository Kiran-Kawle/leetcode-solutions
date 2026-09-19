## Problem: Reverse Linked List (Easy)
**Link:** https://leetcode.com/problems/reverse-linked-list/submissions/2146562621/

### Approach
Used an iterative three-pointer technique (`prev`, `curr`, `nextTemp`). Iterated through the list, temporarily saving the next pointer, reversing the current node's pointer to point to `prev`, and advancing both `prev` and `curr` forward until reaching the end of the list.

### Complexity
- Time: $O(n)$ - single pass through the linked list of length $n$.
- Space: $O(1)$ - pointers are modified in-place using constant extra space.

### Notes
Updating pointers in-place requires storing `curr->next` before modifying it to prevent losing the reference to the remainder of the list.