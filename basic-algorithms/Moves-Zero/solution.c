#include <stdio.h>

// LeetCode function
void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;

    // Move all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt] = nums[i];
            lastNonZeroFoundAt++;
        }
    }

    // Fill remaining positions with zeroes
    for (int i = lastNonZeroFoundAt; i < numsSize; i++) {
        nums[i] = 0;
    }
}

// Local testing block
int main() {
    // Test Case 1: Standard case
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    moveZeroes(nums1, size1);
    printf("Test 1 Result: ");
    for (int i = 0; i < size1; i++) printf("%d ", nums1[i]);
    printf("(Expected: 1 3 12 0 0)\n");

    // Test Case 2: Edge case (Single element zero)
    int nums2[] = {0};
    int size2 = 1;
    moveZeroes(nums2, size2);
    printf("Test 2 Result: ");
    for (int i = 0; i < size2; i++) printf("%d ", nums2[i]);
    printf("(Expected: 0)\n");

    return 0;
}