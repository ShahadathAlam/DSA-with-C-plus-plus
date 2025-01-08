#include <iostream>
#include <climits>
using namespace std;


int maximumSubarraySum (int arr[], int length){


    int maxSum = INT_MIN;

    for(int st=0; st<length; st++){

        int currentSum = 0;

        for(int end=st; end<length; end++){
            currentSum += arr[end];

            maxSum = max(maxSum, currentSum);

        }
    }

    return maxSum;
 
}
int main(){

    int arr[5] = {1, 2, 3, 4, 5};

     int n = 5;

     cout << "Maximum sum of a subarray = " << maximumSubarraySum(arr, n) << endl;

 
    return 0;
}