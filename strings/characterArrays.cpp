#include <iostream>
#include <string.h>
using namespace std;

/*
int main() {
    char str[100];
    cout << "Enter a char array: ";
    cin.getline(str,100,'$');
    cout << "output : " << str << endl;
    return 0;
}
*/


/*
int main() {
    char str[100];
    cout << "Enter a char array: ";
    cin.getline(str,100);
  
    for(char ch : str){
        cout << ch << ' ';
    }
    cout << endl;
    return 0;
}
    */


 /*
 int main() {
    // 1
    // char str[] = "apna college";
   
  
    // cout << strlen(str) <<endl;


    // 2
    // char str[100];
    // cout << "Enter a char array: ";
    // cin.getline(str,100);
  
  
    //   cout << strlen(str) <<endl;


 // 3
     char str[] = "apna college";
     int len = 0;
     for(int i=0; str[i] != '\0'; i++){

        len++;
     }
     cout << len << endl;


   
    return 0;
}
 */   


 // string class in STL

/*
int main() {
  string str = "apna college";
  cout << str << endl;


   
    return 0;
}
    */

// Difference between string class & character array

// 1. string is dynamic in nature and it can be resize in runtime while character array is static in nature and its size is fixed at compile time and can not be resized in runtime 

/*

int main() {
  string str = "apna college";
  cout << str << endl;

  // string is dynamic in nature and it can be resize in runtime
   str = "hello";
  cout << str << endl;
 
  // character array is static in nature and its size is fixed at compile time and can not be resized in runtime
   char chArr[] = "apna college";
   chArr = "hello";

    return 0;
}
    
*/
int main() {
  string str = "apna college";
  cout << str << endl;


    return 0;
}