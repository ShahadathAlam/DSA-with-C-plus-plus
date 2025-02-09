/*
===========================================
        Selection Sort Explanation
===========================================

Selection Sort is a simple comparison-based sorting algorithm. It works by:
1. Finding the smallest element in the array.
2. Swapping it with the first element.
3. Repeating the process for the remaining unsorted part of the array.

This process continues until the entire array is sorted.
*/

#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Loop for each element
        int minIndex = i;  // Assume the first unsorted element is the smallest

        for (int j = i + 1; j < n; j++) {  // Find the smallest element in the remaining array
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update index of the smallest element
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
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
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

/*
===========================================
        Line-by-Line Analysis
===========================================

1. `for (int i = 0; i < n - 1; i++)`:
   - This loop controls the passes over the array. In each pass, we place the smallest element in the correct position.

2. `int minIndex = i;`
   - We assume the first element of the unsorted part is the smallest.

3. `for (int j = i + 1; j < n; j++)`
   - This loop finds the smallest element in the unsorted portion of the array.

4. `if (arr[j] < arr[minIndex])`
   - If a smaller element is found, update `minIndex`.

5. `swap(arr[i], arr[minIndex]);`
   - Swap the smallest element found with the first element of the unsorted part.

===========================================
        Time Complexity Analysis
===========================================

Selection Sort always runs in **O(n^2)** time, regardless of the input order.

- Best case (Already Sorted): O(n^2)
- Average case (Random Order): O(n^2)
- Worst case (Reverse Sorted): O(n^2)

Why? Because the algorithm always performs:
- **n-1 comparisons in the first pass**
- **n-2 comparisons in the second pass**
- ...
- **1 comparison in the last pass**

Total comparisons: (n-1) + (n-2) + ... + 1 = O(n^2)

===========================================
        Space Complexity Analysis
===========================================

- **O(1) (Constant Space Complexity)**
- Selection Sort is **in-place** (does not use extra space beyond swapping elements).

===========================================
        Key Properties of Selection Sort
===========================================
✔ **In-Place Sorting** - Uses only O(1) extra space.
✔ **Not Stable** - Can change the order of equal elements.
✔ **Time Complexity is Always O(n^2)** - No matter the input order.
✔ **Useful for Small Arrays** - Performs poorly on large datasets.

===========================================
        Summary
===========================================
1. Selection Sort finds the smallest element and swaps it to its correct position.
2. It always runs in O(n^2) time, making it inefficient for large datasets.
3. It sorts the array **in-place** (constant space complexity O(1)).
4. It is **not stable** since swapping can change relative order of equal elements.
5. It is best used when memory is limited, but other sorting algorithms like QuickSort or MergeSort are preferred for large datasets.
*/
