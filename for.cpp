#include <iostream>
using namespace std;
int main(){
    // int x=6;
    // int y=1;
    // for(;y<=10;y++){
    //     cout<<x*y<<"\n";
    // }

// WAP to print even number between 1 to 10
// for(int x=1;x<=10;x++){
//     cout<<x<<"\n";
// }
// WAP to print odd number between 1 to 10
// for(int x=1;x<11;x+=2){
//     cout<<x<<"\n";
// }
//WAP to print sum of values b/w 1 to 10
// int b = 0;
//     for (int i = 1; i <= 10; i++) {
//         b = b+i; // Add current number to sum
//     }
//     cout << "Sum of numbers from 1 to 10 is: " << b << endl;
// //WAP to print multiplication of values b/w 1 to 10
// int c=1;
// for(int d=1;d<=10;d++){
//     c=d+c;
//     cout<<c*d<<"\n";
// }
//WAP to write a program to generate a factorial

    //WAP to display the nos from 20 to 50n which are odd
    // int x=20;
    // for (;x>=20 && x<=50;x++){
    //     if (x%2 !=0){
    //         cout<<x<<"\n";
    //     }
    // }

//WAP to display to find out the given no is prime or not
// int N;
// cout<<"enter no";
// cin>>N;
// int count =0;
// for(int i=1;i<=N;i++){
//     if(N%i==0){
//         count++;
//     }
    
// }
// if (count>2){
//         cout<<"non prime";
//     }
//     else{
//         cout<<"prime";
//     }



//WAP to find out LCM of 24 and 40 
int a =24;
int b=40;
int max = (a > b) ? a : b; // start from the larger of the two

    for (int i = max; ; i++) {
        if (i % a == 0 && i % b == 0) {
            cout << "LCM of " << a << " and " << b << " is " << i;
            break; // stop the loop after finding the first common multiple
        }
    }

    
// WAP to find out the HCF of 24 and 40 
//WAP to find out the factor of given number 
// int x;
// cout<<"enter no "<<endl;
// cin>>x;
// if(x%x==0 || x%1==0){
//     cout<<"prime";

// }
// else{
//     cout<<"not prime";
// }


}