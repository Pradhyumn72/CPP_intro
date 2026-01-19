#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
int main(){
    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // cout<<arr[0]<<endl;
    // arr[4]+=10;
    // arr[2]=arr[2]*2;
    // cout<<arr[2]<<endl;
    // cout<<arr[4]<<endl;

    //   int arr[3][5];
    // arr[0][0]=22;
    // arr[0][1]=23;
    // arr[0][2]=24;
    // cout<<arr[0][0]<<endl;
    // cout<<arr[0][1]<<endl;
    // cout<<arr[0][2]<<endl;
    

    int arr[]={1,0,2,3,2,0,0,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=-1;
    for (int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for (int i=j+1;i<n;i++){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++; 
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
