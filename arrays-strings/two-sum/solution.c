#include <stdio.h>

int main()
{
    int nums[] = {3,3};
    int target = 6;
    int n = 2;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Indices: %d, %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution found\n");

    return 0;
}