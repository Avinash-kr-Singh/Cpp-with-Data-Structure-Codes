#include<bits/stdc++.h>
using namespace std;


bool isprime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
          return false;
    }
    return true;
}

void SoE(int &n){
    if(n<=1) return;

    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a;
    cin>>a;
    SoE(a);
    return 0;

}