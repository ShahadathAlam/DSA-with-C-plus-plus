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