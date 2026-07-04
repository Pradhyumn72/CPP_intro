# include <iostream>
# include <vector>
using namespace std;

// Q1. reverse array 
// void reversee(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// void printarray(int arr[],int n){
//     for(int i =0;i<n;i++){
//         cout << arr[i] <<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[4]={7,2,9,11};
//     reversee(arr,4);
//     printarray(arr,4);
   
// }

//Q2. SwapAlternate

// void SwapAlternate(int arr[],int n){
//     for(int i =0;i<n;i+=2){
//         if (i+1<n){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// void printarray(int arr[],int n){
//     for (int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int arr[6]={5,11,2,66,33,67};
//     int arr1[5] ={1,2,3,45,6};
//     SwapAlternate(arr,6);
//     SwapAlternate(arr1,5);
//     printarray(arr,6);
//     printarray(arr1,5);
// }

// Q3. Find Unique element

// int unique(int arr[],int n){
//     int ans =0;
//     for(int i =0;i<n;i++){
//         ans=ans^arr[i];
//     }
//         return ans;

// }

// void printarray(int arr[],int n){
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
int missingNumber(vector<int>& arr, int n)
{
    int expected = n * (n + 1) / 2;

    int actual = 0;

    for(int num : arr)
        actual += num;

    return expected - actual;
}

// int main(){
//     int n ;
//     cin>>n;
//     vector<int> arr(n-1);
//     for (int i =0;i<n-1;i++){
//         cin>>arr[i] ;
//     }
// cout<<"the missing number is "<<missingNumber(arr,n)<<endl;

// }