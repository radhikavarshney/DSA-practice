#include <bits/stdc++.h>
using namespace std;

void arrayReversal(int i ,int arr[],int n)
{
       if(i>=n/2){
        return;
       }
       swap(arr[i],arr[n-i-1]);
       arrayReversal(i+1,arr,n);
      

}

int main (){
    int n;
    int arr[n];
    cout<<"enter no. of elements in an array";
    cin>>n;
    for(int j=0;j<n;j++){
    cin>>arr[j];}

    // int n , arr[5]={1,2,3,4,5};
    arrayReversal(0,arr, n);
     for(int j=0;j<n;j++){
    cout<<arr[j];}

}
