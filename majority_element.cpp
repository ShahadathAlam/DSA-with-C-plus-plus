#include <iostream>
#include <vector>   // for vector
#include <algorithm> // for sort
using namespace std;


// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Brute force (o(n^2))

// int majorityElement(vector<int> nums){


//     int n = nums.size();

//     for (int val: nums){
          
//           int freq = 0;
//         for(int el : nums){
//             if(val == el){
//               freq++;

//             } 
//         }

//         if(freq > n/2){
//             return val;
//         }
//     }


// }



// Optimize solution (O(nlogn))


// int majorityElement(vector<int> nums){


//     int n = nums.size();

//     sort(nums.begin(), nums.end());


//      int freq = 1, ans = nums[0];

//      for(int i = 1; i <n ; i++){

//        if(nums[i] == nums[i-1]){
//             freq++;
//        }
//        else{
//             freq = 1;
//        }

//        if(freq > n/2){
//            return ans;
//        }

//      }

// }




// Most Optimized solution which is Moore's voting algorithm (O(n))



int majorityElement(vector<int> nums){


    int n = nums.size();




     int freq = 0, ans = 0;

     for(int i = 0; i <n ; i++){

       if(freq == 0){
           ans = nums[i];
       }
       if(ans == nums[i]){
           freq++;
       } else{
        freq--;
       }
       

     }

     int count = 0;
     for(int num : nums){
       if(num == ans){
            count++;
       }
     }

     if(count > n/2){
         return ans;
     } else {
         return -1; // No majority element found
     }

}

int main(){
    // vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    // vector<int> nums = {1, 2, 2,1,1};
    vector<int> nums = {1, 2,3,4};

    int majorityEl = majorityElement(nums);

    cout << "Majority Element: " << majorityEl << endl;

    return 0;
}