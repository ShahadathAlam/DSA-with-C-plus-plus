/*
Problem: Aggressive Cows (Largest Minimum Distance)

Farmer John has built a new long barn with N (2 <= N <= 100,000) stalls.
The stalls are positioned along a straight line at locations x1 ... xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows become aggressive if placed too close to each other. To prevent fights,
he wants to assign them to stalls such that the minimum distance between any two cows is as large as possible.
The task is to determine the largest minimum distance possible.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if it is possible to place cows with at least 'minDist' distance apart
bool isPossible(vector<int> &arr, int N, int C, int minDist) {
    int cows = 1; // Place first cow at the first stall
    int lastStallPosition = arr[0]; // Last placed cow position
    
    for (int i = 1; i < N; i++) {
        if (arr[i] - lastStallPosition >= minDist) { // If valid placement
            cows++;
            lastStallPosition = arr[i]; // Update last placed cow's position
        
        }
        if (cows == C) return true; // If all cows are placed successfully
    }
    return false; // If not all cows can be placed
  
}

// Function to find the largest minimum distance
int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end()); // Sort stall positions
    
    int st = 1; // Minimum possible distance
    int end = arr[N-1] - arr[0]; // Maximum possible distance
    int ans = -1;
    
    while (st <= end) {
        int mid = st + (end - st) / 2; // Midpoint of the search space
        
        if (isPossible(arr, N, C, mid)) { // If possible to place cows
            ans = mid; // Update answer
            st = mid + 1; // Try for a larger minimum distance
        } else {
            end = mid - 1; // Reduce search space
        }
    }
    return ans; // Return the largest minimum distance found
}

int main() {
    int N = 5, C = 3; // Number of stalls and cows
    vector<int> arr = {1, 2, 8, 4, 9}; // Stall positions
    
    cout << getDistance(arr, N, C) << endl; // Output the result
    return 0;
}

/*
Explanation:
1. Sort the stall positions.
2. Use binary search on the possible minimum distance between cows.
3. Check feasibility using `isPossible` function:
   - Place cows greedily, ensuring at least `minDist` distance.
   - If all cows are placed, return true.
4. Adjust search space based on feasibility check.
5. Return the largest minimum distance found.
*/

/*
Time Complexity:
- Sorting the array takes O(N log N).
- Binary search runs in O(log(max_dist)), where max_dist is the range of stall positions.
- The `isPossible` function runs in O(N) for each binary search iteration.
- Overall complexity: O(N log N) + O(N log(max_dist)) ≈ O(N log(max_dist)).

Space Complexity:
- O(1) (constant extra space apart from input storage).
*/
