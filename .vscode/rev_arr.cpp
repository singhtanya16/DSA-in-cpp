#include <bits/stdc++.h>
using namespace std ;
int arr [] {1, 2, 3, 4, 5} ;

void f (int i, int n , int arr []) {
     
   if (i>= n/2) {
       return ;
   }
swap(arr[i], arr[n-1-i]) ;
f(i+1, n , arr) ;
}

int main (){
    f(0, 5, arr);
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}

