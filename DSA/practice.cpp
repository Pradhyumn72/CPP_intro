#include <iostream>
using namespace std;
int main(){
    int arr []={33,12,71,32,90,45};
    int n =sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int sec_largest=-1;
    for(int j=0;j<n;j++){
        if(arr[j]>sec_largest && arr[j]!=largest){
            sec_largest=arr[j];
        }
    }
    cout<<"seond largest element"<<"is :"<<sec_largest;
}