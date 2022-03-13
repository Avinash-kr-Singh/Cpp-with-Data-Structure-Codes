#include<bits/stdc++.h>
using namespace std;


int isPrime(int &n){
    if(n==1 )
      return -1;
    for(int i=2;i*i<n;i++){
        if(n%i==0)
           return -1;

    }
    return 1;

}

int main(){
    int a;
    cin>>a;
    cout<<isPrime(a);
    return 0;

}