#include <iostream>
using namespace std;
// g++ -o Sort_Colors.exe Sort_Colors.cpp
// ./Sort_Colors.exe
// g++ Sort_Colors.cpp -o Sort_Colors.exe && ./Sort_Colors.exe


// int main(){
//     int a, b;
//     cout << "Enter a: ";
//     cin >> a;

//      cout << "Enter b: ";
//      cin >> b;

//  int diff = a - b;
//  cout << "diff = " << diff << endl;
//     return 0;
// }


// int main(){
  
//  cout << (5/(double)2) << endl;
//     return 0;
// }


// int main(){
//     char ch;
//     cout << "Enter char: ";
//     cin >> ch;

//     if(ch >= 65 && ch <= 90) {   // implicit data type conversion : i.e. A -> 65 (ASCII value )
//         cout << "uppercase\n";
//     } else {
//         cout << "lowercase\n";
//     }
//     return 0;
// }

// int main(){
//     int n = 50;
//     int sum = 0;
//     for(int i=1; i<= n ; i++){
//         sum += i;
//         if(i == 5){
//             break;
//         }
//     }
//     cout << "sum = " << sum << endl;
//     return 0;
// }


// int main(){
//     int n = 3;
//     int i = 1;
//     int oddSum = 0;


//     while( i<= n ){
       
//         if(i%2 != 0){
//            oddSum += i;
//            i++;
//         }
//         i++;
//     }
//     cout << "odd sum = " << oddSum << endl;
//     return 0;
// }


// int main(){
   


//     // while( 3> 5 ){
//     //    cout << "Hello" << endl;
//     // }
    

//     do
//     {
        
//          cout << "Hello" << endl;
//     } while (  3> 5 ); // eben though condition is always false but yet Hello is printed once.
    

  
   
//     return 0;
// }



// int main(){
   

// int n = 7;
// bool isPrime = true;
// // for(int i=2; i <= n-1;i++){
// for(int i=2; i*i <= n;i++){   // check 2 to √n bcz after √n*√n there is no repeating factor
//     if(n% i == 0) {
//         isPrime = false;
//         break;
//     }
// }
//  if(isPrime == true){
//   cout << "prime number\n";
//  } else {
//      cout << "non-prime number\n";
//  }
  
   
//     return 0;
// }


// int main(){
   

// int n = 3;
// int product = 1;

// for(int i=1; i<= n; i++){
    
//     product = product * i;
// }
  
//    cout << product << endl;
//     return 0;
// }

// int main(){
   

// int n = 3;
// char ch = 'A';

// for(int i=1; i<= n; i++){
    
//     for(int j=1; j<= n; j++){
//     cout << ch << " ";
//     ch++;
    
// }

//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 3;
// char ch = 'A';

// for(int i=1; i<= n; i++){
    
//     for(int j=1; j<= n; j++){
//     cout << ch << " ";
//     ch++;
    
// }

//  cout << endl;
// }
  
  
//     return 0;
// }


// Bad complexity

// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    
//     for(int j=0; j<n; j++){
//    if(i == j) {
//     for(int k=0; k <= i;k++){
//         cout << "*" << "";
//     }
//    }
    
// }

//  cout << endl;
// }
  
  
//     return 0;
// }

// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    
//     for(int j=0; j<i+1; j++){
//    cout << "*" << " ";
    
// }

//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 5;

//  int num = 1;
// for(int i=0; i< n; i++){
   

//     for(int j=0; j<i+1; j++){
//    cout << num << " ";
  
    
// }
//  num++;
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 5;

 
// for(int i=0; i< n; i++){
   

//     for(int j=0; j<i+1; j++){
//    cout << i+1 << " ";
  
    
// }

//  cout << endl;
// }
  
  
//     return 0;
// }



// int main(){
   

// int n = 5;

 
// for(int i=0; i< n; i++){
   

//     for(int j=0; j<i+1; j++){
//    cout << (char)(65+i) << " ";
  
    
// }

//  cout << endl;
// }
  
  
//     return 0;
// }



// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
//     int num = 1;

//     for(int j=0; j<i+1; j++){
//    cout << num << " ";
//   num++;
    
// }
//  num++;
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    

//     for(int j=1; j<i+2; j++){
//    cout << j << " ";
 
    
// }
 
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    

//     for(int j=i+1; j > 0; j--){
//    cout << j << " ";
 
    
// }
 
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;
// int num =1;

// for(int i=0; i< n; i++){
    

//     for(int j=1; j<i+2; j++){
//    cout << num << " ";
//  num++;
    
// }
 
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;
// char ch = 'A';

// for(int i=0; i< n; i++){
    

//     for(int j=1; j<i+2; j++){
//    cout << ch << " ";
//  ch++;
    
// }
 
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    

//     for(int j=0; j < i; j++){
//    cout << " ";
 
    
// }
//    for(int j=0; j < n-i; j++){
//    cout << i+1;
 
    
// }
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    

//     for(int j=0; j < i; j++){
//    cout << " ";
 
    
// }
//    for(int j=0; j < n-i; j++){
//    cout << (char)(65+i);
 
    
// }
//  cout << endl;
// }
  
  
//     return 0;
// }

// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    

//     for(int j=0; j < i; j++){
//    cout << " ";
 
    
// }
//    for(int j=0; j < n-i; j++){
//    cout << i+1;
 
    
// }
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    

//     for(int j=0; j < n-i-1; j++){
//    cout << " ";
 
    
// }
//    for(int j=0; j < i+1; j++){
//    cout << (char)(65+j);
 
    
// }


// for(int j=i-1; j >= 0; j--){
//    cout << (char)(65+j);
 
    
// }
//  cout << endl;
// }
  
  
//     return 0;
// }


// int main(){
   

// int n = 4;


// for(int i=0; i< n; i++){
    

//     for(int j=0; j < n-i-1; j++){
//    cout << " ";
 
    
// }
//    for(int j=0; j < i+1; j++){
//    cout << (char)(65+j);
 
    
// }


// for(int j=i-1; j >= 0; j--){
//    cout << (char)(65+j);
 
    
// }
//  cout << endl;
// }
  
  
//     return 0;
// }




// Butterfly Pattern

// int main(){
   

// int n = 4;
//   // top

// for(int i=0; i< n; i++){
    
    
//      for(int j=0; j<i+1; j++){
//    cout << "*";
 
    
// }
//    for(int j=0; j<2*(n-i-1); j++){
//    cout << " ";
 
    
// }


//  for(int j=0; j<i+1; j++){
//    cout << "*";
 
    
// }
//  cout << endl;
// }
  

//     // bottom
// for(int i=0; i< n; i++){
    

//      for(int j=0; j<n-i; j++){
//    cout << "*";
 
    
// }
//    for(int j=0; j<2*i; j++){
//    cout << " ";
 
    
// }


//   for(int j=0; j<n-i; j++){
//    cout << "*";
 
    
// }
//  cout << endl;
// }
      
//     return 0;
// }


// // Problem
// // WAF to check if a num is prime or not

//  string isPrime(int num){
//   if(num <= 1) {
//    return "This is a Non-prime Number";
//   }
 
//  for(int i = 2; i < num;i++){
//    if(num % i == 0){
//       return "This is a Non-prime Number";
//    } 
//  }
  
//   return "This is a Prime Numberr";
 
//  }



// int main(){
   
//     int num = 9;
//     cout << isPrime(num) << endl;
  
      
//     return 0;
// }


// // Problem
// // WAF to print all prime numbers from 2 to N

//  void printPrime(int num){
//   if(num > 1) {

// for(int i = 2; i <= num;i++){
   
    
//     if(i % 2 != 0){
//       cout << i << endl;
//     }
   
//  }
  
  
//   }
 
 
 
 
//  }



// int main(){
   
//     int num = 5;
//      printPrime(num) ;
  
      
//     return 0;
// }




// Print nth of fibonacchi   (0 1 1 2 3 5 )



// int fibonacci(int n) {
//     if (n <= 1) return n;

//     int a = 0, b = 1, fib;
//     for (int i = 2; i <= n; i++) {
//         fib = a + b;
//         a = b;
//         b = fib;
//     }
//     return fib;
// }

// int main() {
//     int n = 5;  // Example: Find the 5th Fibonacci number
//     cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
//     return 0;
// }


// switch

// int main() {
//     int num = 1;

//     switch (num) {
//         case 1:
//             cout << "Case 1 executed." << endl;
//             // No break; fall-through to the next case
//         case 2:
//             cout << "Case 2 executed due to fall-through." << endl;
//             break;
//         case 3:
//             cout << "Case 3 executed." << endl;
//             break;
//         default:
//             cout << "Default case executed." << endl;
//     }

//     return 0;
// }

// Decimal to binary

// int decToBinary(int decNum){

//     int ans = 0, pow = 1;

//     while(decNum > 0){


//         int rem = decNum % 2;
//         decNum /= 2;
//         ans += rem * pow;
//         pow *= 10;
//     }
//     return ans; // binary form 

// }



// // Binary to Decimal

// int binToDecimal(int binNum){

//     int ans = 0, pow = 1;

//     while(binNum > 0){


//         int rem = binNum % 10;
//         binNum /= 10;
//         ans += rem * pow;
//         pow *= 2;
//     }
//     return ans; // decimal form 

// }

// int main() {

// int num =01010;

// cout << binToDecimal(num) << endl;
//     return 0;
    
// }


// Find a number is power of 2 with Loop


// bool isPowerOfTwo(int num) {
//     // Check if num is greater than 0 and only has one set bit
//     return (num > 0) && ((num & (num - 1)) == 0);
// }

// int main() {
//     int num = 8;  

   
//     if (isPowerOfTwo(num)) {
//         cout << num << " is a power of 2." << endl;
//     } else {
//         cout << num << " is not a power of 2." << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// bool isPowerOfTwo(int num) {
//     if (num <= 0) {
//         return false; // Numbers less than or equal to 0 are not powers of 2
//     }

//     for (int i = 0; i < 31; i++) { // Loop up to 31 to cover 32-bit integers
//         if ((1 << i) == num) {
//             return true; // If num matches any power of 2, return true
//         }
//     }
//     return false; // If no match is found, return false
// }

// int main() {
//     int num = 16;
//     if (isPowerOfTwo(num)) {
//         cout << num << " is a power of 2." << endl;
//     } else {
//         cout << num << " is not a power of 2." << endl;
//     }
//     return 0;
// }

// reverse an integer n




// int main() {
//     int size = 5;
//     int marks[size];
//     for(int i=0; i<size; i++){

//         cin >> marks[i];
//     }


//  for(int i=0; i<size; i++){

//         cout << marks[i] << endl;
//     }
   
   
//     return 0;
// }


// #include <climits>

// int main (){

//     int nums[] = {5,15,22,1,-15,-24};
//     int size = 6;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
    
//     for(int i=0; i<size; i++){


//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }

//     cout << "Smallest: " << smallest << endl;
//     cout << "Largest: " << largest << endl;

//     return 0;

// }



// Find index of smallest element

// #include <climits>

// int main (){

//     int nums[] = {5,15,22,1,-15,-24};
//     int size = 6;
//     int smallest = INT_MAX;
//      int index;
    
//     for(int i=0; i<size; i++){


//       if(nums[i] < smallest){

//         index = i;
//     }
//     }
  
//     cout << "Index of smallest: " << index << endl;

//     return 0;

// }


// // WAF to calculate sum and product of all numbers in an array

// void sumAndProductOfArray(int arr[],int size){

//     int sum = 0;
//     int product = 1;
//     for(int i=0; i<size; i++){

//         sum += arr[i];
//         product *= arr[i];
//     }

//     cout << "Sum: " << sum << endl;
//     cout << "Product: " << product << endl;
// }

// int main (){

//     int arr[] = {1,2,3};
//     int size = 3;
    
//    sumAndProductOfArray(arr,size);
//     return 0;

// }


// WAF to swap the max and min number of an array
//  #include <climits>
// void maxAndMinOfArray(int arr[],int size){

//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int minIndex;
//     int maxIndex;
//     for(int i=0; i<size; i++){


//       if(arr[i] < smallest){

//         minIndex = i;
//         smallest = arr[i];
//     }

//       if(arr[i] > largest){

//         maxIndex = i;
//         largest = arr[i];
//     }
//     }
//     swap(arr[minIndex],arr[maxIndex]);

// }

// int main (){

//     int arr[] = {1,2,3,4,5};
//     int size = 5;
    
//    maxAndMinOfArray(arr,size);
//    for(int i=0; i<size; i++){

//      cout << arr[i] << " ";

// }
//     return 0;

// }



// waf to print all the unique values in an array 




// void uniqueOfArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         bool isUnique = true; // Assume the current element is unique

//         for (int j = 0; j < size; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = false; // Found a duplicate
//                 break;
//             }
//         }

//         if (isUnique) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 10};
//     int size = sizeof(arr) / sizeof(int);

//     cout << "Unique values in the array: ";
//     uniqueOfArray(arr, size);

//     return 0;
// }


// waf to print intersection of 2 arrays


// void intersectionOfTwoArray(int arr1[], int arr2[],int size1,int size2) {
//     for (int i = 0; i < size1; i++) {
//         bool isCommon = false; 

//         for (int j = 0; j < size2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 isCommon = true; // Found a duplicate
//                 break;
//             }
//         }

//         if (isCommon) {
//             cout << arr1[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {6,7,3,1};
//     int size1 = sizeof(arr1) / sizeof(int);
//     int size2 = sizeof(arr2) / sizeof(int);

//     cout << "Common values in the array: ";
//     intersectionOfTwoArray(arr1, arr2,size1,size2);

//     return 0;
// }



//////////////////////////// VECTOR /////////////////////////////
// #include <vector>
// int main() {

// vector<int> vec;

// cout << vec[0] << endl;
//     return 0;
// }


// #include <vector>
// int main() {

// vector<int> vec(5,0);

// cout << vec[0] << endl;
//     return 0;
// }


// #include <vector>
// int main() {

// vector<int> vec = {1, 2, 3, 4, 5};

// cout << vec[4] << endl;
//     return 0;
// }


// #include <vector>
// int main() {

// vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f'};

// for(char val : vec){  // for each loop
//     cout << val << " ";
// }
//     return 0;
// }


// #include <vector>
// int main() {

// vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f'};

// cout << "size =  " << vec.size() << endl;
//     return 0;
// }


// #include <vector>
// int main() {

//  vector<int> vec;

// cout << "size =  " << vec.size() << endl;

//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);

//     cout << "After push back size =  " << vec.size() << endl;

//     for(int val : vec){ // for each loop

//     cout << val << endl;
//     }
//     return 0;
// }


// #include <vector>
// int main() {

//  vector<int> vec;



//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);

//     cout << "After push back size =  " << vec.size() << endl;

//     vec.pop_back();

//     cout << "After pop back size =  " << vec.size() << endl;

//     for(int val : vec){ // for each loop

//     cout << val << endl;
//     }
//     return 0;
// }


// #include <vector>
// int main() {

//  vector<int> vec;



//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);

//     cout << "After push back size =  " << vec.size() << endl;

//     vec.pop_back();

//     cout << "After pop back size =  " << vec.size() << endl;

//     cout << vec.front() << endl;
//     cout << vec.back() << endl;
//     cout << vec[0] << endl;
//     cout << vec.at(0) << endl;
//     return 0;
// }


#include <vector>
int main() {

   vector<int> vec;

   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
  
    return 0;
}