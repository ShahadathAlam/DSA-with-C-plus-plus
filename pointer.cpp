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




// Pointer Arithmetic Operations

#include <iostream>
using namespace std;

/*
    This program demonstrates:
    1. Pointer Arithmetic
    2. Dereferencing Pointers
    3. Array as a Constant Pointer
    4. Accessing Array Elements using Pointer Arithmetic
*/

// Example 1: Pointer Arithmetic with Integer Pointers

/*
int main() {
    int a = 10;
    int* ptr = &a; // Pointer to 'a'
    
    cout << "Address of a: " << ptr << endl;
    ptr++; // Increment pointer by 1 int (4 bytes)
    cout << "Address after ptr++: " << ptr << endl; // Address increases by 4 bytes

    ptr = ptr + 2; // Move pointer forward by 2 ints (8 bytes)
    cout << "Address after ptr = ptr + 2: " << ptr << endl; // Address increases by 8 bytes

    return 0;
}
*/



/*
    Explanation:
    - Pointer Arithmetic:
      Adding or incrementing a pointer depends on the size of the type:
      For `int` (4 bytes), `ptr++` moves forward by 4 bytes.
      Adding `n` (e.g., ptr = ptr + n) moves the pointer by `n × size_of(type)`.
    - Output example:
      If the address of 'a' is 0x1000:
      After ptr++: 0x1004
      After ptr = ptr + 2: 0x100C
*/

// Example 2: Pointer Arithmetic with Arrays

/*
int main() {
    int arr[] = {1, 2, 3, 4, 5}; // 'arr' is a constant pointer to the first element of the array.
    
    cout << "First element using pointer arithmetic: " << *arr << endl;       // Access first element
    cout << "Second element using pointer arithmetic: " << *(arr + 1) << endl; // Access second element
    cout << "Third element using pointer arithmetic: " << *(arr + 2) << endl; // Access third element
    cout << "Fourth element using pointer arithmetic: " << *(arr + 3) << endl; // Access fourth element
    cout << "Fifth element using pointer arithmetic: " << *(arr + 4) << endl; // Access fifth element

    return 0;
}
*/


/*
    Explanation:
    - Array as a Pointer:
      The array name ('arr') acts as a constant pointer to the first element.
      Example: arr is equivalent to &arr[0].
    - Accessing Array Elements:
      Using pointer arithmetic: *(arr + i) gives the value at the i-th position.
      Using subscript notation: arr[i] is functionally equivalent to *(arr + i).
*/

// Example 3: Dereferencing Pointers

/*
int main() {
    int a = 10;
    int* ptr = &a; // Pointer to 'a'

    cout << "Value of a using dereferencing: " << *ptr << endl; // Access value stored at the pointer

    return 0;
}
*/
/*
    Explanation:
    - Dereferencing a Pointer:
      Use *ptr to access the value stored at the memory address the pointer points to.
    - Example:
      If 'ptr' points to 'a' (value 10), then *ptr retrieves 10.
*/

// Example 4: Constant Pointer in Arrays

/*
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    // arr = &a; // Error! 'arr' is a constant pointer and cannot be reassigned.

    cout << "First element of the array: " << *arr << endl; // Access first element
    cout << "Second element of the array: " << *(arr + 1) << endl; // Access second element

    return 0;
}
*/
/*
    Explanation:
    - The array name ('arr') is a constant pointer to the first element.
    - You cannot reassign 'arr' (e.g., arr = &a is invalid).
    - However, you can perform pointer arithmetic to traverse the array.
*/




#include <iostream>
using namespace std;

// Demonstrating Pointer Arithmetic, Comparison, Assignment, and Equality
int main() {

    // --- Pointer Arithmetic ---
    int a = 10, b = 20;
    int* ptr1 = &a;  // Pointer to 'a'
    int* ptr2 = &b;  // Pointer to 'b'

    cout << "Pointer Arithmetic:" << endl;
    cout << "Address of a (ptr1): " << ptr1 << endl;
    cout << "Address after ptr1 + 1: " << (ptr1 + 1) << endl; // Moves 4 bytes forward for int
    cout << "Difference between ptr2 and ptr1: " << ptr2 - ptr1 << " elements" << endl; // Subtract pointers
    cout << endl;

    // --- Pointer Comparison ---
    cout << "Pointer Comparison:" << endl;
    cout << "Address of ptr1: " << ptr1 << endl;
    cout << "Address of ptr2: " << ptr2 << endl;
    cout << "Is ptr1 < ptr2? " << (ptr1 < ptr2) << endl; // Compares addresses
    cout << endl;

    // --- Pointer Assignment ---
    cout << "Pointer Assignment:" << endl;
    int* ptr3 = ptr1; // Assigning ptr1 to ptr3
    cout << "Address of ptr1: " << ptr1 << endl;
    cout << "Address of ptr3: " << ptr3 << endl; // ptr3 now points to the same location as ptr1
    cout << endl;

    // --- Pointer Equality ---
    cout << "Pointer Equality:" << endl;
    cout << "Are ptr1 and ptr3 equal? " << (ptr1 == ptr3) << endl; // True, as they point to the same memory address
    cout << endl;

    // --- Invalid Pointer Addition Example ---
    cout << "Invalid Pointer Addition (Explained in Notes):" << endl;
    cout << "You cannot add two pointers directly (e.g., ptr1 + ptr2 is invalid)." << endl;
    cout << "Reason: Adding two addresses is undefined in the context of memory locations." << endl;
    cout << endl;

    return 0;
}

/*
NOTES:
1. Pointer Arithmetic:
   - Adding/Subtracting an integer to/from a pointer shifts the pointer by (integer × size of data type).
   - Subtracting two pointers gives the difference in terms of the number of elements between them.

2. Pointer Comparison:
   - Relational operators (<, >, <=, >=, ==, !=) can compare addresses stored in pointers.

3. Pointer Assignment:
   - Assigning one pointer to another makes both pointers point to the same memory address.

4. Pointer Equality:
   - Two pointers are equal if they store the same memory address.

5. Invalid Operations:
   - Adding two pointers directly is not allowed in C++ because it doesn't have a meaningful interpretation.

Use these concepts carefully, especially with uninitialized pointers, as they may lead to undefined behavior.
*/

