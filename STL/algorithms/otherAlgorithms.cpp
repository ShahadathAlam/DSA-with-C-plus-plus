// next_permutation

/*
int main(){
     
   string s = "abc";
   next_permutation(s.begin(),s.end());
   cout << s << endl;   // acb
    return 0;
}

*/

// prev_permutation
/*
int main(){
     
   string s = "bca";
   prev_permutation(s.begin(),s.end());
   cout << s << endl;   // bac
    return 0;
}

*/

// max and min

/*
int main(){
     
   cout << max(4,5) << " " << min(6,10) << endl;
    return 0;
}

*/


// swap
/*
int main(){
     
   int a =5, b= 10;
   swap(a,b);
   cout << "a = " << a << endl;
    return 0;
}

*/

// max_element & min_element of a vector


/*
int main(){
     
    vector<int> vec = {1,2,3,4,5};

   cout << *(max_element(vec.begin(),vec.end())) << endl;
   cout << *(min_element(vec.begin(),vec.end())) << endl;
    

    return 0;
}
    */


    // binary_search

/*
int main(){
     
    vector<int> vec = {1,2,3,4,5};

   cout << binary_search(vec.begin(),vec.end(),4) << endl;   // 1 --> true
   cout << binary_search(vec.begin(),vec.end(),10) << endl;   // 0 --> false
   
    

    return 0;
}
    */

    // __builtin_popcount

    /*
    
    int main(){
     
int n = 15;
  
cout << __builtin_popcount(n) << endl;
   
    

    return 0;
}
    */


// different built in functions depending on the different data type


/*

int main(){
     
    long int n2 = 15;
      
    cout << __builtin_popcountl(n2) << endl;
       
        
    
        return 0;
    }
        
    */
   
   
    int main(){
     
        long int n3 = 15;
          
        cout << __builtin_popcountll(n3) << endl;
           
            
        
            return 0;
        }