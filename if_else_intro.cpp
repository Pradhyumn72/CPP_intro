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

// int marks;
// cout<<"enter marks ";
// cin>>marks;
// if (marks<33){
//     cout<<"fail";
// }
// else{
//     cout<<"pass by ";
//     if(marks>33 && marks<=45){
//         cout<<"3rd division";
//     }
//     if(marks>45 && marks<=60){
//         cout<<"2nd divison";
//     }
//     if(marks>60 && marks<=100){
//         cout<<"1st division";
//     }
// }

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

int adhr,age;

cout<<"enter ur aadhar number";
cin>>adhr;
if(adhr==1234){
    cout<<"enter your age";
    cin>>age;
    if(age>17){
        cout<<"u r eligible to drive";
    }
    else{
        cout<<" u r not eligible to drive";
    }
}
else{
    cout<<"invalid aadhar";
}

}