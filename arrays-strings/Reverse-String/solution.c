#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

// Local testing block
int main() {
    // Test Case 1: Standard string (odd length)
    char test1[] = "hello";
    reverseString(test1, 5);
    printf("Test 1 Result: %s (Expected: olleh)\n", test1);

    // Test Case 2: Edge Case (even length / repeated characters)
    char test2[] = "Hannah";
    reverseString(test2, 6);
    printf("Test 2 Result: %s (Expected: hannaH)\n", test2);

    return 0;
}