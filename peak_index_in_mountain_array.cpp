/*
    Problem: Peak Index in a Mountain Array
    --------------------------------------
    Given a mountain array 'arr', return the index of the peak element.
    The peak element is the maximum value in the array, where values increase 
    to the peak and then decrease.
    The algorithm must run in O(log n) time complexity using Binary Search.

    Definition of Mountain Array:
    - A mountain array is an array that strictly increases to a peak element 
      and then strictly decreases.
    - Formally, for an array 'arr' of length n:
      There exists some index i (0 < i < n-1) such that:
      arr[0] < arr[1] < ... < arr[i] (strictly increasing)
      arr[i] > arr[i+1] > ... > arr[n-1] (strictly decreasing)

    Definition of Peak Element:
    - A peak element is an index i where arr[i] is greater than both its neighbors:
      arr[i-1] < arr[i] > arr[i+1].
    - Since the array follows a mountain structure, there is always one peak.

    Approach:
    - Use binary search to find the peak element.
    - If arr[mid] is greater than both its neighbors (arr[mid-1] and arr[mid+1]), it is the peak.
    - If arr[mid] is greater than arr[mid-1], move right (peak is on the right side).
    - Otherwise, move left (peak is on the left side).

    Why initialize st = 1 and end = arr.size() - 2?
    - The first and last elements (arr[0] and arr[n-1]) can never be peaks because the array 
      must increase to a peak and then decrease.
    - To avoid unnecessary boundary checks, we start from index 1 and end at index n-2.

    Example 1:
    Input: arr = [0,1,0]
    Output: 1
    Explanation: The peak element is at index 1 (value 1).

    Example 2:
    Input: arr = [0,2,1,0]
    Output: 1
    Explanation: The peak element is at index 1 (value 2).

    Example 3:
    Input: arr = [0,10,5,2]
    Output: 1
    Explanation: The peak element is at index 1 (value 10).
*/

#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2; // Start from index 1 to size-2 to avoid boundary issues
        while (st <= end) {
            int mid = st + (end - st) / 2; // Prevents integer overflow
            
            // Check if mid is the peak element
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            } 
            // If mid is greater than its left neighbor, move right
            else if (arr[mid] > arr[mid - 1]) {  
                st = mid + 1;
            } 
            // Otherwise, move left
            else {  
                end = mid - 1;
            }
        }
        return -1; // This should never be reached as input is guaranteed to be a mountain array
    }
};
