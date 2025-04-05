#include <iostream>
using namespace std;

int main() {
    // int d;
    // char f;

    // cout << "Enter A for area of circle, C for circumference, S for square: ";
    // cin >> f;

    // switch (f) {
    //     case 'A':
    //     case 'a': {
    //         cout << "Enter radius of the circle: ";
    //         cin >> d;
    //         cout << "Area of circle is " << 3.14 * d * d << endl;
    //         break;
    //     }
    //     case 'C':
    //     case 'c': {
    //         cout << "Enter radius of the circle: ";
    //         cin >> d;
    //         cout << "Circumference of circle is " << 2 * 3.14 * d << endl;
    //         break;
    //     }
    //     case 'S':
    //     case 's': {
    //         cout << "Enter the number: ";
    //         cin >> d;
    //         cout << "Square is " << d * d << endl;
    //         break;
    //     }
    //     default:
    //         cout << "Invalid input" << endl;
    // }



// cout<<"hello"<<endl;
// goto x;
// cout<<"bye"<<endl;
// x:
// cout<<"okay"<<endl;

// int a =10;
// y:
// cout<<a<<"\t";
// a--;
// if(a>0)
// {
//     goto y;
// }
// cout<<"\n finished";

// enter a no such that a table is genearted of the entered number

int a,b=1;
cin>>a;
t:
cout<<a*b<<"\n";
b++;
if(b<=10){
    goto t;
}


}
