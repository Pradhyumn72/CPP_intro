#include <iostream>
# include <map>
using namespace std;
int main(){
    map<int,int> mp;
    mp[1]=2;
    mp.insert({3,1});
    mp.insert({1,2});
    mp.insert({8,4});
    mp.insert({5,3});
    for(auto value:mp){
        cout<<value.first<<value.second<<endl;
    }
}