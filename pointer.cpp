/*
### **Pointers and Dereferencing Explained with Code**

This program demonstrates the following key concepts in C++:
1. **Pointer Basics**  
2. **Pointer to Pointer**  
3. **Dereferencing Operator (`*`)**  
4. **Double Dereferencing (`**`)**  

---
*/
// #### **Code with Explanation**

/*

#include <iostream>
using namespace std;

int main() {

    // Step 1: Basic Variable and Pointer
    int a = 10;              // Declare an integer variable
    int* ptr = &a;           // Create a pointer 'ptr' that stores the address of 'a'

    // Step 2: Pointer to Pointer
    int** ptr2 = &ptr;       // Create a pointer-to-pointer 'ptr2' that stores the address of 'ptr'

    // Output Section: Displaying Values and Addresses
    cout << "Value of a: " << a << endl;               // Value of variable 'a'
    cout << "Address of a: " << &a << endl;           // Address of 'a' in memory
    cout << "Value of ptr: " << ptr << endl;           // Value stored in 'ptr' (address of 'a')
    cout << "Address of ptr: " << &ptr << endl;       // Address of pointer 'ptr' in memory
    cout << "Value of ptr2: " << ptr2 << endl;         // Value stored in 'ptr2' (address of 'ptr')
    cout << "Address of ptr2: " << &ptr2 << endl;     // Address of pointer-to-pointer 'ptr2' in memory

    // Step 3: Dereferencing Operator
    // Access the value stored at the memory address
    cout << "Dereferenced &a: " << *(&a) << endl;      // Value at the address of 'a' (same as 'a')
    cout << "Dereferenced ptr: " << *(ptr) << endl;    // Value stored at the address pointed by 'ptr' (same as 'a')
    cout << "Value of a: " << a << endl;              // Verifying that the value of 'a' remains unchanged

    // Step 4: Double Dereferencing
    // Access the value indirectly through the pointer-to-pointer
    cout << "Double Dereferenced ptr2: " << **(ptr2) << endl;  // Value stored at the address pointed by 'ptr2' (same as 'a')

    return 0;
}


*/

/*
### **Concepts in Detail**

#### **1. What is a Pointer?**
A pointer is a variable that stores the memory address of another variable.  
- Declaration: `int* ptr;`  
- Example: If `ptr = &a`, then `ptr` holds the address of `a`.

#### **2. Pointer to Pointer**
A pointer-to-pointer is a variable that stores the memory address of another pointer.  
- Declaration: `int** ptr2;`  
- Example: If `ptr2 = &ptr`, then `ptr2` holds the address of the pointer `ptr`.

#### **3. Dereferencing Operator (`*`)**
The `*` operator is used to access the value stored at the address a pointer is pointing to.  
- Example: If `ptr` points to `a`, then `*ptr` gives the value of `a`.

#### **4. Double Dereferencing (`**`)**
The `**` operator is used with a pointer-to-pointer to access the value stored at the address the first pointer is pointing to.  
- Example: If `ptr2` points to `ptr` and `ptr` points to `a`, then `**ptr2` gives the value of `a`.

---

### **Output for This Code**
For the given code, here’s how the output will look:
```
Value of a: 10
Address of a: 0x7ffcf5a8b1c4
Value of ptr: 0x7ffcf5a8b1c4
Address of ptr: 0x7ffcf5a8b1c8
Value of ptr2: 0x7ffcf5a8b1c8
Address of ptr2: 0x7ffcf5a8b1d0
Dereferenced &a: 10
Dereferenced ptr: 10
Value of a: 10
Double Dereferenced ptr2: 10
```

---

### **Key Takeaways**
1. **Pointers store addresses.**  
   - `ptr` stores the address of `a`.
   - `ptr2` stores the address of `ptr`.

2. **Dereferencing gives access to the value.**  
   - `*ptr` gives the value of `a`.  
   - `**ptr2` also gives the value of `a` through double dereferencing.

3. **Pointers to pointers are useful in dynamic memory allocation, passing references in functions, and more.**

---

### **Conclusion**
This code provides a solid foundation for understanding pointers, pointer-to-pointer, and the dereferencing concepts in C++. Mastering these concepts is essential for low-level programming, dynamic memory management, and building efficient programs in C++. 🚀

*/

/*

### **Understanding Null Pointers in C++**

This program demonstrates key concepts related to **null pointers** and **uninitialized pointers** in C++. These concepts are essential to avoid bugs like segmentation faults.




*/
// #### **Code with Explanation**


/*
#include <iostream>
using namespace std;

int main() {

    // Step 1: Uninitialized Pointer
    int* ptr; // Pointer declared but not initialized
    cout << "Value of ptr: " << ptr << endl;    // Outputs a garbage value (random memory address)

    // Dereferencing an uninitialized pointer (unsafe!)
    // This accesses an unknown memory location, which may lead to undefined behavior
    cout << "Dereferenced ptr: " << *(ptr) << endl; // May output garbage value or crash the program

    // Step 2: Null Pointer
    int* ptr2 = NULL; // Pointer initialized to NULL (it points to nothing)
    cout << "Value of ptr2: " << ptr2 << endl;  // Outputs '0', which is the value of NULL

    // Dereferencing a NULL pointer (unsafe!)
    // Attempting to dereference a NULL pointer results in a runtime error (Segmentation Fault)
    cout << "Dereferenced ptr2: " << *(ptr2) << endl; // This will cause a Segmentation Fault

    return 0;
}

*/

/*
---

### **Concepts Explained**

#### **1. What is a Pointer?**
A pointer is a variable that stores the memory address of another variable.  
- Declaration: `int* ptr;`
- If a pointer is not initialized, it contains a garbage (random) memory address by default.

---

#### **2. Uninitialized Pointers**
- When a pointer is declared but not initialized, it holds a **garbage value** (random memory address).
- Dereferencing an uninitialized pointer (accessing `*ptr`) can lead to **undefined behavior**, including crashes.

---

#### **3. Null Pointers**
- A **null pointer** is a pointer that is explicitly assigned the value `NULL` or `nullptr` (in C++11 and later).  
  Example: `int* ptr = NULL;`
- A null pointer points to **nothing** (address `0`) and is used to signify that the pointer is not associated with any valid memory location.
- **Dereferencing a null pointer causes a Segmentation Fault**, as there’s no valid memory to access.

---

### **Program Output**
Let’s break down the expected output:

1. **Uninitialized Pointer (`ptr`):**
   - `cout << ptr;` → Prints a **garbage value** (random memory address).
   - `cout << *ptr;` → Dereferencing produces a **garbage value** or may cause a crash.

2. **Null Pointer (`ptr2`):**
   - `cout << ptr2;` → Prints `0`, as `NULL` is defined as `0`.
   - `cout << *ptr2;` → **Segmentation Fault**, because `ptr2` doesn’t point to a valid memory location.

---
*/



// pass by value vs pass by reference

/*
#include <iostream>
using namespace std;

void changeA(int a){      // pass by value

  a =20;
}

int main(){
     int a = 10;

     changeA(a);
     cout << "inside main fn: " << a << endl;

   return 0;
}


void changeA(int* ptr){   // pass by reference using pointer

 *ptr = 20;
}

int main(){
     int a = 10;

     changeA(&a);
     cout << "inside main fn: " << a << endl;

   return 0;
}


void changeA(int &ptr){   // pass by reference using alias

 ptr = 20;
}

int main(){
     int a = 10;

     changeA(a);
     cout << "inside main fn: " << a << endl;

   return 0;
}


*/




// Array pointer

/*

#include <iostream>
using namespace std;

int main() {

  int arr[] = {1,2,3,4,5,};
  cout << arr << endl; // pointer
  cout << *arr << endl;  // pointer => 1


   return 0;

}

*/

// 1. **Pointers and Reassignment**
// 2. **Constant Pointers (Array Pointers)**



// ### **1. Pointers and Reassignment**

/*
int main() {
    int a = 15, b = 10;

    int* ptr = &a; // 'ptr' is a pointer pointing to the address of 'a'.
    ptr = &b;      // 'ptr' is reassigned to point to the address of 'b'.
    return 0;
}

*/

/*
#### **Explanation:**
- **Definition of a Pointer:** A pointer is a variable that stores the memory address of another variable.
- In the code above:
  - `ptr` is initialized with the address of `a` (`int* ptr = &a`).
  - `ptr` is then reassigned to the address of `b` (`ptr = &b`).
- **Pointers are reassignable:** You can make a pointer point to different variables during its lifetime.

---
*/
// ### **2. Constant Pointers (Array Pointers)**

/*
int main() {
    int arr[] = {1, 2, 3, 4, 5}; // 'arr' is an array (constant pointer).
    int a = 15;

    arr = &a; // Error: Cannot reassign 'arr' because it's a constant pointer.
    return 0;
}
*/
/*

#### **Explanation:**
- **Array as a Constant Pointer:** 
  - In C++, the name of an array (e.g., `arr`) is treated as a **constant pointer** to the first element of the array.
  - `arr` is equivalent to `&arr[0]`.
- **Reassignment Restriction:**
  - Once an array pointer is initialized, you cannot reassign it to point to another memory address (like `&a`).
  - The statement `arr = &a;` will result in a **compilation error** because `arr` is a **constant pointer**.

---

### **Comparison of Pointer Behavior**

| **Type**            | **Behavior**                                                                 |
|----------------------|-----------------------------------------------------------------------------|
| **Normal Pointer**   | Can be reassigned to point to different variables or memory addresses.      |
| **Constant Pointer** | Cannot be reassigned to point to a different memory address after initialization. |

---

### **Takeaways from the Code**

1. **Normal Pointers:**
   - You can reassign a pointer to a different memory address during its lifetime.
   - Example:
     ```cpp
     int a = 10, b = 20;
     int* ptr = &a;
     ptr = &b; // Valid
     ```

2. **Constant Pointers (Array Pointers):**
   - The name of an array is a constant pointer to its first element.
   - **Cannot be reassigned** to another memory address after initialization.
   - Example:
     ```cpp
     int arr[] = {1, 2, 3};
     arr = &a; // Invalid: Compilation error
     ```

---

### **Code Recap**

#### **Normal Pointer Example:**
```cpp
int main() {
    int a = 15, b = 10;

    int* ptr = &a; // 'ptr' points to 'a'.
    ptr = &b;      // 'ptr' now points to 'b'.
    return 0;
}
```

#### **Constant Pointer (Array) Example:**
```cpp
int main() {
    int arr[] = {1, 2, 3, 4, 5}; // 'arr' is a constant pointer to the first element of the array.
    int a = 15;

    arr = &a; // Error: 'arr' is a constant pointer, cannot be reassigned.
    return 0;
}
```

---

### **Conclusion**

From this code, we learned:
1. **Pointers can be reassigned** to point to different memory addresses.
2. **Array names are constant pointers**, which cannot be reassigned to another memory location.
3. **Key distinction:** While normal pointers are flexible, constant pointers (like array pointers) are fixed once initialized.

*/






















