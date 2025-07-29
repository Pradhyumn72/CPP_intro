// #include <iostream>
// using namespace std ;
// int main(){

// }

// int returntotalBill(void){
//     char show_food_option;
//     char items;
//     char veg_items;
//     char non_veg_items;
//     int bill_amount=0;
//     char selectAgain;
//     cout<<"----Welcome to Online Food delivery site----"<<endl;
//     cout<<"----Please foolow below instructions to order your food"<<endl;
//     cout<<"Step 1 : Press s to start fod selection"<<endl;
//     cout<<"Step 2 : You can select veg and non veg items"<<endl;
//     cout<<"Step 3: Press a to select veg items"<<endl;
//     cout<<"Step 4: Press b tp select non veg items"<<endl;
//     cin>>show_food_option;
//     if(show_food_option=='s'|| show_food_option=='S')
//     {
//         cout<<"Please select your choice"<<endl;
//         cout<<"(a) Veg items  (b) Non Veg items"<<endl;
//         cin>>items;
//         if(items == 'a' || items=='A'){
//             veg_items:
//             cout<<"Following are the list of Veg items present"<<endl;
//             cout<<"(1) Paneer : Price : Rs.200"<<endl;
//             cout<<"(2) Chaat : Price : Rs.45"<<endl;
//             cout<<"(3) Samosa : Price : Rs.15"<<endl;
//             if (veg_items=='1'){
//                 bill_amount+=250;
//             }
//             else if (veg_items=='2'){
//                 bill_amount+=45;
//             }
//             else if (veg_items=='3'){
//                 bill_amount+=15;
                
//         }
//         else{
//             cout<<"You have entered wrong input"<<endl;
//         }
//         else {
//             cout<<"you have entered wrong input"<<endl;
//             goto veg_items;
//         }
//         cout<<"Do you want add more items, y or n? "<<endl;
//          cin>>selectAgain;
//          if(selectAgain=='y'){
//             goto items;
//          }
//          else{
//             return bill_amount;
//          }
//         }
//         else if(items=='b'|| items =='B'){
           
//         }
//         {
//             cout<<"Following are the list of Non Veg items"<<endl;
//             if(items == 'a' || items=='A'){
//             veg_items:
//             cout<<"Following are the list of Veg items present"<<endl;
//             cout<<"(1) Chicken Tikka : Price : Rs.300"<<endl;
//             cout<<"(2) Chicken Wings : Price : Rs.450"<<endl;
//             cout<<"(3) Fish Fry : Price : Rs.315"<<endl;
//             if (non_veg_items=='1'){
//                 bill_amount+=300;
//             }
//             else if (non_veg_items=='2'){
//                 bill_amount+=450;
//             }
//             else if (non_veg_items=='3'){
//                 bill_amount+=315;
                
//         }
//         else{
//             cout<<"You have entered wrong input"<<endl;
//         }
//         else {
//             cout<<"you have entered wrong input"<<endl;
//             goto non_veg_items;
//         }
//         cout<<"Do youi want to add more items, y or n?"<<endl;
//         cin>>selectAgain;
//         if(selectAgain=='y'){
//             goto items;
//         }
//         else{
//             return bill_amount;
//         }
//     }
//     else {
//         cout<<"You have entered wrong input\n"<<endl;
//     }

//     }
// }
// return bill_amount;
// }










#include <iostream>
using namespace std;

int returnTotalBill() {
    char show_food_option;
    char items;
    char food_choice;
    int bill_amount = 0;
    char selectAgain;

    cout << "----Welcome to Online Food Delivery Site----" << endl;
    cout << "----Please follow the instructions to order your food----" << endl;
    cout << "Step 1: Press 's' to start food selection" << endl;
    cin >> show_food_option;

    if (show_food_option == 's' || show_food_option == 'S') {
        do {
            cout << "Please select your choice" << endl;
            cout << "(a) Veg items  (b) Non Veg items" << endl;
            cin >> items;

            if (items == 'a' || items == 'A') {
                cout << "Following are the list of Veg items present" << endl;
                cout << "(1) Paneer : Price : Rs. 200" << endl;
                cout << "(2) Chaat : Price : Rs. 45" << endl;
                cout << "(3) Samosa : Price : Rs. 15" << endl;
                cout << "Select an item (1-3): ";
                cin >> food_choice;

                if (food_choice == '1') {
                    bill_amount += 200;
                } else if (food_choice == '2') {
                    bill_amount += 45;
                } else if (food_choice == '3') {
                    bill_amount += 15;
                } else {
                    cout << "You have entered a wrong input." << endl;
                }
            } else if (items == 'b' || items == 'B') {
                cout << "Following are the list of Non Veg items" << endl;
                cout << "(1) Chicken Tikka : Price : Rs. 300" << endl;
                cout << "(2) Chicken Wings : Price : Rs. 450" << endl;
                cout << "(3) Fish Fry : Price : Rs. 315" << endl;
                cout << "Select an item (1-3): ";
                cin >> food_choice;

                if (food_choice == '1') {
                    bill_amount += 300;
                } else if (food_choice == '2') {
                    bill_amount += 450;
                } else if (food_choice == '3') {
                    bill_amount += 315;
                } else {
                    cout << "You have entered a wrong input." << endl;
                }
            } else {
                cout << "You have entered a wrong input." << endl;
            }

            cout << "Do you want to add more items? (y/n): ";
            cin >> selectAgain;
        } while (selectAgain == 'y' || selectAgain == 'Y');
    } else {
        cout << "You have entered a wrong input." << endl;
    }

    return bill_amount;
}

int main() {
    int totalBill = returnTotalBill();
    cout << "Your total bill is: Rs. " << totalBill << endl;
    return 0;
}
