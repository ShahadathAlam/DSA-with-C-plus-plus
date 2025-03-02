/* 
## **📜 C++ Notes: Stack (LIFO - Last In, First Out) 📜**  

### **📌 What is a Stack?**  
- A **stack** is a **non-sequential container** that follows the **LIFO (Last In, First Out)** principle.  
- This means **the last inserted element is the first one to be removed**.  

### **🔍 Stack Analogy**  
Think of a **stack of plates** 🍽️:  
- You **add** new plates on **top**.  
- When you **remove** a plate, you take from **the top first**.  

---

## **📌 Stack in C++ (`std::stack<T>`)**
- **Defined in:** `<stack>` header  
- **Does NOT allow random access** (unlike `vector` or `list`).  
- Elements can **only** be accessed, inserted, or removed **from the top**.  

---

## **🛠️ Stack Operations in C++**
| Function      | Description                          | Time Complexity |
|--------------|----------------------------------|----------------|
| `push(x)`    | Adds `x` to the top of the stack | **O(1)** |
| `pop()`      | Removes the top element         | **O(1)** |
| `top()`      | Returns the top element        | **O(1)** |
| `empty()`    | Returns `true` if stack is empty | **O(1)** |
| `size()`     | Returns the number of elements  | **O(1)** |

---

## **🚀 Example: Implementing a Stack in C++**
```cpp
#include <iostream>
#include <stack>  // Include stack header file

using namespace std;

int main() {
    stack<int> myStack; // Create a stack of integers

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);  // Last inserted (Top of stack)

    cout << "Top element: " << myStack.top() << endl; // 30

    myStack.pop(); // Remove 30
    cout << "New top element: " << myStack.top() << endl; // 20

    return 0;
}
```

### **📌 Output**
```
Top element: 30
New top element: 20
```

---

## **🎯 Why Use a Stack?**
Stacks are useful in:  
✔ **Undo/Redo functionality** (e.g., text editors)  
✔ **Backtracking algorithms** (e.g., solving mazes, recursion)  
✔ **Expression evaluation** (e.g., infix to postfix conversion)  
✔ **Function calls in programming** (call stack)  

---

## **🔥 Final Takeaway**
- **Stack is a non-sequential container** 🚀  
- **Follows LIFO (Last In, First Out)**  
- **No random access to elements** (you can only access the top)  
- **Efficient for push & pop operations** (O(1) time complexity)  

*/

#include <iostream>
#include <stack>
using namespace std;



/*
int main() {

  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
//   cout << "Top element is: " << s.top() << endl;

while(!s.empty()) {
    cout << "Top element is: " << s.top() << endl;
    s.pop();  // remove top element from stack
  
}
  
    return 0;
}
*/
int main() {

  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);

   stack<int> s2;

   s2.swap(s);

   cout << "s size after swapping " << s.size() << endl;
   cout << "s2 size after swapping " << s2.size() << endl;

    return 0;
}
