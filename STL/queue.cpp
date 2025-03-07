#include <iostream>
#include <queue>
using namespace std;




int main() {

  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
//   cout << "Front element is: " << q.front() << endl;

while(!q.empty()) {
    cout <<  q.front() << " ";
    q.pop();  
  
}
  cout << endl;
    return 0;
}




/*
### **📌 Why are `push`, `front`, and `pop` of `queue` O(1)?**  

A **queue** follows the **FIFO (First In, First Out)** principle. It is typically implemented using a **doubly linked list** or a **circular buffer (deque)** in C++.  

#### **🚀 Queue Operations and Their Time Complexity**
| Operation | Time Complexity | Why? |
|-----------|----------------|------|
| `push(x)` | **O(1)** | Inserts at the **rear** (tail), takes constant time. |
| `front()` | **O(1)** | Returns the **front element** without shifting elements. |
| `pop()`   | **O(1)** | Removes from the **front** (head), takes constant time. |

#### **🛠️ Why Are All These O(1)?**
- **`push(x)`:** Adding a new element at the **rear** does not require shifting elements, just updating the pointer.  
- **`front()`:** The **head pointer** always keeps track of the front element, so accessing it is constant time.  
- **`pop()`:** Removing the **front** element only requires updating the head pointer, which is O(1).  

✅ **No shifting of elements like in `vector`, so operations remain O(1).**

---

### **📌 Why are `push`, `top`, and `pop` of `stack` O(1)?**  

A **stack** follows the **LIFO (Last In, First Out)** principle and is usually implemented using a **linked list** or a **dynamic array (vector/deque)**.  

#### **🚀 Stack Operations and Their Time Complexity**
| Operation | Time Complexity | Why? |
|-----------|----------------|------|
| `push(x)` | **O(1)** | Inserts at the **top**, no shifting required. |
| `top()`   | **O(1)** | Directly accesses the **top** element. |
| `pop()`   | **O(1)** | Removes from the **top**, just updating the pointer. |

#### **🛠️ Why Are All These O(1)?**
- **`push(x)`:** Adds a new element at the **top**, requires no shifting, just updating a pointer.  
- **`top()`:** The **top pointer** always keeps track of the last inserted element, so accessing it is O(1).  
- **`pop()`:** Simply updates the top pointer, no extra work required.  

✅ **No shifting of elements, so all operations run in O(1).**

---

### **🔥 Final Comparison: Queue vs Stack**
| Operation  | Queue (FIFO) O(1) | Stack (LIFO) O(1) |
|------------|------------------|------------------|
| `push(x)`  | Add at rear       | Add at top      |
| `front()`  | Access front      | ❌ Not available |
| `top()`    | ❌ Not available  | Access top      |
| `pop()`    | Remove front      | Remove top      |

✅ Both **queue and stack operations are O(1)** because they only modify pointers, avoiding expensive shifts. 🚀  

Would you like a **code example** demonstrating both? 😊

*/