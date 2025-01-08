#include <iostream>
#include <vector>
using namespace std;
// Function to perform linear search on a vector
int linearSearch(const vector<int>& vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    // Create a sample vector
    vector<int> numbers = {4, 2, 9, 7, 5, 1, 6, 3, 8};
    
    // Print the vector
    cout << "Vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Perform linear search
    int target = 6;
    int result = linearSearch(numbers, target);
    
    // Print the result
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the vector" << endl;
    }
    
    // Try searching for an element that doesn't exist
    target = 10;
    result = linearSearch(numbers, target);
    
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the vector" << endl;
    }
    
    return 0;
}

