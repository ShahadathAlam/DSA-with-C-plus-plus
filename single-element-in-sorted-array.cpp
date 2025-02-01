/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 

Constraints:

1 <= nums.length <= 105
0 <= nums[i] <= 105
*/






#include <vector>
using namespace std;

class Solution {
public:
    // Function to find the single non-duplicate element in a sorted array
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size(); // Get the size of the array
        int st = 0, end = n - 1; // Initialize start and end pointers

        // If the array has only one element, return it as the unique element
        if (n == 1) return A[0];

        // Perform binary search
        while (st <= end) {
            int mid = st + (end - st) / 2; // Calculate the middle index

            // Check if the middle element is the unique one
            if (mid == 0 && A[0] != A[1]) return A[mid]; // If it's the first element
            if (mid == n - 1 && A[n - 1] != A[n - 2]) return A[mid]; // If it's the last element
            if (A[mid - 1] != A[mid] && A[mid + 1] != A[mid]) return A[mid]; // If it's unique

            // Check if the mid index is even or odd
            if (mid % 2 == 0) {
                // If mid is even, check the left neighbor
                if (A[mid - 1] == A[mid]) {
                    // If the left neighbor is the same, the unique element must be on the right
                    end = mid - 1; // Move the end pointer to mid - 1
                } else {
                    // If the left neighbor is different, the unique element is on the left
                    st = mid + 1; // Move the start pointer to mid + 1
                }
            } else {
                // If mid is odd, check the left neighbor
                if (A[mid - 1] == A[mid]) {
                    // If the left neighbor is the same, the unique element must be on the left
                    st = mid + 1; // Move the start pointer to mid + 1
                } else {
                    // If the left neighbor is different, the unique element is on the right
                    end = mid - 1; // Move the end pointer to mid - 1
                }
            }
        }
        return -1; // This line should not be reached with valid input
    }
};


/*
# Explanation of the Single Non-Duplicate Element Code

## Overview
The code implements a solution to find the single non-duplicate element in a sorted array where every other element appears twice. The algorithm uses a binary search approach to achieve a time complexity of O(log n).

## Code Breakdown
1. **Initialization**: The function initializes two pointers, `st` (start) and `end` (end), to represent the current search range in the array. It also checks if the array has only one element, in which case it returns that element.

2. **Binary Search**: The main loop continues until the start pointer exceeds the end pointer. It calculates the middle index and checks:
   - If the middle element is the unique one (by checking its neighbors).
   - If the middle index is even or odd, it adjusts the search range based on the relationship between the middle element and its neighbors.

3. **Return Value**: If the unique element is found, it returns that element; otherwise, it returns -1 (though this case should not occur with valid input).

## Notes
- Ensure that the input array `A` is sorted and contains the required properties (every element appears twice except for one).
- The function assumes that the input is valid as per the problem constraints.

*/