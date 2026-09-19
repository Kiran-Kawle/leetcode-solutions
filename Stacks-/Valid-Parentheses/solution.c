#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// LeetCode function
bool isValid(char* s) {
    int len = strlen(s);
    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char ch = s[i];

        // Push opening brackets onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } 
        // Match closing brackets against top of stack
        else {
            if (top == -1) return false; // Closing bracket without opening

            char topChar = stack[top--];
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    // Stack should be empty if all brackets matched correctly
    return top == -1;
}

// Local testing block
int main() {
    // Test Case 1: Standard valid case
    char test1[] = "()[]{}";
    printf("Test 1 Result: %s (Expected: true)\n", isValid(test1) ? "true" : "false");

    // Test Case 2: Edge case (Mismatched / unbalanced)
    char test2[] = "(]";
    printf("Test 2 Result: %s (Expected: false)\n", isValid(test2) ? "true" : "false");

    return 0;
}