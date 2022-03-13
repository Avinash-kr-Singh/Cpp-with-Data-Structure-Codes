#include<bits/stdc++.h>
using namespace std;

int power(int &x, int &n){
   int pow=1;

    for(int i=1;i<=n;i++){
        pow= pow*x;}//x^n


    return pow;
}





int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}