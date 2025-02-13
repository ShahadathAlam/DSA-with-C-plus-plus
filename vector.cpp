/*
    📌 Understanding erase(), clear(), and shrink_to_fit() in std::vector

    📝 Summary:
    - erase()  -> Removes specific elements, reduces size, but does NOT change capacity.
    - clear()  -> Removes all elements, sets size to 0, but does NOT change capacity.
    - shrink_to_fit() -> Requests to reduce capacity to fit the current size.

    🚀 If you want to reclaim memory after removing elements, use shrink_to_fit().
*/

#include <iostream>
#include <vector>
using namespace std;

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
int main() {
    // ✅ Initial vector
    vector<int> v = {1, 2, 3, 4, 5};
    
    // �� Using insert() to insert 6 at index 3
    v.insert(v.begin() + 3, 6);
    cout << "After insert (adding 6 at index 3):\n";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
  


    return 0;
}