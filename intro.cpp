#include <iostream>
using namespace std; //collection of identifiers

// # is preprocessive directive
// <> is content placeholder ,inside this io which is input output stream is kept 
// main() function is entry point of any compiler 
// cout is object ,<< is insertion operator," " is statement
// cin is object of io stream class
// >> is extraction operator
// \t is escape sequence operator ,for 0.5 inch gap 
// \n is escape sequence operator for new line
int x, y;  // Declare variables
    cout << "Enter your value of x: ";
    cin >> x;  // Take input for x
    cout << "Enter your value of y: ";
    cin >> y;  // Take input for y

    int c = x + y;  // Perform addition after inputs

    cout << "Your answer is: " << c
// for taking all positive inputs in a fucntion
// take unsigned int ()