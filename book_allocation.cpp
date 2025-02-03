/*
Problem: Book Allocation Problem

You are given `n` books, each with a certain number of pages. You have `m` students, and you need to allocate the books 
to the students in such a way that each student gets at least one book. The goal is to minimize the maximum number of 
pages allocated to a student while ensuring the following constraints:
  1. Each book should be allocated to a student.
  2. Each student must be allocated at least one book.
  3. The books must be allocated in contiguous order.

Return the minimum possible value of the maximum number of pages assigned to a student.
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to check if we can allocate books with max pages as maxAllocatedPages
bool isValid(vector<int> &arr, int n, int m, int maxAllocatedPages) {  // O(n)
    int students = 1; // Start with one student
    int pages = 0; // Sum of pages allocated to the current student

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllocatedPages) return false; // If a single book has more pages than allowed
        if (pages + arr[i] <= maxAllocatedPages) {
            pages += arr[i]; // Add pages of the current book
        } else {
            students++; // Allocate to the next student
            if (students > m) return false; // If more students are needed, return false
            pages = arr[i]; // Start new sum with current book
        }
    }

    return students <= m; // Return true if students do not exceed M
}

// Function to allocate books to students
int bookAllocation(vector<int> &arr, int n, int m) {  // O(n * log N)
    if (m > n) return -1; // More students than books

    int st = 0; // Lower bound for binary search
    int sum = 0; // Total pages
    int ans = -1;

    for (int i = 0; i < n; i++) sum += arr[i]; // Calculate total pages (O(n))

    while (st <= sum) {  // O(log(sum))
        int mid = st + (sum - st) / 2; // Midpoint

        if (isValid(arr, n, m, mid)) {  // Check if valid allocation
            ans = mid; // Update answer
            sum = mid - 1; // Try for a smaller max
        } else { // If not valid
            st = mid + 1; // Increase the minimum limit
        }
    }

    return ans; // Return the minimum possible max pages
}

int main() {
    vector<int> arr = {2, 1, 3, 4}; // Example book pages
    int n = arr.size(); // Number of books
    int m = 2; // Number of students

    cout << bookAllocation(arr, n, m) << endl; // Output the result

    return 0;
}

/*
Explanation:
- We perform a binary search on the answer, which lies between 0 and sum(arr).
- The `isValid` function checks if it's possible to allocate books such that the maximum pages assigned to a student 
  do not exceed a given `mid` value.
- We adjust our search space based on whether the current `mid` value is a valid allocation or not.
- Finally, the smallest `mid` value that allows allocation is our answer.
*/

/*
Time Complexity:
- Binary search runs in O(log(sum(arr))).
- The `isValid` function runs in O(n) time for each binary search iteration.
- Overall complexity: O(n * log(sum(arr))).

Space Complexity:
- We use only a few extra variables, so the space complexity is O(1) (excluding input storage).
*/
