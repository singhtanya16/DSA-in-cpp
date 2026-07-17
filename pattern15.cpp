#include <bits/stdc++.h>
using namespace std ;
int main (){
int n ;
cout << "Enter n: ";
cin >> n ;

char ch = 65;           //ASCII value of A is 65
    for (int i=n ; i>0 ; i--){
        for (int j=0 ; j<i ; j++){
           cout <<  char (65+j) << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}