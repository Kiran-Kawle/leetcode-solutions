#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// LeetCode function
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Allocate memory for the prefix result string
    char* prefix = (char*)malloc(sizeof(char) * (strlen(strs[0]) + 1));
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        // Compare characters until a mismatch or end of string is reached
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        // Truncate the prefix at the first mismatch
        prefix[j] = '\0';

        if (prefix[0] == '\0') break; // Early exit if prefix becomes empty
    }

    return prefix;
}

// Local testing block
int main() {
    // Test Case 1: Standard common prefix
    char* strs1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(strs1, 3);
    printf("Test 1 Result: \"%s\" (Expected: \"fl\")\n", res1);
    free(res1);

    // Test Case 2: Edge case (No common prefix)
    char* strs2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(strs2, 3);
    printf("Test 2 Result: \"%s\" (Expected: \"\")\n", res2);
    free(res2);

    return 0;
}