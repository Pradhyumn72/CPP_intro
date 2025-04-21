#include <iostream>
using namespace std;
int main()
{
    // int a ;
    // cout<<"enter any 3 digit number ";
    // cin>>a;
    // int k;
    // k=a/100;
    // cout<<k;
    // cout<<"\n";
    // int t =a%100;
    // cout<<t<<"\n";
    // int r ;
    // r=t/10;
    // cout<<r<<"\n";
    // int j ;
    // j = t%10;
    // cout<<j;
    // cout<<"\n";
    // cout<<"sum of 3 digit="<<k+r+j;

// sum of any no of digits 
// int a;
//     cout << "Enter any number: ";
//     cin >> a;

//     int sum = 0, digit;

//     cout << "Digits: ";
//     while (a > 0) {
//         digit = a % 10;       // Get last digit
//         cout << digit << " "; // Print digit
//         sum += digit;         // Add to sum
//         a = a / 10;           // Remove last digit
//     }

//     cout << "\nSum of digits = " << sum << endl;


int x;
cin>>x;
int y;
cin>>y;
int a=x<y ? x:y;
while(1){
    if(x%a==0 && y%a==0){
        cout<<" lcm is "<<a;
        break;
    }
    a--;
}
}