#include <stdio.h>

// LeetCode function
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // Found a lower buy price
        } else {
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit; // Found a higher profit
            }
        }
    }

    return maxProfit;
}

// Local testing block
int main() {
    // Test Case 1: Standard case with profit
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = 6;
    int profit1 = maxProfit(prices1, size1);
    printf("Test 1 Result: %d (Expected: 5)\n", profit1);

    // Test Case 2: Edge case (Decreasing prices, no profit)
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = 5;
    int profit2 = maxProfit(prices2, size2);
    printf("Test 2 Result: %d (Expected: 0)\n", profit2);

    return 0;
}