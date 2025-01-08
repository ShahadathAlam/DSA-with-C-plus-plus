#include <iostream>

using namespace std;


// compute x^n

// Brute force (o(n))


// double result (int x , int n){


//     if (n == 0) {
//         return 1.0;
//     }

//     double result = 1;

//     for (int i = 1; i <= n; i++) {
//         result *= x;
//     }
//     return result;
// }



// int main() {
//     int x, n;
//     cout << "Enter the base number: ";
//     cin >> x;
//     cout << "Enter the exponent: ";
//     cin >> n;

//    cout << "The result is: " << result(x, n) << endl;
//    return 0;

//     return 0;
// }



// Time complexity: O(n)

// Space complexity: O(1)

// Note: The above implementation uses the multiplication method, which has a time complexity of O(n) and a space complexity of O(1). However, if the base number is negative and the exponent is even, the result will be positive due to the property of exponentiation. If the base number is negative and the exponent is odd, the result will be negative.

// A more efficient implementation using exponentiation by squaring (O(log n)) and bitwise operators (O(1)) can be found here: https://www.geeksforgeeks.org/exponentiation-by-squaring/

// This implementation avoids the multiplication method, which can be less efficient for large exponents. However, it still has a time complexity of O(log n) and a space complexity of O(1).

// In the above implementation, the base number is converted to a positive number before computing the result. This ensures that the result will always be positive, even when the base number is negative.

// The time complexity of this implementation is O(log n) and the space complexity is O(1). It uses bitwise operators and exponentiation by squaring to efficiently compute the result. The implementation handles negative exponents by converting the base number to a positive number before computing the result.


// A more efficient implementation using binary exponentiation 




double result (int x , int n){
    
     if (n == 0) {
        return 1.0;
    }
    if(x == 0) {

        return 0.0;
    }

     if(x == 1) {

        return 1.0;

       
    }

     if(x == -1 && n%2 == 0) {

        return 1.0;
    }
    if(x == -1 && n%2 != 0) {
        return -1.0;
    }





   // if n is negative 
   

   int binForm = n;
    if(binForm < 0){
        x = 1/x;
        binForm = -binForm;
    }

   


    double result = 1;

    while (binForm > 0) {

        if(binForm % 2 == 1) {
            result *= x;
        }

        x *= x;
        binForm /= 2;

        
    }

   
    return result;
}



int main() {
    int x, n;
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> n;

   cout << "The result is: " << result(x, n) << endl;
   return 0;

   
}


// Time complexity: O(log n)

// Space complexity: O(1)

// This implementation uses binary exponentiation to efficiently compute the result. The time complexity is O(log n) and the space complexity is O(1).

// In the above implementation, the binary representation of the exponent is obtained by repeatedly dividing the exponent by 2 and storing the remainder. This is done until the exponent becomes 0.



