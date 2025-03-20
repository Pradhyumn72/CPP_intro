#include <iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter any 3 digit number ";
    cin>>a;
    int k;
    k=a/100;
    cout<<k;
    cout<<"\n";
    int t =a%100;
    cout<<t<<"\n";
    int r ;
    r=t/10;
    cout<<r<<"\n";
    int j ;
    j = t%10;
    cout<<j;
    cout<<"\n";
    cout<<"sum of 3 digit="<<k+r+j;

}