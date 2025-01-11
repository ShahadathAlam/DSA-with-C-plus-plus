


// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

// Constraints:

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104



// Example 1: Input: height = [1,8,6,2,5,4,8,3,7]


// #include <iostream>
// #include <climits>
// using namespace std;







// Brute force solution 

// // Function to calculate the maximum water
// int maxWater(int heights[], int n) {

//     int maxWater = 0; 

// for (int i = 0; i < n; i++){

//     for (int j = i + 1; j < n; j++) {

//         int width = j - i;
//         int height = min(heights[i], heights[j]);
//         int curWater = width * height;
//         maxWater = max(maxWater, curWater);
//     }
// }

// return maxWater;

  
// }

// int main() {
//     int heights[] = {1,8,6,2,5,4,8,3,7}; 
//     int n = sizeof(heights) / sizeof(heights[0]); // Calculate the size of the array

//  cout << "Maximum water that can be stored = " << maxWater(heights, n) << endl; // Output result

//     return 0;
// }
  
  // Time complexity: O(n^2)
  // Space complexity: O(1)
  // This solution has a time complexity of O(n^2) and a space complexity of O(1). It uses nested loops to iterate through all possible pairs of lines and calculates the maximum water that can be stored.




// Optimized solution








/*
### Solution Approach: Two-Pointer Technique

#### Intuition:
1. The area of the container is influenced by both the width and the height of the shorter line.
2. To maximize the area, you need to:
   - Maximize the distance between the two lines (`width`).
   - Find the tallest possible shorter line.

#### Steps:
1. **Initialize Two Pointers**:
   - Start with two pointers: `left` at the beginning (`0`) and `right` at the end (`n-1`) of the array.
   
2. **Calculate Area**:
   - Calculate the container's width as `right - left`.
   - Use the shorter of the two heights (`min(heights[left], heights[right])`) to determine the height of the container.
   - Compute the current area: `width * height`.

3. **Update Maximum Area**:
   - Keep track of the largest area seen so far.

4. **Move the Pointer with the Shorter Height**:
   - If `heights[left] < heights[right]`, move the `left` pointer inward to possibly find a taller line.
   - Otherwise, move the `right` pointer inward.

5. **Repeat Until the Pointers Meet**:
   - Continue until `left` and `right` pointers overlap.

*/

#include <iostream>
#include <algorithm> // For min() and max()
using namespace std;

// Function to calculate the maximum water that can be stored
int maxWater(int heights[], int n) {
    int maxWater = 0; // Variable to store the maximum water
    int left = 0;     // Left pointer
    int right = n - 1; // Right pointer

    while (left < right) {
        // Calculate width and height of the container
        int width = right - left;
        int height = min(heights[left], heights[right]);
        
        // Calculate current water and update maxWater if needed
        int curWater = width * height;
        maxWater = max(maxWater, curWater);

        // Move the pointer pointing to the shorter line
        heights[left] < heights[right] ? left++ : right--;
    }

    return maxWater; // Return the maximum water found
}

int main() {
    int heights[] = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // Input heights array
    int n = sizeof(heights) / sizeof(heights[0]); // Calculate the size of the array

    // Output the result
    cout << "Maximum water that can be stored = " << maxWater(heights, n) << endl;

    return 0;
}



/*

### Explanation with Example

#### Input:
`heights = {1, 8, 6, 2, 5, 4, 8, 3, 7}`

#### Steps:
1. Start with `left = 0` and `right = 8`.
2. **Initial Area**:
   - Width = \(8 - 0 = 8\)
   - Height = \( \min(1, 7) = 1 \)
   - Area = \(8 \times 1 = 8\)
3. Move `left` pointer inward because `heights[left] < heights[right]`.
4. Continue this process, updating `maxWater` whenever a larger area is found.

#### Output:
The maximum area is **49**, formed by lines at indices \(1\) and \(8\) (heights 8 and 7).

---

### Complexity Analysis
1. **Time Complexity**: \(O(n)\) 
   - Each pointer moves at most \(n\) steps.
2. **Space Complexity**: \(O(1)\)
   - No additional space is used.

---

### Key Takeaways
- The two-pointer approach ensures we efficiently calculate the maximum water container without brute-forcing every pair of lines.
- The idea to move the shorter pointer inward is the critical optimization that ensures \(O(n)\) time complexity.
- This solution works for any input size up to \(n = 10^5\).



*/