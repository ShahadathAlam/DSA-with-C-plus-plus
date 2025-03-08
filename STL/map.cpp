#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;


// Map by deafult sort our data in an ascending order
// Key is unique

/*
int main(){
    map<string, int> m;

    m["apple"] = 10;
    m["banana"] = 20;
    m["cherry"] = 30;

    m.insert({"watermelon",40});
    m.emplace("orange",50);
    // m.erase("banana");

    for(auto p : m){
        cout << p.first << " : " << p.second << endl;
    }

    cout << "count = " << m.count("apple") << endl;
    cout << "Number of Apple = " << m["apple"] << endl;

    if(m.find("orange") != m.end()){
        cout << "Found orange" << endl;
    } else {
        cout << "Not Found orange" << endl;
    }

    return 0;

}


*/


// multimap

// iterators mean actual memory location
// find function returns iterator

/*
int main(){
    multimap<string, int> m;

   
    m.emplace("tv",50);
    m.emplace("tv",50);
    m.emplace("tv",50);
    m.emplace("tv",50);
 
    // m.erase("tv");
    m.erase(m.find("tv"));
    for(auto p : m){
        cout << p.first << " : " << p.second << endl;
    }

 
    return 0;

}
*/

// unordered_map

int main(){
    unordered_map<string, int> m;

   
    m.emplace("banana",50);
    m.emplace("apple",150);
    m.emplace("watermelon",50);
    m.emplace("orange",50);
 
    
    for(auto p : m){
        cout << p.first << " : " << p.second << endl;
    }

 
    return 0;

}


































/*
### 🚀 **Understanding `map` in C++: Sorting & Unique Keys** 🧐  

In C++, the `map` container is a powerful **key-value data structure** that automatically maintains **sorted order** and ensures **unique keys**. Let's break this down using a simple example. 👇  

---

## **🔹 Key Features of `map`**
1️⃣ **Sorted Order** → Keys are **always sorted in ascending order** by default.  
2️⃣ **Unique Keys** → Each key in the map is **unique**, and inserting a duplicate key will **overwrite** the previous value.  
3️⃣ **Efficient Operations** → Insertion, deletion, and searching all have a time complexity of **O(log n)**, thanks to the underlying **Red-Black Tree** structure.  

---

## **🛠️ Code Example: Working with `map`**
```cpp
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> m;

    // Inserting elements into the map
    m["apple"] = 10;
    m["banana"] = 20;
    m["cherry"] = 30;

    m.insert({"watermelon", 40});  // Using insert()
    m.emplace("orange", 50);       // Using emplace()

    // Iterating through the map (keys will be sorted automatically)
    for(auto p : m){
        cout << p.first << " : " << p.second << endl;
    }

    // Checking if a key exists using count()
    cout << "count = " << m.count("apple") << endl;

    // Accessing a value using the key
    cout << "Number of Apples = " << m["apple"] << endl;

    // Searching for an element using find()
    if(m.find("orange") != m.end()){
        cout << "Found orange" << endl;
    } else {
        cout << "Not Found orange" << endl;
    }

    return 0;
}
```

---

## **🔹 Explanation of the Code**  
✅ **Automatic Sorting:** The keys in `map` are stored in **ascending order**. When we insert elements, they are automatically arranged in **alphabetical order** (since keys are strings).  

✅ **Unique Keys:** If we try to insert a duplicate key, it will **overwrite the existing value** instead of adding a new entry.  

✅ **Insertion Methods:**  
- `m["key"] = value;` → Inserts a key-value pair (or updates if key exists).  
- `m.insert({"key", value});` → Another way to insert values.  
- `m.emplace("key", value);` → More efficient than `insert` as it constructs elements in-place.  

✅ **Searching Methods:**  
- `m.count("key")` → Returns `1` if the key exists, otherwise `0`.  
- `m.find("key")` → Returns an iterator to the key if found, otherwise `m.end()`.  

✅ **Accessing Elements:** We can access values using `m["key"]`, but if the key does **not exist**, it will be **automatically inserted with a default value (0 for integers)**.  

---

## **📌 Output of the Code**
```
apple : 10
banana : 20
cherry : 30
orange : 50
watermelon : 40
count = 1
Number of Apples = 10
Found orange
```

👉 **Notice how the keys are printed in sorted order!** The order of insertion does **not** matter, as `map` automatically maintains **ascending order**.  

---

## **🔥 Key Takeaways**
🔹 `map` stores **keys in ascending order** automatically.  
🔹 **Duplicate keys are not allowed**, but inserting an existing key will update its value.  
🔹 Searching, inserting, and deleting operations take **O(log n)** time due to the **Red-Black Tree** structure.  
🔹 Use `count()` or `find()` to check if a key exists before accessing it.  


*/



/*

### **📌 Understanding `find()` and Iterators in C++ STL**  

Before diving into `find()`, let's first understand **iterators** and how they work in C++ STL.  

---

## **🔹 What is an Iterator?**
An **iterator** is an object that **points to a memory location** inside a container (like `vector`, `map`, `set`, etc.). It acts like a pointer, allowing us to **traverse** and **manipulate** elements efficiently.  

✅ **Think of it like a bookmark** 📖 in a book, helping us keep track of our position while iterating over elements.  

---

## **🔹 What Does `find()` Return in `multimap`?**
The `find()` function searches for a key in the `multimap` and returns an **iterator** pointing to the first occurrence of the key.  

- If the **key exists**, it returns an **iterator pointing to the first occurrence** of that key.  
- If the **key does not exist**, it returns `m.end()`, which is an iterator pointing **past the last element** (indicating that the key was not found).  

---

## **🛠️ Code Explanation**
```cpp
#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<string, int> m;

    // Inserting multiple values for the same key (multimap allows duplicates)
    m.emplace("tv", 50);
    m.emplace("tv", 50);
    m.emplace("tv", 50);
    m.emplace("tv", 50);

    // Using find() to get the first occurrence of "tv"
    auto it = m.find("tv"); 

    // Erasing only the first occurrence of "tv"
    if (it != m.end()) {  // Ensure "tv" exists before erasing
        m.erase(it);
    }

    // Printing the remaining elements
    for (auto p : m) {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}
```

---

## **🔹 Step-by-Step Execution**
1️⃣ **Inserting Elements:**  
   - Since `multimap` allows **duplicate keys**, `"tv"` is inserted **four times** with the same value `50`.  

2️⃣ **Using `find("tv")`:**  
   - `m.find("tv")` returns an **iterator** to the **first occurrence** of `"tv"`.  
   - If `"tv"` exists, `it` will point to the first element with `"tv"`.  
   - If `"tv"` does not exist, `it == m.end()`.

3️⃣ **Erasing Only the First `"tv"` Entry:**  
   - `m.erase(it);` removes only **one occurrence** (the one found by `find()`), leaving the other `"tv"` values intact.

4️⃣ **Printing Remaining Elements:**  
   - After deletion, three `"tv"` elements remain.

---

## **📌 Output**
```
tv : 50
tv : 50
tv : 50
```

✅ **Only one "tv" was erased because `find()` returned an iterator pointing to the first occurrence.**  

---

## **🔹 Key Takeaways**
✅ **Iterators** → Objects that point to elements inside containers (like pointers).  
✅ **`find()` in `multimap`** → Returns an **iterator to the first occurrence** of the key.  
✅ **If the key does not exist, `find()` returns `m.end()`**.  
✅ **`erase(it)` deletes only one occurrence** of the key, while `erase("tv")` would delete **all occurrences**.  

---




*/


/*
### 🚀 **Difference Between `unordered_map` and `map` from a Time Complexity Perspective**  

Both `map` and `unordered_map` store key-value pairs, but they differ in **implementation**, **ordering**, and **time complexity**. Let’s break it down.  

---

## **🔹 `map` (Ordered Map)**
🔹 Implemented using a **Red-Black Tree (Self-Balancing BST)** 🌳  
🔹 **Keys are always sorted** in ascending order.  
🔹 **Time Complexity:**  
   - **Insertion:** `O(log n)`  
   - **Search (`find`)**: `O(log n)`  
   - **Deletion:** `O(log n)`  

---

## **🔹 `unordered_map` (Unordered Map)**
🔹 Implemented using a **Hash Table** 🏷️  
🔹 **Keys are not stored in any specific order**.  
🔹 **Time Complexity:**  
   - **Insertion:** **O(1)** (Average), **O(n)** (Worst case due to hash collisions)  
   - **Search (`find`)**: **O(1)** (Average), **O(n)** (Worst case)  
   - **Deletion:** **O(1)** (Average), **O(n)** (Worst case)  

---

## **🛠️ Code Example**
```cpp
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<int, string> ordered_map;
    unordered_map<int, string> unordered_map;

    ordered_map[3] = "Three";
    ordered_map[1] = "One";
    ordered_map[2] = "Two";

    unordered_map[3] = "Three";
    unordered_map[1] = "One";
    unordered_map[2] = "Two";

    cout << "Ordered Map (Sorted Keys):" << endl;
    for(auto &p : ordered_map) {
        cout << p.first << " : " << p.second << endl;
    }

    cout << "\nUnordered Map (Random Order):" << endl;
    for(auto &p : unordered_map) {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}
```

---

## **📌 Output**
```
Ordered Map (Sorted Keys):
1 : One
2 : Two
3 : Three

Unordered Map (Random Order):
3 : Three
1 : One
2 : Two
```
🔹 **`map` maintains sorted order**, while **`unordered_map` does not**.  

---

## **🔥 When to Use Which?**
✔️ Use `map` when **you need sorted order** or range-based queries (e.g., lower bound, upper bound).  
✔️ Use `unordered_map` when **fast lookups are needed** and ordering is **not required**.  

### **💡 Summary**
| Feature            | `map` (Ordered) 🌳 | `unordered_map` (Unordered) 🏷️ |
|--------------------|-------------------|-------------------------------|
| **Implementation** | Red-Black Tree    | Hash Table                    |
| **Ordering**       | Sorted by key     | No ordering                    |
| **Insertion**      | O(log n)          | O(1) (Avg.), O(n) (Worst)     |
| **Search (`find`)**| O(log n)          | O(1) (Avg.), O(n) (Worst)     |
| **Deletion**       | O(log n)          | O(1) (Avg.), O(n) (Worst)     |
| **Best Use Case**  | Ordered Data, Range Queries | Fast Lookups, Random Access |

---

*/