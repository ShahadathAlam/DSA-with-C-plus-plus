#include <iostream>
#include <map>

using namespace std;


// Map by deafult sort our data in an ascending order
// Key is unique
int main(){
    map<string, int> m;

    m["apple"] = 10;
    m["banana"] = 20;
    m["cherry"] = 30;

    m.insert({"watermelon",40});
    m.emplace("orange",50);
    // m.erase("banana");

    for(auto p : m){
        cout << p.first << " : " << p.second << endl;
    }

    cout << "count = " << m.count("apple") << endl;
    cout << "Number of Apple = " << m["apple"] << endl;

    if(m.find("orange") != m.end()){
        cout << "Found orange" << endl;
    } else {
        cout << "Not Found orange" << endl;
    }

    return 0;

}
