#include<bits/stdc++.h>
using namespace std;


int countOfSubsequence(int i,int s,int sum,int arr[],int n){
    if(i>=n){
        if(s==sum){
            return 1;
        }
        else return 0;
    }
s+=arr[i];
int l = countOfSubsequence(i+1,s,sum,arr,n);
s-=arr[i];
int r =countOfSubsequence(i+1,s,sum,arr,n);
return r+l;
}

int main(){
     int arr[]={1,2,1,1,1};
     int n=5, sum=2;
     cout<<countOfSubsequence(0,0,sum,arr,n);
     return 0;
}

//
