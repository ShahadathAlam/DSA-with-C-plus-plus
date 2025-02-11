/*

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
 

Follow up: Could you come up with a one-pass algorithm using only constant extra space?

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Brute force   // O(nlog n)
void sortColorsBruteForce(vector<int>& nums, int n){

    sort(nums.begin(),nums.end());
}


// two pass algorithm using constant extra space (more optimized ) 
// O(n)

void sortColorsMoreOptimized(vector<int>& nums,int n){
int count0 = 0, count1 = 0, count2 = 0;
       for(int i=0; i<n; i++){
        if(nums[i] == 0){
            count0++;
        } else if (nums[i] == 1){
            count1++;
        } else {
            count2++;
        }
        }
       
        int idx = 0;

        for ( int i= 0; i< count0; i++){
            nums[idx++] = 0;
        }

        for ( int i= 0; i< count1; i++){
            nums[idx++] = 1;
        }

        for ( int i= 0; i< count2; i++){
            nums[idx++] = 2;
        }
}

// one pass algorithm using constant extra space (most optimized ) by using Dutch National Flag algorithm
// O(n)
void sortColorsMostOptimized(vector<int>& nums, int n){

    int low = 0, mid = 0, high = n-1;

    while(mid <= high){

        if(nums[mid] == 0){
            // swap(nums[low++], nums[mid++]);
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1){
            mid++;
        } else {
            // swap(nums[mid], nums[high--]);
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

void printVector(vector<int>& nums,int n){


    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
 
}
int main (){
 vector<int> nums = {2,0,2,1,1,0,1,2,0,0};

 int n = nums.size();

   
 sortColorsBruteForce(nums, n);
 
 printVector(nums, n);

 sortColorsMoreOptimized(nums, n);
 
 printVector(nums, n);
 
 sortColorsMostOptimized(nums, n);
 
 printVector(nums, n);
 
 
 return 0;

}



/*

### Problem Statement:
Given an array `nums` with `n` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order **red, white, and blue**.

We use the integers **0, 1, and 2** to represent red, white, and blue, respectively.

**Constraints:**
- `1 <= n <= 300`
- `nums[i]` is either `0`, `1`, or `2`.

**Follow-up:** Can we solve this problem in **one pass** using **constant extra space**?

---

### Brute Force Approach (Sorting)
#### Explanation:
- The simplest way to solve this problem is by using the **sort function**.
- Since sorting algorithms like **quick sort and merge sort** generally run in `O(n log n)`, this is **not the optimal solution**.

#### Code:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortColorsBruteForce(vector<int>& nums, int n){
    sort(nums.begin(), nums.end()); // Sorting using inbuilt function (O(n log n))
}
```

#### Time and Space Complexity:
- **Time Complexity:** `O(n log n)` (due to sorting)
- **Space Complexity:** `O(1)` (since sorting is done in-place)

---

### More Optimized Approach (Counting Sort / Two-Pass Algorithm)
#### Explanation:
- We **count the occurrences** of each number (`0, 1, 2`).
- We **overwrite the original array** by placing `count0` number of `0`s, then `count1` number of `1`s, and finally `count2` number of `2`s.
- This ensures we **don't use extra space apart from a few counters**.

#### Code:
```cpp
void sortColorsMoreOptimized(vector<int>& nums, int n){
    int count0 = 0, count1 = 0, count2 = 0;
    
    // Count occurrences
    for(int i = 0; i < n; i++){
        if(nums[i] == 0) count0++;
        else if (nums[i] == 1) count1++;
        else count2++;
    }
    
    int idx = 0;
    
    // Overwrite array
    for (int i = 0; i < count0; i++) nums[idx++] = 0;
    for (int i = 0; i < count1; i++) nums[idx++] = 1;
    for (int i = 0; i < count2; i++) nums[idx++] = 2;
}
```

#### Time and Space Complexity:
- **Time Complexity:** `O(n)` (since we traverse the array twice)
- **Space Complexity:** `O(1)` (only a few extra variables)

#### Why is this more optimized than brute force?
- The brute force method sorts the array in `O(n log n)`, while this method runs in `O(n)`.
- Sorting is **not necessary** because we only have three unique values (`0,1,2`).
- However, this still requires **two passes** over the array, which can be improved.

---

### Most Optimized Approach: Dutch National Flag Algorithm (One-Pass, Constant Space)
#### Vision of Dutch National Flag Algorithm:
- **Three pointers (`low, mid, high`)** are used to **partition** the array into three regions:
  - **[0 to low-1]** → `0` (red)
  - **[low to mid-1]** → `1` (white)
  - **[mid to high]** → `unsorted region`
  - **[high+1 to end]** → `2` (blue)
- As we traverse, we swap elements to ensure the regions are correctly ordered.

#### Code:
```cpp
void sortColorsMostOptimized(vector<int>& nums, int n){
    int low = 0, mid = 0, high = n - 1;
    
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } 
        else if(nums[mid] == 1){
            mid++; // `1` is already in the correct position
        } 
        else {
            swap(nums[mid], nums[high]);
            high--; // `2` is moved to the correct position
        }
    }
}
```

#### How Does It Work?
- **Start with three pointers:** `low = 0`, `mid = 0`, `high = n-1`.
- **Traverse the array while `mid <= high`**:
  - If `nums[mid] == 0`, swap `nums[low]` and `nums[mid]`, then move both `low` and `mid` forward.
  - If `nums[mid] == 1`, just move `mid` forward.
  - If `nums[mid] == 2`, swap `nums[mid]` and `nums[high]`, then move `high` backward.
- **Why does this work?**
  - Because `low` ensures all elements before it are `0`s.
  - `mid` keeps `1`s in the middle.
  - `high` ensures all `2`s are placed at the end.

#### Time and Space Complexity:
- **Time Complexity:** `O(n)` (one pass through the array)
- **Space Complexity:** `O(1)` (only a few extra pointers)

---

### Why is Dutch National Flag Algorithm the Most Optimized?
| Approach | Time Complexity | Space Complexity | Number of Passes |
|----------|---------------|----------------|----------------|
| **Brute Force (Sorting)** | `O(n log n)` | `O(1)` | `1` |
| **Counting Sort (Two-Pass)** | `O(n)` | `O(1)` | `2` |
| **Dutch National Flag (One-Pass)** | `O(n)` | `O(1)` | `1` |

- **Only requires one traversal (`O(n)`) while maintaining constant space (`O(1)`).**
- **Efficient swapping ensures minimum operations.**
- **Solves the problem in-place efficiently.**

---

### **Final Thoughts**
The **Dutch National Flag Algorithm** is the **most optimized** solution because:
- It **sorts the array in a single pass**.
- It **does not require extra space**.
- It is **more efficient than the counting sort approach** as it reduces unnecessary operations.
- It is a classic **partitioning algorithm** used in many sorting problems.

---

*/
