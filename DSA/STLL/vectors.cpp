#include <iostream>
#include <vector>  // Include the vector header
# include<deque>
# include<stack>
#include <algorithm>
using namespace std;

int main() {

    // vector<int> v = {10, 20, 30, 40, 50};  // Declare and initialize the vector

    // vector<int>::iterator it = v.begin();  // Now this works

    // cout << *it << endl;  // Optional: print the first element


    vector <int> v={10,20,30,40,50,60};
    vector <int> :: iterator it=v.begin();
    vector <int> :: iterator itt=v.end()-1; // accessing last element
    vector <int> v1={110,133};
    vector <int> v2={11,45,55,21};
    vector <int> :: iterator at=v2.begin();
    vector <int> :: iterator ae=v2.end()-1;

    // v2.push_back(90);
    // v2.push_back(44);
    // v2.pop_back();
    v2.erase(at); // deletes specific postion element
    for (int x :v2){
        cout<<x;
    }
   
    
    // v.empty();
    // v2.insert(v2.begin()+1,180); // insertion at a specific index
    // for(auto value:v2){
    //     cout<<value<<endl;
    // }
    // cout<<v2.size()<<endl;
    
    
    // cout<<v2[0]; // accessing vector elements
    // cout<<*it<<endl;
    // cout<<*itt<<endl;

    // it++;
    // cout<<*it<<endl;
    // it++;
    // cout<<*it<<endl; // now for printing all the elements we will use for loop

 // method 1 for printing vectors 
    // for (int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

// method 2 for printing vector : auto
    // for(auto value:v){
    //     cout<<value<<endl;
    // }


// method 3 for printing vectors using auto as iterator

    // for(auto it=v.begin();it!=v.end();++it){
    //     cout<<*it<<endl;
    // }

// for sorting
// vector <int> :: iterator at=v2.begin();
//     vector <int> :: iterator ae=v2.end()-1;
//  sort(at,ae);
//     for (int x : v2) {
//         cout << x << " ";
//     }



//deletion: v.erase()
    // v.erase(v.begin());
    // for (auto value:v){
    //     cout<<value<<endl;
    // }

// for deleting multiple elements

    // v.erase(v.begin()+1,v.begin()+4);
    // v.insert(v.begin()+1,80);
    // v.pop_back(); // last element deletion
    // v.swap(v1);
    // for(auto value:v){
    //     cout<<value<<endl;
    // }


    // deque<int> dq={1,2,3,4,5};
    // dq.push_front(0);
    // dq.push_back(7);
    // dq.emplace_back(8);
    // for(auto value:dq){
    //     cout<<value<<endl;
    // }
    // stack<int> st={1,2,3,4,5,6};


}
