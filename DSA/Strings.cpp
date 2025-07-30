# include <iostream>
using namespace std;
// void function
// parameterised: adding parameter in function 
// void printname(string name){
//     cout<<name<<" is my name"<<endl;
// }
int sum(int a,int b){
 int c =a+b;
 return c;
}
int main(){
    // string a;
    // cout<<"enter your name "<<endl; // if give a space between name only the letters before the space is getting printed 
    // cin>>a;
    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;
    // cout<<a[2]<<endl;
    // cout<<a[3]<<endl;
    // cout<<a[4]<<endl; //if name is smaller than given cout statements index...blank spaces will be printed 
    // cout<<a[5]<<endl;
    // cin>> name;
// printname("hello");
// printname("bunny"); 
// int a, b ;
// cin>>a>>b;
// int rs=sum(a,b);
// cout<<rs;
int a = 4;
int b =3;
int c = max(a,b);
cout<<c;
}