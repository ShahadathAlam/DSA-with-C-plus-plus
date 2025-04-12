#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Ascending order default

/*
int main(){
     
    int arr[5] = {3,5,1,8,2};

    sort(arr, arr+5);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
*/

/*
int main(){
     
    vector<int> vec = {3,5,1,8,2};

    sort(vec.begin(), vec.end());
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

*/


// to sort in a descending order then you must use comperator (greater<int>())

/*
int main(){
     
    vector<int> vec = {3,5,1,8,2};

    sort(vec.begin(), vec.end(),greater<int>());
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

*/

// by default sorting is done on the basis of first value of the pair in ascending order

/*
int main(){
     
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(), vec.end());
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
   

    return 0;
}
*/


// now if we want to sort pairs on the basis of second value of the pair then we need to define a custom comparator. A custom comparator is nothing but a boolean function which return true/false based upon some comparison.


/*

// custom comparators

bool comparator(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    else return false;
}

int main(){
     
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(), vec.end(),comparator);
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
   

    return 0;
}


*/


// Here sorting is done on the basis of second value but if second value is equal then sorting will be done on the basis of first value.
bool comparator(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return true;
    if(p1.first > p2.first) return false;
    
   
}

int main(){
     
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(), vec.end(),comparator);
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
   

    return 0;
}


