#include <bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cout << "Enter n : " ;
    cin >> n ;
    int space = 2*(n-1) ;

    //for rows 
     for (int i = 1; i <= n; i++) {

        //columns 
        // Inner loop to print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        // Inner loop to print spaces in the middle
        for (int j = 1; j <= space ; j++) {
            cout << " ";
        }
        
        // Inner loop to print numbers in decreasing order
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        // Move to the next line after printing the row
        cout << endl;
          
        // Decrease spaces by 2 after each row
        space = space-2 ;
    }
    return 0 ;

    }
