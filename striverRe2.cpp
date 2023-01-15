#include <bits/stdc++.h>
using namespace std;

void printNumber(int i , int j){
    if(i<j)
    {
        return;
    }
    printNumber(i-1,j);
     cout<<i<<endl;
}

int main(){
    printNumber(10,1);
    return 0;

}