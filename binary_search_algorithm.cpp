#include <iostream>
#include <vector>
using namespace std;

int searchInSortedArray(vector<int> arr, int tar){  // Iterative approach
int st =0, end =arr.size()-1;

while(st <= end){

// int mid = (st + end)/2;

int mid = st + (end - st) / 2; // optimized 

if(tar > arr[mid]){
    st = mid + 1;
} else if(tar < arr[mid]){

    end = mid - 1;
} else {
    return mid; // Element found at mid index
 
}
}

return -1; // Element not found in the array



}

int main (){


    vector<int> arr1 = {-1,0,3,4,5,9,12}; // odd

    int tar1 = 120;
    vector<int> arr2 = {-1,0,3,5,9,12}; // even
    int tar2 = 0;
  
    cout << "Index of " << tar1 << " in arr1: " << searchInSortedArray(arr1, tar1) << endl;
    // cout << "Index of " << tar2 << " in arr2: " << searchInSortedArray(arr2, tar2) << endl;
    
    return 0;
    
}






// recursive approach


/*
#include <iostream>
#include <vector>
using namespace std;

// Recursive binary search function
int recursiveBinarySearch(vector<int>& arr, int st, int end, int tar) {
    if (st > end) {
        return -1; // Base case: Element not found
    }

    // Calculate the middle index
    int mid = st + (end - st) / 2;

    if (arr[mid] == tar) {
        return mid; // Element found at mid index
    } else if (tar > arr[mid]) {
        // Search in the right half
        return recursiveBinarySearch(arr, mid + 1, end, tar);
    } else {
        // Search in the left half
        return recursiveBinarySearch(arr, st, mid - 1, tar);
    }
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd-sized array
    int tar1 = 120;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // Even-sized array
    int tar2 = 9;

    cout << "Index of " << tar1 << " in arr1: " 
         << recursiveBinarySearch(arr1, 0, arr1.size() - 1, tar1) << endl;

    cout << "Index of " << tar2 << " in arr2: " 
         << recursiveBinarySearch(arr2, 0, arr2.size() - 1, tar2) << endl;

    return 0;
}


*/


// Iterative approach vs Recursive approach

/*
Here’s a detailed analysis and comparison of the **iterative** and **recursive** approaches to binary search, with a focus on **time complexity**, **space complexity**, and practical considerations.

---

# 🔍 Comparing Iterative vs Recursive Binary Search: Which is Better? 🤔

Binary search is a fundamental algorithm used to find elements in a sorted array efficiently. It can be implemented using either an **iterative** approach or a **recursive** approach. While both achieve the same result, they differ in **space complexity** and other practical considerations.

Let’s dive deeper! 🚀

---

## **1. Iterative Approach**
### **Code:**
```cpp
int searchInSortedArray(vector<int> arr, int tar) {
    int st = 0, end = arr.size() - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2; // Avoid overflow
        if (arr[mid] == tar) return mid;   // Target found
        else if (tar > arr[mid]) st = mid + 1; // Search right
        else end = mid - 1; // Search left
    }
    return -1; // Target not found
}
```

---

## **2. Recursive Approach**
### **Code:**
```cpp
int recursiveBinarySearch(vector<int>& arr, int st, int end, int tar) {
    if (st > end) return -1; // Base case: Target not found
    int mid = st + (end - st) / 2; // Avoid overflow
    if (arr[mid] == tar) return mid;   // Target found
    else if (tar > arr[mid]) return recursiveBinarySearch(arr, mid + 1, end, tar); // Search right
    else return recursiveBinarySearch(arr, st, mid - 1, tar); // Search left
}
```

---

## **3. Analyzing Time Complexity**

Both the iterative and recursive approaches share the same **time complexity**, which depends on how many times the array is divided in half.

### **Key Points:**
1. At each step, the search range is halved.
2. The number of steps required is proportional to the logarithm of the array size, i.e., `O(log n)`.

#### **Mathematical Derivation:**
If the array has `n` elements:
- After the 1st step: Size of range = `n/2`
- After the 2nd step: Size of range = `n/4`
- After the `k`th step: Size of range = `n / (2^k)`

The process continues until `n / (2^k) = 1`, which means:
\[
k = \log_2(n)
\]

Thus, the **time complexity** for both approaches is:
\[
\text{Time Complexity} = O(\log n)
\]

---

## **4. Analyzing Space Complexity**

Here’s where the key difference lies between the two approaches:

### **Iterative Approach:**
- The iterative approach uses a **constant amount of space**.
- All variables (e.g., `st`, `end`, `mid`) are stored in the same function stack.
- **Space Complexity:** \( O(1) \)

### **Recursive Approach:**
- The recursive approach involves **function calls**, and each call consumes stack space.
- At each recursive step, a new stack frame is created for the function.
- The depth of the recursion is proportional to the number of divisions, i.e., \( O(\log n) \).
- **Space Complexity:** \( O(\log n) \)

#### **Visualization of Recursive Space Usage:**
For an array with 16 elements:
- Initial call: `st = 0, end = 15`
- 1st recursion: `st = 8, end = 15`
- 2nd recursion: `st = 12, end = 15`
- ...
Each recursive call adds to the stack until the base case is reached.

---

## **5. Practical Considerations**

### **Iterative Approach Advantages:**
1. 🛡️ **Lower Space Usage:** No extra stack space is required.
2. 💻 **Efficiency for Large Arrays:** Handles large arrays without risk of stack overflow.
3. 🚀 **Better for Real-World Applications:** Used in scenarios where minimizing memory usage is crucial.

### **Recursive Approach Advantages:**
1. ✨ **Code Simplicity:** The recursive approach is often more intuitive and concise.
2. 🎓 **Good for Teaching Concepts:** Helpful in learning divide-and-conquer algorithms.

### **Recursive Approach Disadvantages:**
1. ⚠️ **Stack Overflow Risk:** If the array size is very large, the recursive depth can exceed the system’s stack limit.
2. 🛑 **Higher Space Usage:** Each recursive call adds overhead due to stack allocation.

---

## **6. Conclusion: Which is Better?**

| **Aspect**               | **Iterative Approach**  | **Recursive Approach**  |
|--------------------------|-------------------------|-------------------------|
| **Time Complexity**       | \( O(\log n) \)         | \( O(\log n) \)         |
| **Space Complexity**      | \( O(1) \)             | \( O(\log n) \)         |
| **Risk of Stack Overflow**| None                  | High for large inputs   |
| **Code Simplicity**       | Moderate              | High                   |
| **Practicality**          | High                  | Limited                |

### 🔑 **Final Verdict:**
- In terms of **time complexity**, both approaches are equally efficient.
- However, the **iterative approach** is more practical for real-world applications due to its **constant space complexity** and lack of stack overflow risk.
- The **recursive approach** is elegant and concise but should be avoided for very large inputs.

---

## **7. Recommendation**
Use the **iterative approach** as the default implementation for binary search in competitive programming, production systems, and scenarios involving large datasets. Save the **recursive approach** for educational purposes or when working with small inputs.



*/



// Optimized Midpoint Calculation in Binary Search: Why It Matters
/*



# 🔍 Optimized Midpoint Calculation in Binary Search: Why It Matters 🛠️

When performing **binary search** on a sorted array, one of the key operations is calculating the **midpoint** of the search range. A common formula many developers use is:

```cpp
int mid = (st + end) / 2;
```

While this seems simple and intuitive, there’s a **hidden trap** 🪤 that can lead to **bugs** in certain scenarios. Instead, a safer and optimized approach is:

```cpp
int mid = st + (end - st) / 2;
```

But wait... 🤔 Why is this version better? Let’s dive in! 🏊

---

## 🌩️ The Problem with `(st + end) / 2`

When calculating the midpoint using `(st + end) / 2`, there's a risk of **integer overflow** if `st` and `end` are very large numbers.

### ⚠️ Example: Overflow in Action
Imagine:
- `st = 2,000,000,000`  
- `end = 2,000,000,000`

Now calculate:
```cpp
int mid = (st + end) / 2;
```

- First, `st + end = 4,000,000,000`.
- Oops! 😱 This exceeds the maximum value of a 32-bit integer (`2,147,483,647`) and causes **overflow**.
- The result becomes unpredictable, leading to incorrect behavior in your program.

---

## ✅ The Safer Formula: `st + (end - st) / 2`

The formula `st + (end - st) / 2` is **overflow-safe** because it breaks the calculation into smaller, manageable steps:

1. Compute `end - st` first, which is always within the valid range of integers.
2. Divide the result by 2, which reduces the size even further.
3. Finally, add `st` back, ensuring the calculation remains valid.

### 🎯 Example: No Overflow
Using the same values:
- `st = 2,000,000,000`  
- `end = 2,000,000,000`

Calculate:
```cpp
int mid = st + (end - st) / 2;
```

- `end - st = 0`
- `(end - st) / 2 = 0`
- `mid = st + 0 = 2,000,000,000`

No overflow here! 🎉

---

## ✨ Why It Matters
While the difference might seem small, this **optimized midpoint calculation** is a **must-have** in scenarios where:
- You’re working with **large arrays** or **big ranges**.
- Overflow could silently introduce **bugs** that are hard to trace. 🐛
- You want to write robust, production-grade code that handles edge cases gracefully.

---

## 👨‍💻 Best Practice: Use the Optimized Formula

Whenever you need to calculate the midpoint in **binary search** or similar algorithms, always prefer this formula:

```cpp
int mid = st + (end - st) / 2;
```

It’s:
- 🚀 **Overflow-safe**
- 🛡️ **Reliable**
- 📏 **Mathematically sound**

---

## 💡 Summary

Here’s the quick takeaway:
- **Bad:** `int mid = (st + end) / 2;` ❌ (Can cause overflow!)
- **Good:** `int mid = st + (end - st) / 2;` ✅ (Overflow-safe!)

By adopting this small but powerful improvement, you’ll make your **binary search algorithms** more robust and secure. Happy coding! 😄


*/