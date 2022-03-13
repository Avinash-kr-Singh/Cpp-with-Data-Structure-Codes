#include<bits/stdc++.h>
using namespace std;


int power(int &n){
    int temp=1;
    if(n==1){
        return 1;
    }

    for(int i=0;i<n/2;i++){
        temp = temp *2;
        if(n==temp){
           return 1;
        }
    }
    return -1;
    
    
}

int main(){
    int a;
    cin>>a;
    int sol = power(a);
    if(sol==1){
        cout<<"is power of 2";
    }
    else{
        cout<<"is not a power of 2";
    }
    return 0;

}