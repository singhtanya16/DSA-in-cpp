#include <bits/stdc++.h>
using namespace std;
int main (){
int age;
cin >> age;
if (age < 18) {
    cout << "You are not eligible for job" ;
}
else if (age >= 18 && age < 55) {
    cout << "Eligible for job" ;
}
else if (age >= 55 && age <= 57) {
    cout << "You are eligible for job, but retirement soon" ;
}
else {
    cout << "Retirement time";
}
return 0;
}




