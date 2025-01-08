
#include <iostream>
#include <climits>
using namespace std;



// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.





// Function to calculate the maximum profit
int maxProfit(int prices[], int n) {
    int maxProfit = 0; // Initialize maximum profit
    int bestBuy = prices[0]; // Initialize the best day to buy

    for (int i = 1; i < n; i++) {

        if(prices[i] > bestBuy){
        // Update maximum profit if selling today gives more profit
        maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        // Update the best day to buy if a lower price is found
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit; // Return the maximum profit
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4}; // Example prices array
    int n = sizeof(prices) / sizeof(prices[0]); // Calculate the size of the array

    cout << "Maximum Profit: " << maxProfit(prices, n) << endl; // Output result

    return 0;
}

// Time Complexity: O(n)

// Space Complexity: O(1)

