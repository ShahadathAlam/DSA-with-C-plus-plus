#include <iostream>

#include <vector>
// #include <utility>  // for pair
using namespace std;

// Pair Container 
int main() {

    // pair<int, int> p = {1,5};
    // cout << "First element: " << p.first << endl;
    // cout << "Second element: " << p.second << endl;

    // pair<string, double> p = {"John", 30.5};
    // cout << "First element: " << p.first << endl;
    // cout << "Second element: " << p.second << endl;

    // pair can be used as data type
    // pair<string, pair<int, double>> p = {"John", {30, 30.5}};
    // cout << "First element: " << p.first << endl;
    // cout << "Second element: First number: " << p.second.first << ", Second number: " << p.second.second << endl;

    // pair can be used in vector
    // vector<pair<string, int>> vec;
    // vec.push_back({"John", 25});
    // vec.push_back({"Alice", 30});
    // cout << "First element: " << vec[0].first << ", Second element: " << vec[0].second << endl;
    // cout << "Second element: " << vec[1].first << ", Second element: " << vec[1].second << endl;


    vector<pair<int,int>> vec = {{10,20}, {20,30}};

    // for(auto p : vec) {
    //     cout << "First element: " << p.first << ", Second element: " << p.second << endl;
    // }
       
    vec.push_back({30,40});  // insert
    vec.emplace_back(40,50); // in-place objects create

    for(pair<int,int> p: vec){

        cout << "First element: " << p.first << ", Second element: " << p.second << endl;
    }


    return 0;
}
