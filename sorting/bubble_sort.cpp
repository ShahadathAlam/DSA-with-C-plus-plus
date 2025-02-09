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
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) { // Accessing using index (same as pointer arithmetic)
                swap(arr[j], arr[j+1]);
            }
        }
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
