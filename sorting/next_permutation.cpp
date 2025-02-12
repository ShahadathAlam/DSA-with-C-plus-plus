



/*
 * Problem Statement:
 
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
 */

 #include <iostream>
 #include <algorithm> // for reverse and swap functions
 using namespace std;
 
 // Function to find the next permutation
 void next_permutation(int nums[], int n) {
     // Step 1: Find the pivot
     int pivot = -1;
     for (int i = n - 2; i >= 0; i--) {
         if (nums[i] < nums[i + 1]) {  // Find the first decreasing element from the right
             pivot = i;
             break;
         }
     }
     
     // Step 2: If no pivot is found, reverse the array to get the smallest permutation
     if (pivot == -1) {
         reverse(nums, nums + n);
         return;
     }
     
     // Step 3: Find the next greater element on the right of pivot
     for (int i = n - 1; i > pivot; i--) {
         if (nums[i] > nums[pivot]) {
             swap(nums[i], nums[pivot]);  // Swap the pivot with the next larger element
             break;
         }
     }
     
         // Reverse the subarray from pivot+1 to n-1
        //   reverse(nums+pivot+1, nums+n);
        int i = pivot + 1, j = n-1;
        while(i <= j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
 }
 
 // Driver function
 int main() {
     int nums[] = {1, 2, 3, 5, 4};
     int n = sizeof(nums) / sizeof(nums[0]);
     
     next_permutation(nums, n);
     
     // Print the next permutation
     for (int i = 0; i < n; i++)
         cout << nums[i] << " ";
     cout << endl;
     
     return 0;
 }
 
 /*
  * Explanation of the Approach:
  * 1. **Find the pivot**:
  *    - Start from the end and find the first decreasing element.
  *    - If no such element is found, the array is already in descending order, so reverse it to get the smallest permutation.
  *
  * 2. **Find the next greater element**:
  *    - Search from the end for the smallest number larger than nums[pivot].
  *    - Swap it with nums[pivot].
  *
  * 3. **Reverse the suffix**:
  *    - The elements after the pivot are in descending order. Reversing them ensures the next smallest permutation.
  *
  * Time Complexity:
  * - **O(n)** because we traverse the array at most three times (finding pivot, finding next greater element, and reversing the suffix).
  *
  * Space Complexity:
  * - **O(1)** as we do in-place modifications without extra memory.
  */
 