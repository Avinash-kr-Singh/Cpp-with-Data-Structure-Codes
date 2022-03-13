#include<bits/stdc++.h>
using namespace std;

bool isPower(int &n){
    if((n &(n-1))==0){
       return true;
    }

    return false;
}

int main(){
    int a;
    cin>>a;
    int sol=isPower(a);
    if(sol==1){
        cout<<"is power of 2";
    }
    else{
        cout<<"not a power of 2";
    }

    return 0;
}