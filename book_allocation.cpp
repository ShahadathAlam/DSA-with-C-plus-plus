#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m, int maxAllocatedPages){
          
          int students = 1;
          int pages = 0;

          for(int i = 0; i < n; i++){

                if(arr[i] > maxAllocatedPages) return false;
                if(pages + arr[i] <= maxAllocatedPages) {
                
                pages += arr[i];
                } else {
                  students++;
                  pages = arr[i];
                }
          }

          return students > m ? false : true;


}
int bookAllocation(vector<int> &arr,int n, int m){
     if(m > n) return -1;

     int st = 0;
     int sum = 0;
     int ans = -1;
     for(int i=0; i<n; i++) sum += arr[i];
 
     
     while( st <= sum ){

        int mid = st + (sum-st)/2;

        if(isValid(arr,n,m,mid)) {  // Left
           ans = mid;
           sum = mid -1;

        } else { // Right
             st = mid + 1;
        }
     }

 return ans;

}

int main(){
        vector<int> arr = {2,1,3,4};
        int n = arr.size();
        int m = 2;

        cout << bookAllocation(arr,n,m) << endl;

    return 0;
}
