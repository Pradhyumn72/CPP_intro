#include <iostream>
using namespace std;

int main(){
    // int a=10 ;
    // while (a>0)
    // {
    //     cout<<a<<"\n";
    //     a--;
    // }
    // cout<<a;

//WAP to find out the how many digits in given number

// int a,t=0;
// cout<<"enter number";
// cin>>a;
// while (a>0)
// {
//     t=t+1;
//     a=a/10;
// }
// cout<<"total digit "<<t;



// int a;
// cout<<"enter number "<<"\n";
// cin>>a;
// do {
//     if (a>0){
//         cout<<a;
//     }
//     a=a/10;
//     a++;

// }while

// WAP to print table

// int a,b=1;
// cout<<"enter number ";
// cin>>a;
// while(b<=10){
//     cout<<a*b<<"\n";
//     b++;
// }


// WAP to print even number between 1 to 10
// int a=0;

// while(a<=10){
//     cout<<a;
//     a+=2;
// }

// WAP to print odd number between 1 to 10
// int b =1;
// while(b<=10){
//     cout<<b;
//     b+=2;
// }


//WAP to print sum of values b/w 1 to 10
// int c=1,d=0;
// while(c<=10){
//     d=d+c;
//     c++;
   
// }
//  cout<<d<<"\n";

// WAP to print multiplication of values b/w 1 to 10
//  int a=1,b=1;
//  while(a<=10){
//     b=a*b;
//     a++;
//  }

// cout<<b;

//WAP to write a program to generate a factorial
// int a=1,b=1;
// cin>>a;
// while(a>0){
//     b=a*b;
//     a--;
// }
// cout<<b;

// WAP to find out LCM of 24 and 40 
// int x,y;
// cout<<"enter val of x";
// cin>>x;
// cout<<"enter val of y";
// cin>>y;
// int a= x<y ? y:x;

// while(1){
//     if (x%a==0 && y%a==0){
//         cout<<"hcf is "<<a;
//         break;
//     }
//     a--;
// }

// int n;
// cin>>n;
// int k=n;
// int c=0;
// for (;n>=1;n--){

//     if (k%n==0 ){
//         cout<<n<<"\n";
//          c=c+1;
//     }
   
// }
// cout<<c;
//  int n,b,f=0;
//  cout<<"enter no ";
//  cin>>n;
//  b=n-1;
//  while(b>1){
//     if(n%b==0){
//         f=1;
//         break;
//     }
//     b--;
//  }
//  if (f==1){
//     cout<<"not prime";

//  }
//  else{
//     cout<<"prime";
//  }

// WAP to find out the given number is perfect number or not
// WAP to print given in reverse order

    // int num, reversed = 0;

    // // Input the number
    // cout << "Enter a number: ";
    // cin >> num;

    // // Reverse the number
    // while (num != 0) {
    //     int digit = num % 10;
    //     reversed = reversed * 10 + digit;
    // num = num/10;
    // }

    // // Output the reversed number
    // cout << "Reversed number: " << reversed << endl;

    

// WAP to print sum if first and last digit
// int num, originalNum, lastDigit, firstDigit;

//     // Input number
//     cout << "Enter a number: ";
//     cin >> num;

//     originalNum = num; // Save the original number
//     lastDigit = num % 10; // Get the last digit

//     // Find the first digit
//     while (num >= 10) {
//         num = num / 10;
//     }
//     firstDigit = num;

//     int sum = firstDigit + lastDigit;

//     // Output the result
//     cout << "First digit: " << firstDigit << endl;
//     cout << "Last digit: " << lastDigit << endl;
//     cout << "Sum of first and last digit: " << sum << endl;


// perfect numbers

//   int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int sum = 0;
//     int i;

    
//     for (i = 1; i < n; i++) {
//         if (n % i == 0) {
//             sum += i; 
//         }
//     }
    

    
//     if (sum == n) {
//         cout << n << " is a perfect number." << endl;
//     } else {
//         cout << n << " is not a perfect number." << endl;
//     }


    // int x, y;
    // cout << "Enter value of x: ";
    // cin >> x;
    // cout << "Enter value of y: ";
    // cin >> y;

    // int a = x < y ? x : y;  // Start from the min of x and y

    // while (true) {
    //     if (x % a == 0 && y % a == 0) {
    //         cout << "HCF is: " << a << endl;
    //         break;
    //     }
    //     a--;  
    // }

 int x =1;
 cout<<"enter val of x";
 cin>>x;
 int y=1;
 while(x>0){
    x=x/10;
    y=y+1;
 }
 cout << y;
 int n;
    cout << "Enter a number: ";
    cin >> n;

    int LD = n%10;
    int FD = n;
    while(FD>=10){
        FD=FD/10;
    }
   

    cout << LD+FD;
// int n;
// int reversed=0;
// cout<<"enter val of n ";
// cin>>n;
// int num=n;

// while(n>0){
//     int digit=n%10;
//     reversed=reversed*10+digit;
//     n=n/10;
// }
// if(num==reversed){
//     cout<<"a palindrome";
// }
// else{
//     cout<<"not a palindrome";
// }


}