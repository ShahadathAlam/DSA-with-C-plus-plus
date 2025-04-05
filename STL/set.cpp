#include <iostream>
#include <set>
using namespace std;


/*
int main(){
    set<int> mySet;
    mySet.insert(20);
    mySet.insert(10);
   
    mySet.insert(30);
    // mySet.insert(40);
    // mySet.insert(50);
   
    // mySet.insert(60);
 
    // cout << "lower bound = " << *(mySet.lower_bound(40)) << endl; 

    if(mySet.lower_bound(40) != mySet.end()){
        cout << "lower bound = " << *(mySet.lower_bound(40)) << endl; 
    } else {
        cout << "lower bound = " << "mySet.end() will be returned" << endl; 
    }
    // mySet.insert(10);
    // mySet.insert(20);
    // mySet.insert(30);

    // cout << mySet.size() << endl;
    
    for(auto i : mySet){
        cout << i << " ";
    }
    cout << endl;
}


*/

/*

int main(){
    set<int> mySet;
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(4);
    mySet.insert(5);
    
 
    cout << "lower bound = " << *(mySet.lower_bound(4)) << endl; 
    cout << "upper bound = " << *(mySet.upper_bound(4)) << endl; 

    
    return 0;
}



*/


// multiset
int main(){
    multiset<int> mySet;
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(4);
    mySet.insert(5);

    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    
 
    cout << "lower bound = " << *(mySet.lower_bound(4)) << endl; 
    cout << "upper bound = " << *(mySet.upper_bound(4)) << endl; 

    for(auto i : mySet){
        cout << i << " ";
    }
    return 0;
}
