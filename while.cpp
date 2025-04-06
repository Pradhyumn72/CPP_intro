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

int a,t=0;
cout<<"enter number";
cin>>a;
while (a>0)
{
    t=t+1;
    a=a/10;
}
cout<<"total digit "<<t;




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

}