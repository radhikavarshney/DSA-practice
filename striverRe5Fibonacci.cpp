#include <bits/stdc++.h>
using namespace std;


int fibonacci(int n){
    int last= n-1, sLast=n-2;
    if(n<=1){
        return n; 
    }

    return fibonacci(last)+fibonacci(sLast);
}

int main (){
    cout<<fibonacci(8);
}