/**
 * Search in Rotated Sorted Array
 * 
 * Given an integer array nums sorted in ascending order (with distinct values) that is possibly rotated at an unknown pivot,
 * and a target value, return the index of target if it is in nums, or -1 if it is not in nums.
 * 
 * The algorithm must run in O(log n) time complexity.
 * 
 * Example:
 * Input: nums = [4,5,6,7,0,1,2], target = 0
 * Output: 4
 * 
 * Constraints:
 * - 1 <= nums.length <= 5000
 * - -10^4 <= nums[i] <= 10^4
 * - All values of nums are unique.
 * - nums is an ascending array that is possibly rotated.
 * - -10^4 <= target <= 10^4
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * Function to search for a target value in a rotated sorted array using binary search.
 * @param nums: A sorted array with distinct values that may be rotated.
 * @param target: The target value to search for.
 * @return The index of the target value in nums, or -1 if it is not in nums.
 **/
int search(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;  // Initialize start and end pointers
    
    while (st <= end) {
        int mid = st + (end - st) / 2;  // Calculate mid index to avoid overflow
        
        if (nums[mid] == target) {
            return mid;  // Target found at mid index
        }
        
        // Check if the left half is sorted
        if (nums[st] <= nums[mid]) {
            // If target is within the sorted left half, search in the left half
            if (nums[st] <= target && target <= nums[mid]) {
                end = mid - 1;
            } else {
                // Otherwise, search in the right half
                st = mid + 1;
            }
        } else {  // Right half is sorted
            // If target is within the sorted right half, search in the right half
            if (nums[mid] <= target && target <= nums[end]) {
                st = mid + 1;
            } else {
                // Otherwise, search in the left half
                end = mid - 1;
            }
        }
    }
    
    return -1;  // Target not found in the array
}


int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    
    int result = search(nums, target);
    cout << "Index of target: " << result << endl;
    
    return 0;
}
/**
 * Explanation:
 * - The array is sorted but rotated, so we use a modified binary search.
 * - We check if the left or right half of the array is sorted.
 * - Depending on where the target lies (within the sorted half or not), we adjust the search range.
 * - This approach ensures O(log n) time complexity.
 */