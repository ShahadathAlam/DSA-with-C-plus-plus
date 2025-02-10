#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  
        int curr = arr[i];
        int prev = i - 1;

        // Shift elements of sorted part to make space for current element
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
       
        arr[prev + 1] = curr;  // Place the current element at correct position
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

/*
=====================================
    Insertion Sort Explanation
=====================================

Insertion Sort works by taking elements one by one and inserting them into their correct position in the sorted part of the array.

Step-by-step breakdown:
1. Assume the first element is already sorted.
2. Pick the next element and compare it with the sorted portion (left side).
3. Shift elements to the right to create space for the current element.
4. Place the current element at its correct position.
5. Repeat until all elements are sorted.

Example Walkthrough:
Original array: [4, 1, 5, 2, 3]
1st iteration: [1, 4, 5, 2, 3] (1 is placed correctly)
2nd iteration: [1, 4, 5, 2, 3] (5 is already in place)
3rd iteration: [1, 2, 4, 5, 3] (2 is inserted correctly)
4th iteration: [1, 2, 3, 4, 5] (3 is inserted correctly)

=====================================
    Time Complexity Analysis
=====================================
- **Best Case (Already Sorted):** O(n)
- **Worst Case (Reverse Sorted):** O(n²)
- **Average Case:** O(n²)

Space Complexity: O(1) (In-place sorting)

=====================================
    Key Properties of Insertion Sort
=====================================
✔ Stable sorting algorithm (maintains relative order of duplicate elements)
✔ Adaptive (fast for nearly sorted data)
✔ In-place (doesn't use extra space)
✔ Not the best for large datasets due to O(n²) complexity
*/
