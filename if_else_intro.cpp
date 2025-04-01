#include <iostream>
using namespace std;
int main(){
    //age > eligible 

    // int a ;
    // int b;
    // cout<<"enter value of a :";
    // cin>>a;
    // cout<<"enter value of b :";
    // cin>>b;
    // if(a>b){
    //     cout<<"larger value is a "<<a;
    // }
    // else{
    //     cout<<"larger value is b "<<b;

    // }
    // cout<<"enter value of a: ";
    // cin>>a;
    // if (a%2==0){
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }


// else ladder

    // int price;
    // cout<<"enter the price of the product ";
    // cin>>price;
    // if(price<1000){
    //     cout<<"You will get 10% discount and the price of the prouct after discount will be "<<price-0.1*price;
    // }
    // else if(price >=1000 && price<=2000){
    //     cout<<"You will get 15% discount and the price of the prouct after discount will be "<<price-0.15*price;
    // }
    // else if (price>2000){
    //     cout<<"You will get 20% discount and the price of the prouct after discount will be "<<price-0.2*price;
    // }
    

// nested if

float Physics_Score;
float Chemistry_Score;
float Maths_Score;
float total_marks;
float percentage;

cout<<"Enter Physics Score ";
cin>>Physics_Score;
cout<<"Enter Chemisrty Score ";
cin>>Chemistry_Score;
cout<<"Enter Maths Score ";
cin>>Maths_Score;
total_marks= (Physics_Score+Chemistry_Score+Maths_Score);
cout<<"Your total marks is \n"<<total_marks;
percentage=total_marks/3;
cout<<"Your percentage is \n"<<percentage;

if (percentage<35){
    cout<<"fail";
}
else{
    cout<<"pass by ";
    if(percentage>35 && percentage<=49){
        cout<<"3rd division \n";
    }
    if(percentage>49 && percentage<=59){
        cout<<"2nd divison \n";
    }
    if(percentage>60 && percentage<=100){
        cout<<"1st division \n";
    }
}

// WAP to enter password ...2025 should be there

// int password;
// cout<<"Enter your password";
// cin>>password;

// if (password == 2025){
//     cout<<"Welcome";
// }
// else{
//     cout<<"invalid password";
// }

// WAP to match aadhar then enter ur age ...else invalid aadhar....if age entered>18 u can drive..

// int adhr,age;

// cout<<"enter ur aadhar number";
// cin>>adhr;
// if(adhr==1234){
//     cout<<"enter your age";
//     cin>>age;
//     if(age>17){
//         cout<<"u r eligible to drive";
//     }
//     else{
//         cout<<" u r not eligible to drive";
//     }
// }
// else{
//     cout<<"invalid aadhar";
// }


//WAP...enter 3 numbers .....return largest number 

// int a ,b,c;
// cout<<"enter val of a :";
// cin>>a;
// cout<<"enter val of b:";
// cin>>b;
// cout<<"enter val of c :";
// cin>>c;
// if (a>b && a>c){
//     cout<<" a is larger";
// }
// else if (b>a && b>c){
// cout<<"b is larger";
// }
// else{
//     cout<<"c is larger";
// }

//WAP to generate the bill of electricity by taking  
// following constraints

// int units;
// int bill;
// cout<<"Enter the no of units consumed";
// cin>>units;
// if(units>=0 && units<=50){
//     cout<<"your bill is Rs. "<<units*2 + 0.2*units*2;
// }
// else if (units>50 && units<=100)
// {
//     cout<<"your bill is Rs. "<<units*3 + 0.2*units*3;
// }

// else if (units>100 && units<=500)
// {
//     cout<<"your bill is Rs. "<<units*5 + 0.2*units*5;
// }
// else if (units>500 && units<=1000)
// {
//     cout<<"your bill is Rs. "<<units*7 + 0.2*units*7;
// }
// else if (units>=1000)
// {
//     cout<<"your bill is Rs. "<<units*10 + 0.2*units*10;
// }
// else{
//     cout<<"Invalid Reading";
// }





}