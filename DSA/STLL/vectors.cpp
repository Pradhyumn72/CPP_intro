#include <iostream>
#include <vector>  // Include the vector header
# include<deque>
# include<stack>
using namespace std;

int main() {

    // vector<int> v = {10, 20, 30, 40, 50};  // Declare and initialize the vector

    // vector<int>::iterator it = v.begin();  // Now this works

    // cout << *it << endl;  // Optional: print the first element


    vector <int> v={10,20,30,40,50,60};
    vector <int> v1={110,133};
    vector <int> :: iterator it=v.begin();
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
    deque<int> dq={1,2,3,4,5};
    dq.push_front(0);
    dq.push_back(7);
    dq.emplace_back(8);
    for(auto value:dq){
        cout<<value<<endl;
    }
    stack<int> st={1,2,3,4,5,6};


}
