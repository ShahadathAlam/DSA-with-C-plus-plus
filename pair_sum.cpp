#include <iostream>
#include <vector>
using namespace std;

// Return pair(index) in sorted array with target sum

// // Brute force
// vector<int> pairSum(vector<int> arr, int target) {
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == target) {
//                 return {i, j};
//             }
//         }
//     }
//     return {}; // Return an empty vector if no pair is found
// }


// Two pointers approach (optimized solution)


vector<int> pairSum(vector<int> arr, int target) {
    int n = arr.size();
    int i =0, j= n-1;

    while (i<j) {
      int sum = arr[i]+arr[j];

      if(sum > target) {
       j--;

      } else if(sum < target) {
       i++;

      } else {

         return {i, j};
      }
    }
    return {}; // Return an empty vector if no pair is found
}


int main() {
    vector<int> sortedArray = {2, 7, 11, 15};
    int targetSum = 9;

    vector<int> result = pairSum(sortedArray, targetSum);

    // Check if the result is empty
    if (!result.empty()) {
        cout << result[0] << "  " << result[1] << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}
