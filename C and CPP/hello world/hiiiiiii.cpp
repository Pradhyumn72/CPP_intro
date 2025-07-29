// OOPS

// #include <iostream>
// using namespace std;

// class A {
// public:
//     int a;

//     void area() {
//         cout << "Area of circle = " << (3.14 * a * a) << endl;
//     }

//     void input() {
//         cin >> a;
//     }
// };

// class B : public A {
// public:
//     void area() {
//         cout << "Area of square = " << (a * a) << endl;
//     }

//     void input() {
//         cin >> a;
//     }
// };

// int main() {
//     B obj;
//     obj.input();
//     obj.area();
//     return 0;
// }

// Grade Calculator


// #include<iostream>
// using namespace std;
// int main ()
// {
//     int age ;
//     cout<<"Enter your age  :";
//     cin >> marks;
//     if(marks < 25)
//     {cout<<"you got a F grade";
//     }

//     else if(marks>=25 && marks<= 44){
//     {
//         cout<<"You got a E grade ";
//     }
//     }
//     else if(marks>=44 && marks<=49)
//     {
//         cout<<"You got a D grade";
//     }
//     else if(marks>=50 && marks<=59)
//     {
//          cout<<"You got a C grade";
//     }
//     else if(marks>=60 && marks<= 79)
//     {
//          cout<<"You got a B grade";
//     }
//     else
//     {
//          cout<<"You got a A grade";
//     }
//    return 0;
//     }


// Age calculator

// #include<iostream>
// using namespace std;
// int main () {
//     int age ;
//     cout<<"Enter your age ";
//     cin>>age;
//     if(age<18)
//     {
//         cout<<"Bacha hai tu";
//     }
//     else if (age>=18 && age<= 54)
//     {
//         cout<<"Bada ho rha hai";
//     }
//     else if(age>=55 && age<=57)
//     {
//         cout<<"Jane ka time aane wale hai";
//     }
//     else if (age>57)
//     {
//         cout<<"Jane ka time aa chuka hai";
//     }
//     }

// Switch Statements

// #include<iostream>
// using namespace std;
// int main () {
//     int day;
//     cout<<"enter day no.:";
//     cin>>day;
//     switch (day){
    
//     {
//     case 1:
//     cout<<"Monday";
//         break;
//     case 2:
//     cout<<"Tuesday";
//     break;
//     case 3:
//     cout<<"Wednesday";
//     break;
//     default:
//     cout<<"Invalid input";
//         break;
//     }
// }
// }


// intro to arr 

// #include<iostream>
// using namespace std ;
// int main(){
//     int arr [5];
//     cout<<"enter arr val:"; 
//     cin>>arr[0]>> arr[1] >>arr[2] >> arr[3] >> arr[4];
//     cout<<arr[3];
//     return 0;
// }

//  intro to 2d arr 

// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[3][5];
//    arr[1] [3] = 78;
//    cout<<arr[3] [5];
//     return 0;
// }

// intro to strings
// #include<iostream>
// using namespace std ;
// int main() {
//     string s = "bunny";
//     int len = s.size();
//     cout<<s[len - 2];
//     return 0 ;
// }

// for loop

// #include<iostream>
// using namespace std ;
// int main() {
//     int i ;
//     for(int i = 0; i<=10; i++) {
//         cout<<"bunny hell"<<endl;
//     }
//     cout<<i<<endl;
//     return 0 ;
// }


// while loop

// #include<iostream>
// using namespace std ;
// int main(){
//     int i = 1 ;
//     while (i<=5)
//     {cout<<"bunny yells"<<i<<endl;
//     i= i + 1;    
//     }
//     return 0;
    
// }


// do while loop

// #include<iostream>
// using namespace std ;
// int main(){
//     int i =5;
//     do{
//         cout<<"bunny rocks"<<i<<endl;

//     }while(i<=2);
//     return 0 ;
// }

// // function creation 
// #include<iostream>
// using namespace std ;
// void printName(string name){
//     cout<<"hey "<<name ;
// }
// int main()
// {
//     string name ;
//  cout<< "enter your name \n";
//     cin>>name;
//     printName(name);

//     string name2;
//     cout<< "enter your name2 \n";
//     cin>>name;
//     printName(name);

//     return  0;
// }


// #include<iostream>
// using namespace std ;
// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3 ;
// }
// int main(){
//     int num1,num2;
//     cin>> num1>>num2;
//     int res = sum(num1 ,num2);
//     cout<<res;
//     return 0;
// }

// pass by value
#include<iostream>
using namespace std;
void changeValue(int num){ //defining value
    num =num+1;
    cout<<num<<endl;
}
int main(){
    int num = 100;
    cout<<num<<endl;
    changeValue(num); //calling
    cout<<num;
}
