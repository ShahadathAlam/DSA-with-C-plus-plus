

// Problem

/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]


Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.


Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)


*/

// Brute force solution




#include <iostream>

#include <vector>
using namespace std;



// Brute force solution

// Time complexity: O(n^2)

// Space complexity: O(1)

// Function to calculate the product of all the elements of nums except nums[i]
// vector<int> productExceptSelf(vector<int>& nums) {

//     int n = nums.size();

//     vector<int> result(n, 1);


//     for (int i = 0; i < n; i++) {
       

//        for (int j = 0; j < n; j++) {


//          if (j!= i) {

//            result[i] = result[i]* nums[j];

//          }
//        }



//     }

//     return result;
// }





// int main() {

//    vector<int> vec = {1,2,3,4};

//    vector<int> result = productExceptSelf(vec);
//    for (int i = 0; i < result.size(); i++) {
//     cout << result[i] << " ";

//    }

   
//     return 0;
// }


// Optimization in terms of time complexity


// The optimized solution has a time complexity of O(n) and a space complexity of O(n). It uses two arrays to store the left and right products of the elements in the given array, respectively.


// The algorithm first calculates the left product by multiplying all the elements in the given array to the left of each index. Then, it calculates the right product by multiplying all the elements in the given array to the right of each index. Finally, it multiplies the left product and the right product at each index to get the desired result.



// vector<int> productExceptSelf(vector<int>& nums) {

//     int n = nums.size();

//     vector<int> prefix(n, 1);
//     vector<int> suffix(n, 1);
//     vector<int> result(n, 1);
  
   
  
//     for (int i = 1; i < n; i++) {
//         prefix[i] = nums[i-1] * prefix[i-1];
    
       

//     }


//       for (int i = n-2; i >= 0; i--) {
//         suffix[i] = nums[i+1] * suffix[i+1];
    
    
//     }


//     for(int i =0; i<n ;i++){

//         result[i] = prefix[i] * suffix[i];
//     }
//     return result;
// }





// int main() {

//    vector<int> vec = {1,2,3,4};

//    vector<int> result = productExceptSelf(vec);
//    for (int i = 0; i < result.size(); i++) {
//     cout << result[i] << " ";

//    }

   
//     return 0;
// }



 // Optimization in terms of both time and space complexity


 // The optimized solution has a time complexity of O(n) and a space complexity of O(1). 


vector<int> productExceptSelf(vector<int>& nums) {

    int n = nums.size();

  
    vector<int> result(n, 1);
  
   
  
    for (int i = 1; i < n; i++) {
        result[i] = nums[i-1] * result[i-1];
    
       

    }

           int suffix = 1;
      for (int i = n-2; i >= 0; i--) {

       suffix *= nums[i+1];
        result[i] = result[i] * suffix;
         
    
    }


    return result;
}





int main() {

   vector<int> vec = {1,2,3,4};

   vector<int> result = productExceptSelf(vec);
   for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";

   }

   
    return 0;
}


/*

### **Summary of Time and Space Complexity**

#### **Problem Overview**
The task is to calculate the product of all elements in an array except the element at the current index, without using division and in \(O(n)\) time.

---

#### **Code Summary**
The solution uses:
1. **Result array** to store prefix products initially and later updates it with suffix products.
2. **A single scalar variable** (`suffix`) to calculate suffix products.

---

### **Time Complexity**
1. **Prefix Calculation Loop**: 
   - Iterates through the array once: \(O(n)\).
2. **Suffix Calculation Loop**: 
   - Iterates through the array once: \(O(n)\).

Since these loops are sequential:
\[
\text{Total Time Complexity} = O(n) + O(n) = O(n)
\]

---

### **Space Complexity**
1. **Output Array (`result`)**:
   - Requires \(O(n)\) space for \(n\) elements.
2. **Extra Variables**:
   - Only scalar variables (`suffix`, `n`, and loop variables), which require \(O(1)\) space.

If the **output array is excluded** (as specified in some problems), the **space complexity is \(O(1)\)**.

---

### **Final Complexity**
- **Time Complexity**: \(O(n)\)
- **Space Complexity**: 
  - \(O(1)\), excluding the output array.
  - \(O(n)\), if the output array is included. 

---

This implementation is optimal in both time and space, making it well-suited for large inputs. 

*/