#include<bits/stdc++.h>
using namespace std;

int printSum(int i){

    if(i==0){
         return 0;
    }
    return i+ printSum(i-1);
 
    }

    int main(){
        cout<<printSum(8);

        return 0;
    }