/*
Painter’s Partition Problem

Given are N boards of length of each given in the form of an array, and M painters, such
that each painter takes 1 unit of time to paint 1 unit of the board.

The task is to find the minimum time to paint all boards under the constraints that any
painter will only paint continuous sections of boards.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to check if it is possible to paint all boards within 'maxTime' time
bool isPossible(const vector<int>& boards, int painters, int maxTime) {
    int total = 0; // Total time taken by the current painter
    int requiredPainters = 1; // Start with one painter

    for (int board : boards) {
        total += board; // Add the current board length to the total
        if (total > maxTime) { // If total exceeds maxTime
            requiredPainters++; // We need another painter
            total = board; // Start counting for the new painter
            if (requiredPainters > painters) // If we exceed the number of painters
                return false; // Not possible
        }
    }
    return true; // Possible to paint within maxTime
}

// Function to find the minimum time required to paint all boards
int findMinTime(const vector<int>& boards, int painters) {
    int low = INT_MIN; // Maximum board length
    int high = 0; // Total length of all boards

    for (int board : boards) {
        high += board; // Sum of all board lengths
        low = max(low, board); // Update low if current board length is larger
    }

    int result = -1;

    // Binary search to find the minimum time
    while (low <= high) {
        int mid = low + (high - low) / 2; // Midpoint of current range

        if (isPossible(boards, painters, mid)) { // Check if mid is a feasible solution
            result = mid; // Update result
            high = mid - 1; // Try for a better (smaller) solution
        } else {
            low = mid + 1; // Increase the time limit
        }
    }
    return result; // Minimum time found
}

int main() {
    vector<int> boards = {10, 20, 30, 40}; // Example board lengths
    int painters = 2; // Number of painters

    int minTime = findMinTime(boards, painters);
    cout << "Minimum time to paint all boards: " << minTime << endl;

    return 0;
}

/*
Explanation of the Code:

- isPossible Function: This function checks if it is possible to paint all boards within a given maximum time (maxTime). It iterates through the boards, summing their lengths. If the total exceeds maxTime, it assigns the work to a new painter and resets the total. If the number of required painters exceeds the available painters, it returns false.

- findMinTime Function: This function uses binary search to find the minimum time required to paint all boards. It initializes the search range between the maximum board length and the total length of all boards. It repeatedly checks the midpoint of the current range using the isPossible function. If it is possible to paint within that time, it tries to find a smaller time; otherwise, it increases the time limit.

- main Function: This is the entry point of the program where we define the board lengths and the number of painters, then call the findMinTime function and print the result.

Time Complexity:
- The time complexity of the isPossible function is O(N), where N is the number of boards.
- The binary search runs in O(log(S)), where S is the sum of all board lengths.
- Therefore, the overall time complexity is O(N log(S)).

Space Complexity:
- The space complexity is O(1) since we are using a constant amount of extra space, regardless of the input size. The input array is not counted towards space complexity as it is provided by the user.
*/
