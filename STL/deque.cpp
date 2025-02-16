/*

### **🚀 `std::vector` vs `std::list` vs `std::deque` in C++ STL**  
In this section, we will compare **`std::vector`**, **`std::list`**, and **`std::deque`**, discussing their similarities and differences. We will also provide C++ code examples for better understanding.  

---

## **🔍 What Are These Containers?**  
### **1️⃣ `std::vector` (Dynamic Array)**
- A **contiguous** memory structure like an array.
- **Fast random access** (O(1) using `[]`).
- **Efficient at inserting/removing elements at the end** (O(1) amortized).
- **Slow insertions/deletions at the front or middle** (O(n) due to shifting).

### **2️⃣ `std::list` (Doubly Linked List)**
- **Non-contiguous** memory (each element is a separate node).
- **Fast insertions/deletions at both front and back** (O(1)).
- **No random access** (O(n) to reach an element).
- **Extra memory overhead** due to pointers.

### **3️⃣ `std::deque` (Double-Ended Queue)**
- **Hybrid structure**, implemented as a series of chunks.
- **Efficient insertions/removals at both front and back** (O(1)).
- **Faster random access than `list` but slower than `vector`**.
- **Less memory overhead than `list` but more than `vector`**.

---

## **⚡ Functionality Comparison**
| Function                            | `std::vector` | `std::list` | `std::deque` |
|------------------                   |-------------  |------------ |------------  |
| **Random Access (`[]`, `.at()`)**   | ✅ O(1)      | ❌ O(n)     | ✅ O(1) |
| **Insert at End (`push_back()`)**   | ✅ O(1)      | ✅ O(1)     | ✅ O(1) |
| **Insert at Front (`push_front()`)**| ❌ O(n)      | ✅ O(1)     | ✅ O(1) |
| **Insert in Middle (`insert()`)**   | ❌ O(n)      | ✅ O(1)     | ⚠️ O(n) (depends on position) 
                                                      (if iterator 
                                                      available) |
| **Delete at End (`pop_back()`)**    | ✅ O(1)      | ✅ O(1)     | ✅ O(1) |
| **Delete at Front (`pop_front()`)** | ❌ O(n)      | ✅ O(1)     | ✅ O(1) |
| **Memory Overhead**                 | 🔥 Low       | ❌ High     | ⚡ Medium |
                                                       (extra 
                                                       pointers) 
| **Cache Efficiency**                | ✅ High      | ❌ Low      | ⚠️ Moderate |
                                     (contiguous)    (non-contiguous)
                                          
| **Best For**                        |**Fast random  | **Frequent  | **Fast front 
                                        access,       |  insertions/|     
                                                      |             |   & back operations** |
                                          bulk        |             |
                                        operations**  |  deletions  |
                                                      |  in the     |
                                                      |  middle** 
                                    
                                                        

---


*/
// ## **📌 Code Example: Comparing `vector`, `list`, and `deque`**

#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main() {
    // Create containers
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    std::list<int> myList = {1, 2, 3, 4, 5};
    std::deque<int> myDeque = {1, 2, 3, 4, 5};

    // 1. Accessing elements
    std::cout << "Vector element at index 2: " << myVector[2] << std::endl;
    // std::cout << "List element at index 2: " << myList[2] << std::endl; // ❌ Not allowed
    std::cout << "Deque element at index 2: " << myDeque[2] << std::endl;

    // 2. Push & Pop at Front
    // ❌ Vector does not support push_front()
    myList.push_front(0);
    myDeque.push_front(0);

    // 3. Push & Pop at Back
    myVector.push_back(6);
    myList.push_back(6);
    myDeque.push_back(6);

    // 4. Pop from Front
    // ❌ Vector does not support pop_front()
    myList.pop_front();
    myDeque.pop_front();

    // 5. Pop from Back
    myVector.pop_back();
    myList.pop_back();
    myDeque.pop_back();

    // Print results
    std::cout << "Vector after operations: ";
    for (int val : myVector) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "List after operations: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Deque after operations: ";
    for (int val : myDeque) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}

/*

## **🚀 When to Use Which?**
✅ **Use `vector` when:**
- You need **fast random access**.
- You mostly **add/remove elements at the end**.
- You want **cache-friendly memory**.

✅ **Use `list` when:**
- You frequently **insert/delete elements in the middle**.
- You don’t need **random access**.
- You can afford **extra memory usage**.

✅ **Use `deque` when:**
- You need **fast insertions/removals at both front and back**.
- You want **better cache performance than `list`**.
- You need **some random access capability**.

---

## **🎯 Final Thoughts**
| Feature          | Best Choice |
|-----------------|------------|
| **Fastest Random Access** | `vector` |
| **Fastest Insert/Delete at Front** | `list` / `deque` |
| **Fastest Insert/Delete at Back** | `vector` / `list` / `deque` |
| **Fastest Insert/Delete in Middle** | `list` |
| **Best for Large Data & Contiguous Memory** | `vector` |
| **Best for Frequent Insertions & Deletions** | `list` |
| **Balanced Performance Between `vector` & `list`** | `deque` |

---

## **🔥 Summary**
- **Use `vector`** when you need **fast access and good memory locality**.
- **Use `list`** when you need **frequent insertions/deletions at arbitrary positions**.
- **Use `deque`** when you need **fast front and back insertions/removals but still require random access**.

*/