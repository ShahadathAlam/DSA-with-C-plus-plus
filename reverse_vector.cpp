#include <iostream>
using namespace std;
#include <vector>

// Function to reverse a vector
void reverseVector(vector<int>& vec) {
    int left = 0;
    int right = vec.size() - 1;
    
    while (left < right) {
        // Swap elements at left and right indices
        int temp = vec[left];
        vec[left] = vec[right];
        vec[right] = temp;
        
        // Move indices towards the center
        left++;
        right--;
    }
}

// Function to print a vector
void printVector(const vector<int>& vec) {
    for (int num : vec) {
       cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Create a sample vector
   vector<int> numbers = {1, 2, 3, 4, 5};
    
   cout << "Original vector: ";
    printVector(numbers);
    
    // Reverse the vector
    reverseVector(numbers);
    
   cout << "Reversed vector: ";
    printVector(numbers);
    
    return 0;
}

