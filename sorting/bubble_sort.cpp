/*
=============================================
         🔹 Understanding Array Passing in C++ 🔹
=============================================

✅ In C++, when we pass an array to a function, we actually pass a **pointer to the first element** of the array, NOT a copy of the array.
✅ Since arrays are stored **contiguously in memory**, using pointer arithmetic, we can access and modify all elements.
✅ This is why modifying the array inside the function affects the original array in `main()`.
*/

#include <iostream>
#include <algorithm>
using namespace std;

// ✅ Function to demonstrate that array is passed by pointer (not copied)
void bubbleSort(int arr[], int n) { // Equivalent to int* arr
    cout << "Inside bubbleSort, arr (address of first element): " << arr << endl;
    
    for (int i = 0; i < n-1; i++) {

        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) { // Accessing using index (same as pointer arithmetic)
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        
        if (!isSwap) return; // If no two elements were swapped, then the array is sorted
    }
}

int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // ✅ Calculate size correctly
    
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "In main, arr (address of first element): " << arr << endl;

    bubbleSort(arr, n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

/*
=============================================
         🔹 Key Takeaways 🔹
=============================================

1️⃣ When we pass `arr[]`, we actually pass `&arr[0]` (address of first element).
2️⃣ This means the function **does not receive a full array, only a pointer**.
3️⃣ Since the pointer points to the original memory, modifying `arr` inside the function modifies the original array.
4️⃣ `sizeof(arr)` inside the function **does not return the actual array size**, but rather the pointer size (usually 8 bytes in 64-bit systems).
5️⃣ **Alternative way to pass the entire array:** Pass by reference using `int (&arr)[size]`.

=============================================
         🔹 Alternative Version 🔹
=============================================

// ✅ Passing array using pointer arithmetic explicitly
void bubbleSortPointer(int* arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (*(arr + j) > *(arr + j + 1)) { // Using pointer arithmetic
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
}

// ✅ Passing the full array (by reference, works only for fixed-size arrays)
void bubbleSortByReference(int (&arr)[5]) {
    for (int i = 0; i < 5-1; i++) {
        for (int j = 0; j < 5-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

=============================================
         🔹 Time and Space Complexity of Bubble Sort 🔹
=============================================

✅ **Time Complexity Analysis:**


- **Worst Case (Reverse Sorted):** O(n²) [Nested loops run fully]


✅ **Space Complexity:**
- **O(1) (Constant Space Complexity)** since sorting happens in-place without extra space usage.

=============================================
*/

// additional Q & A

/*
=============================================
         🔹 Why Does Modifying `arr[]` Inside `bubbleSort` Modify the Entire Array? 🔹
=============================================

Even though we pass **only a pointer to the first element of the array**, we can still modify the **entire array** because **arrays are stored in contiguous memory**. Since we have access to the first element's address, we can move through the entire array using **pointer arithmetic**.

=============================================
         🔍 Breaking It Down with Memory Representation
=============================================
Let's say we have the following array:

```cpp
int arr[] = {4, 1, 5, 2, 3};
```
This array is stored in memory like this:

| Index | Value | Address (Example) |
|--------|------|------------------|
| `arr[0]` | 4  | `0x100` |
| `arr[1]` | 1  | `0x104` |
| `arr[2]` | 5  | `0x108` |
| `arr[3]` | 2  | `0x10C` |
| `arr[4]` | 3  | `0x110` |

- `arr` (without an index) is actually **a pointer to `arr[0]`**, which means `arr == &arr[0]` (stores address `0x100`).
- Since arrays are stored **contiguously in memory**, moving to the next element is as simple as adding `1` to the pointer.

=============================================
         🔹 How `bubbleSort` Accesses the Entire Array
=============================================
When we pass `arr` to `bubbleSort`, we are passing a **pointer to `arr[0]`**. 

### **Modified `bubbleSort` with Address Printing**
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n) {
    cout << "Inside bubbleSort, arr (address of first element): " << arr << endl;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << "Comparing arr[" << j << "] = " << arr[j] << " and arr[" << j+1 << "] = " << arr[j+1] << endl;
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
```

=============================================
         🔹 How Does the Entire Array Get Modified?
=============================================
1️⃣ **Pointer Arithmetic:**  
   - Since `arr` is a pointer to the first element, `arr[j]` is equivalent to `*(arr + j)`, meaning **we can access every element using indexing**.
   - `arr[j+1]` is the **next element** in memory (`*(arr + j + 1)`).

2️⃣ **Accessing and Modifying Elements:**  
   - When we swap `arr[j]` and `arr[j+1]`, we modify the **actual memory location** that `arr` is pointing to.
   - This affects the original array because `arr` in `bubbleSort` refers to the **same memory locations** as `arr` in `main()`.

=============================================
         🔹 Proof Using Pointers Instead of Indexing
=============================================
Instead of using `arr[j]`, let's rewrite the function using **explicit pointer arithmetic**:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
}

int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
```

=============================================
         🔹 Summary
=============================================
| **Concept** | **Explanation** |
|------------|------------------|
| **What is passed?** | A **pointer to the first element** (`arr[0]`) |
| **Why does the whole array change?** | Arrays are **contiguous in memory**, and we access elements using **pointer arithmetic** (`arr[j]` or `*(arr + j)`) |
| **Can we modify all elements?** | Yes, because `arr` points to the **actual memory** of the original array |
| **Does the function get array size?** | No, it only receives a pointer, so we must pass the size separately |

=============================================
         🔹 Final Answer
=============================================
Even though `arr` is just a pointer to the first element:
- The entire array is stored **contiguously in memory**.
- Using `arr[j]` or `*(arr + j)`, we can **access and modify all elements**.
- This directly changes the **original array in `main()`** because `arr` points to the **same memory locations**.

This is why modifying `arr[]` inside `bubbleSort()` **modifies the entire array**! 🚀

=============================================
*/
