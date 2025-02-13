/*
    📌 Understanding erase(), clear(), and shrink_to_fit() in std::vector

    📝 Summary:
    - erase()  -> Removes specific elements, reduces size, but does NOT change capacity.
    - clear()  -> Removes all elements, sets size to 0, but does NOT change capacity.
    - shrink_to_fit() -> Requests to reduce capacity to fit the current size.

    🚀 If you want to reclaim memory after removing elements, use shrink_to_fit().
*/

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // ✅ Initial vector
//     vector<int> v = {1, 2, 3, 4, 5};
//     cout << "Before any operation:\n";
//     cout << "Size = " << v.size() << ", Capacity = " << v.capacity() << endl;

//     // 🔹 Using erase() to remove the third element (index 2)
//     v.erase(v.begin() + 2);
//     cout << "\nAfter erase (removing index 2):\n";
//     cout << "Size = " << v.size() << ", Capacity = " << v.capacity() << endl;
//     // ⚠️ Size decreased, but capacity remains unchanged

//     // 🔹 Using clear() to remove all elements
//     v.clear();
//     cout << "\nAfter clear (removing all elements):\n";
//     cout << "Size = " << v.size() << ", Capacity = " << v.capacity() << endl;
//     // ⚠️ Vector is empty, but capacity remains the same

//     // 🔹 Using shrink_to_fit() to reduce capacity
//     v.shrink_to_fit();
//     cout << "\nAfter shrink_to_fit():\n";
//     cout << "Size = " << v.size() << ", Capacity = " << v.capacity() << endl;
//     // ✅ Capacity may shrink to match the size (depends on implementation)

//     return 0;
// }

/*
   🎯 Expected Output (capacity depends on compiler implementation):
   -------------------------------------
   Before any operation:
   Size = 5, Capacity = 5

   After erase (removing index 2):
   Size = 4, Capacity = 5  <-- Capacity unchanged

   After clear (removing all elements):
   Size = 0, Capacity = 5  <-- Capacity unchanged

   After shrink_to_fit():
   Size = 0, Capacity = 0  <-- Capacity reduced (if supported)
*/


// insert
// int main() {
//     // ✅ Initial vector
//     vector<int> v = {1, 2, 3, 4, 5};
    
//     // �� Using insert() to insert 6 at index 3
//     v.insert(v.begin() + 3, 6);
//     cout << "After insert (adding 6 at index 3):\n";
//     for (int num : v) {
//         cout << num << " ";
//     }
//     cout << endl;
  


//     return 0;
// }


/*
    📌 Why are insert() and erase() Costly in std::vector?

    📝 Time Complexity Analysis:
    - insert() at the end -> O(1) Amortized (unless reallocation occurs)
    - insert() in the middle -> O(n) (shifts elements to the right)
    - erase() at the end -> O(1) (no shifting required)
    - erase() in the middle -> O(n) (shifts elements to the left)

    ❌ std::vector operations can be costly when inserting or deleting from the middle
    ✅ Alternative: Use std::list (Doubly Linked List) for O(1) insert/erase

    🔹 Best Use Cases:
       - Use std::vector when fast **random access (O(1))** is required.
       - Use std::list when frequent **insertions/deletions in the middle (O(1))** are needed.
*/

// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;

// int main() {
//     cout << "🔹 Using std::vector:\n";

//     vector<int> v = {1, 2, 3, 4, 5};
//     cout << "Before insert: ";
//     for (int num : v) cout << num << " ";
//     cout << endl;

//     // Insert at index 2 (O(n) because elements shift right)
//     v.insert(v.begin() + 2, 10);
//     cout << "After insert at index 2: ";
//     for (int num : v) cout << num << " ";
//     cout << endl;

//     // Erase from index 2 (O(n) because elements shift left)
//     v.erase(v.begin() + 2);
//     cout << "After erase at index 2: ";
//     for (int num : v) cout << num << " ";
//     cout << endl;

//     cout << "\n🔹 Using std::list (Efficient Insert/Delete):\n";

//     list<int> lst = {1, 2, 3, 4, 5};
//     cout << "Before insert: ";
//     for (int num : lst) cout << num << " ";
//     cout << endl;

//     // Move iterator to index 2
//     auto it = lst.begin();
//     advance(it, 2);

//     // Insert at index 2 (O(1), no shifting)
//     lst.insert(it, 10);
//     cout << "After insert at index 2: ";
//     for (int num : lst) cout << num << " ";
//     cout << endl;

//     // Erase from index 2 (O(1), no shifting)
//     it = lst.begin();
//     advance(it, 2);
//     lst.erase(it);
//     cout << "After erase at index 2: ";
//     for (int num : lst) cout << num << " ";
//     cout << endl;

//     return 0;
// }

/*
   🎯 Expected Output:
   --------------------------
   🔹 Using std::vector:
   Before insert: 1 2 3 4 5 
   After insert at index 2: 1 2 10 3 4 5 
   After erase at index 2: 1 2 3 4 5 

   🔹 Using std::list (Efficient Insert/Delete):
   Before insert: 1 2 3 4 5 
   After insert at index 2: 1 2 10 3 4 5 
   After erase at index 2: 1 2 3 4 5 
*/

/*
   🏆 Summary Table:
   -------------------------------------
   Operation            | std::vector    | std::list
   -------------------------------------
   push_back()          | O(1) Amortized | O(1)
   insert() at end      | O(1) Amortized | O(1)
   insert() in middle   | ❌ O(n)        | ✅ O(1)
   erase() at end       | O(1)           | O(1)
   erase() in middle    | ❌ O(n)        | ✅ O(1)

   ✅ Use std::vector for fast **random access (O(1))**.
   ✅ Use std::list for **frequent insertions/deletions in the middle (O(1))**.
*/



// --------------------- Iterators in Vectors --------------------------------

#include <iostream>
#include <vector>
using namespace std;

// int main() {


//     // Create a vector with some elements
//     vector<int> v = {1, 2, 3, 4, 5};
    
//     // Print the vector elements using iterators
//     cout << "Using iterators: ";

//     vector<int>::iterator it;
//     for ( it= v.begin(); it!= v.end(); it++) {
//         cout << *it << " ";
//     }
//     cout << endl;

   // ------ modern way to define iterator --------------------------------
    // for (auto it= v.begin(); it!= v.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

//     return 0;
// }



// reverse iterator
int main() {
    // Create a vector with some elements
    vector<int> v = {1, 2, 3, 4, 5};
    
    // Print the vector elements using reverse iterator
    cout << "Using reverse iterators: ";
    
    // -----defining reverse iterator way 1 --------------------
    // vector<int>::reverse_iterator rit;
    // for (rit= v.rbegin(); rit!= v.rend(); rit++) {
    //     cout << *rit << " ";
    //     // cout << &(*rit) << " ";
    //     // cout << rit << " "; // this will not work
    //     // cout << static_cast<void*>(&*rit) << " ";
    // }
    // cout << endl;

   // -----defining reverse iterator way 2 --------------------
    // for (vector<int>::reverse_iterator rit= v.rbegin(); rit!= v.rend(); rit++) {
    //     cout << *rit << " ";
    // }
    // cout << endl;
   

    // -----defining reverse iterator way 3 (modern) --------------------
    for (auto rit= v.rbegin(); rit!= v.rend(); rit++) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}

