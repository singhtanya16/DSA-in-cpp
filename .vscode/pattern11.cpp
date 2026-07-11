#include <bits/stdc++.h>
using namespace std;
                                                        //1 first row starts with 1
int main (){                                            //01 {odd row starts with 0}
    int n;                                              //101 {even row starts with 1}
    cout << "Enter n: ";                                //0101 {odd row starts with 0}
    cin >> n;                                           //10101 {even row starts with 1}

    // First row starts by printing a single 1.
    int start = 1;
    
    // Outer loop for the number of rows
     for (int i = 0; i < n; i++) {
    
         // Inner loop to print alternating 1's and 0's in each row
        for (int j = 0; j<= i; j++) {
            cout << start;

            // to flip 1 to 0 and 0 to 1 for the next character in the same row
            start = 1 - start;
        }
            // Move to the next line after each row is printed
        cout << endl;
    }
}
