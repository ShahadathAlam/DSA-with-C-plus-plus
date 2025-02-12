/*

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

*/

#include <iostream>
#include <algorithm>
using namespace std;

// Function to merge two sorted arrays
void mergeSortedArray(int nums1[], int m, int nums2[], int n) {
    int i = m - 1;         // Pointer for last valid element in nums1
    int j = n - 1;         // Pointer for last element in nums2
    int index = m + n - 1; // Pointer for last position in nums1

    // Merge in reverse order to avoid overwriting elements in nums1
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[index] = nums1[i];
            i--;
        } else {
            nums1[index] = nums2[j];
            j--;
        }
        index--;
    }

    // Copy remaining elements from nums2 (if any)
    while (j >= 0) {
        nums1[index] = nums2[j];
        j--;
        index--;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    int m = 3;
    int n = 3;

    mergeSortedArray(nums1, m, nums2, n);
    printArray(nums1, m + n);

    return 0;
}

/*

### Approach Explanation:
1. We start merging from the end to avoid overwriting elements in nums1.
2. We use three pointers:
   - `i` pointing to the last valid element of nums1 (m-1).
   - `j` pointing to the last element of nums2 (n-1).
   - `index` pointing to the last position of nums1 (m+n-1).
3. We compare elements from nums1 and nums2, placing the larger element at `index` and decrementing the respective pointer.
4. If elements remain in nums2, we copy them into nums1.

### Time Complexity Analysis:
- We iterate through the elements of nums1 and nums2 at most once.
- Each comparison and placement operation takes O(1).
- **Overall Time Complexity:** O(m + n)

### Space Complexity Analysis:
- We do not use extra space apart from the input arrays.
- **Overall Space Complexity:** O(1) (constant extra space).

*/
