#include <iostream>
using namespace std;
int main(){
//    int marks;
//    cin>>marks;
//    if(marks>=60){
//     cout<<"First divison";
//     if (marks>=90 && marks<=100){
//         cout<<"A+";
//         if (marks>=80 && marks<90){
//                 cout<<"A";
//         }
//     }
//    }
//    else if (marks>=33){
//     cout<<"Second divison";
// //    }
//     int a =5,b=9,i=7;
//     if(a<b||++i<b){
//         cout<<"Hello";
//     }
//     cout<<i;
// 
int x ;
int y;

char c;

cout<<"enter value of x\n";
cin>>x;
cout<<"enter value of y\n";
cin>>y;
cin>>c; 

    switch(c)
    {
        case '*' :
            cout<<x*y;
            break;
        
        case '/':
        
            cout<<x/y;
            break;
        
        case '+':
        
            cout<<x+y;

            break;
        
        case '-':
        
            cout<<x-y;
            break;
        
        case '%':
        
            cout<<volx%y;
            break;
        default:
        
            cout<<"Invalid";
            break;
        
    }
}
