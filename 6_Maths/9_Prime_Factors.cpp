#include<bits/stdc++.h>
using namespace std;

 bool isprime(int x){
        if(x==1)
           return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0)
              return false;
        }
        return true;
    }

void PrimeFactor(int &n){
    for(int i=2;i<n;i++){
        if(isprime(i)){
            int temp=i;
            while(n%temp==0){
                cout<<i<<" ";
                temp=temp*i;
            }
        }

    }
    
   
}








int main(){
    int a;
    cin>>a;
    PrimeFactor(a);
    return 0;
}