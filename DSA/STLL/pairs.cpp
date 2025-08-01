# include <iostream>
using namespace std;
void explainpair(){
    pair<int,int> p={1,2};
    cout<<p.first<<p.second<<endl;
    pair <int,pair<int,int>> t={5,{7,8}};
    cout<<t.first<<endl;
    cout<<t.second.first<<endl;
    cout<<t.second.second<<endl;
    pair<int,int> arr[]={{8,9},{6,4},{3,2}};
    cout<<arr[0].first<<endl;
    cout<<arr[1].second<<endl;
    cout<<arr[2].first<<endl;
}
int main(){
    explainpair();
}