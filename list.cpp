#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> myList;
    // list<int> myList = {30,10,20}
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(30);
    
    for(int val : myList){
        cout << val << " ";
    }
    cout << endl;
    
  return 0;
}


// size, erase, clear, begin, end,rbegin,rend,insert,front,back all these functions which are discussed in vector container are also available in the list container.
// Differences between vector container and list container

// 1. Vector is a dynamic array-based container. It allows duplicate elements and maintains the order of elements.
// 2. List is a doubly linked list-based container. It does not allow duplicate elements and maintains the order of elements.
// 3. Vector has faster access time (O(1)) for accessing elements at the beginning or end of the container, but slower access time (O(n)) for accessing elements in the middle of the container.
// 4. List has slower access time (O(n)) for accessing elements at the beginning or end of the container, but faster access time (O(1)) for accessing elements in the middle of the container.
// 5. Vector uses more memory compared to list.
// 6. Since list is implemented as a doubly linked list so therefore push_front, emplace_front and pop_front are available in the list container

/*

#include <iostream>
#include <vector>
#include <list>

int main() {
    // 1. Creating a vector and a list
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    std::list<int> myList = {1, 2, 3, 4, 5};

    // ------------------ Similar Functions ------------------

    // 2. size() - Returns the number of elements
    std::cout << "Vector size: " << myVector.size() << std::endl;
    std::cout << "List size: " << myList.size() << std::endl;

    // 3. front() - Access the first element
    std::cout << "Vector front: " << myVector.front() << std::endl;
    std::cout << "List front: " << myList.front() << std::endl;

    // 4. back() - Access the last element
    std::cout << "Vector back: " << myVector.back() << std::endl;
    std::cout << "List back: " << myList.back() << std::endl;

    // 5. begin() and end() - Get iterators to the first and last elements
    std::cout << "Vector elements: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "List elements: ";
    for (auto it = myList.begin(); it != myList.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // 6. rbegin() and rend() - Reverse iterators
    std::cout << "Vector reverse order: ";
    for (auto it = myVector.rbegin(); it != myVector.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "List reverse order: ";
    for (auto it = myList.rbegin(); it != myList.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // 7. insert() - Insert elements at a specific position
    myVector.insert(myVector.begin() + 2, 99);  // Insert at 3rd position in vector
    auto listIt = myList.begin();
    std::advance(listIt, 2);  // Move iterator to the 3rd position
    myList.insert(listIt, 99);

    std::cout << "Vector after insert: ";
    for (int val : myVector) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "List after insert: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    // 8. erase() - Remove an element at a specific position
    myVector.erase(myVector.begin() + 2);  // Erase 3rd element in vector
    listIt = myList.begin();
    std::advance(listIt, 2);  // Move iterator to 3rd position
    myList.erase(listIt);

    std::cout << "Vector after erase: ";
    for (int val : myVector) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "List after erase: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    // 9. clear() - Remove all elements
    myVector.clear();
    myList.clear();

    std::cout << "Vector size after clear: " << myVector.size() << std::endl;
    std::cout << "List size after clear: " << myList.size() << std::endl;

    // ------------------ Dissimilar Functions ------------------

    // Functions available in LIST but NOT in VECTOR:
    std::list<int> listExample = {10, 20, 30};

    // push_front() - Insert at the beginning (NOT available in vector)
    listExample.push_front(5);
    std::cout << "List after push_front(5): ";
    for (int val : listExample) std::cout << val << " ";
    std::cout << std::endl;

    // emplace_front() - Efficiently construct an element at the front (NOT in vector)
    listExample.emplace_front(1);
    std::cout << "List after emplace_front(1): ";
    for (int val : listExample) std::cout << val << " ";
    std::cout << std::endl;

    // pop_front() - Remove first element (NOT in vector)
    listExample.pop_front();
    std::cout << "List after pop_front(): ";
    for (int val : listExample) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}


*/

/*
# Vector vs. List in C++ STL: Differences in Front Operations 🚀

## Introduction 📝
When working with C++ Standard Template Library (STL), choosing the right container is crucial for performance optimization. Two commonly used sequence containers are **std::vector** and **std::list**.

A key difference between them is that `std::list` (a **doubly linked list**) supports **push_front()**, **emplace_front()**, and **pop_front()**, while `std::vector` (a **dynamic array**) does not. Let's explore why! 🔍

## Why `list` Supports `push_front()`, `emplace_front()`, and `pop_front()`? 💡
A **doubly linked list** consists of nodes where each node contains:
- A **data field** storing the element.
- A **pointer to the next node**.
- A **pointer to the previous node**.

Since `list` maintains references to both the first (**head**) and last (**tail**) elements, inserting and deleting at the **front** is an **O(1) operation** (constant time).

### Available Front Operations in `std::list`:
1. **`push_front(value)`** → Inserts an element at the beginning.
2. **`emplace_front(args...)`** → Constructs and inserts an element at the front more efficiently.
3. **`pop_front()`** → Removes the first element.

#### Example:
```cpp
#include <iostream>
#include <list>

int main() {
    std::list<int> myList;
    myList.push_front(10);
    myList.push_front(20);
    myList.emplace_front(30);
    
    for (int val : myList) {
        std::cout << val << " ";  // Output: 30 20 10
    }
    std::cout << std::endl;
    
    myList.pop_front();
    
    for (int val : myList) {
        std::cout << val << " ";  // Output: 20 10
    }
    return 0;
}
```

## Why `vector` Lacks `push_front()` and `pop_front()`? ❌
`std::vector` is implemented as a **dynamic array**, meaning:
- Elements are stored **contiguously** in memory.
- Inserting or removing elements at the **front** requires shifting all elements **O(n) time complexity** (slow!).

Thus, STL does **not** provide `push_front()` or `pop_front()` for vectors.

### Workaround: Manually Insert at Front (Inefficient) ⚠️
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector = {10, 20};
    
    // No push_front(), so we use insert()
    myVector.insert(myVector.begin(), 30);
    
    for (int val : myVector) {
        std::cout << val << " ";  // Output: 30 10 20
    }
    return 0;
}
```

## Performance Comparison 🏎️
| Operation | `std::vector` | `std::list` |
|-----------|-------------|------------|
| `push_front()` | ❌ Not available (O(n) if manually done) | ✅ Available (O(1)) |
| `emplace_front()` | ❌ Not available (O(n)) | ✅ Available (O(1)) |
| `pop_front()` | ❌ Not available (O(n)) | ✅ Available (O(1)) |

## When to Use Which? 🤔
- Use **`std::list`** when you need **frequent insertions/deletions at the front**.
- Use **`std::vector`** when you need **fast random access and efficient push_back() operations**.

## Conclusion 🎯
Choosing between `vector` and `list` depends on your use case. If **frequent front operations** are required, **use `list`**. Otherwise, **use `vector`** for better cache efficiency and random access. 🚀 Happy coding!


*/