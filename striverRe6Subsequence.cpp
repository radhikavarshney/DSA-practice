#include <bits/stdc++.h>
using namespace std;

void subset(int i, vector<int> &ds, int arr[], int n){
    if(i==n){
        for(auto j:ds){
            cout<<j<<" ";

        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);
    subset(i+1,ds,arr,n);
    ds.pop_back();
    subset(i+1,ds,arr,n);
}

int main()
{
    int arr[]={1,8,3,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> ds;
    subset(0,ds,arr,n);

}