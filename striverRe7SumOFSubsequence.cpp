#include <iostream>
#include <vector>
using namespace std;

void print(vector <int> ds){
    for(auto i:ds){
        cout<<i<<" ";
    }
    cout<<endl;
}

bool subsequence(int i,vector<int> ds,int arr[],int s,int sum, int n){
    if(i>=n){
        if(s==sum){
       print(ds);
        return true;
        }
        else return false;
    }

    ds.push_back(arr[i]);
    s+=arr[i];

    if(subsequence(i+1,ds,arr,s,sum,n)== true)
    {
        return true;
    }

    s-=arr[i];
    ds.pop_back();
     if(subsequence(i+1,ds,arr,s,sum,n)== true)
    {
        return true;
    }

    return false;
}



int main(){
    // int n,arr[n], s=0,sum;
    // cout<<"enter the no.of elements in array"<<endl;
    // cin>>n;
    // for(int i =0;i<n;i+1){
    //     cin>>arr[i];
    // }
    // vector<int> ds;
    // cout<<"enter the desired sum";
    // cin>>sum;
    // subsequence(0,ds,arr,s,sum,n);

    int arr[]={1,2,1};
    int n = 3;
    int sum= 2;
    vector <int> ds;
    subsequence(0,ds,arr,0,sum,n);

}