#include <iostream>
#include <queue>
using namespace std;




int main() {

//   priority_queue<int> pq;  // default order which is descending order
  priority_queue<int, vector<int>, greater<int>> pq;  // ascending order


  pq.push(5);
  pq.push(3);
  pq.push(10);
  pq.push(4);


while(!pq.empty()) {
    cout <<  pq.top() << " ";
    pq.pop();  
  
}
  cout << endl;
    return 0;
}



/*
===========================================
📌 C++ Notes: Time Complexity of priority_queue Operations
===========================================
🔹 A priority_queue in C++ is implemented as a **binary heap** (max-heap by default).
🔹 The time complexity of its operations depends on how the heap is maintained.
===========================================
*/



// Including necessary libraries
#include <iostream>
#include <queue>  // For priority_queue

using namespace std;

int main() {
    // Creating a max-heap priority queue
    priority_queue<int> pq;

    /*
    ==============================
    🔹 Complexity: push() → O(log n)
    ==============================
    - Inserts an element at the end.
    - Performs **heapify-up** (sift-up) to maintain the heap property.
    */
    pq.push(10);
    pq.push(50);
    pq.push(30);
    pq.push(40);
    pq.push(20);

    /*
    ==============================
    🔹 Complexity: top() → O(1)
    ==============================
    - Returns the root (largest element in max-heap).
    - Accessing the top element is **instant** because it is stored at index 0.
    */
    cout << "Top element: " << pq.top() << endl; // Output: 50

    /*
    ==============================
    🔹 Complexity: pop() → O(log n)
    ==============================
    - Removes the root (largest element).
    - Moves the last element to the root and performs **heapify-down** (sift-down).
    */
    pq.pop();  // Removes 50

    cout << "New top element after pop: " << pq.top() << endl; // Output: 40

    return 0;
}

/*
===========================================
📌 Summary of priority_queue Complexity:
===========================================
| Operation  | Time Complexity | Explanation |
|------------|----------------|-------------|
| `top()`    | O(1)            | Accesses root directly. |
| `push(x)`  | O(log n)        | Inserts x & performs heapify-up. |
| `pop()`    | O(log n)        | Removes root & performs heapify-down. |
===========================================
🔹 `top()` is **fast (O(1))** because it only accesses the root.
🔹 `push()` and `pop()` take **O(log n)** because they involve **heap restructuring**.
===========================================
*/
