#include<bits/stdc++.h>
using namespace std;

/*

int factorial(int &n){
    int fact=1;
    if(n==0 || n==1)
        return 1;
    while(n>1){
        fact =  fact * n;
        n--;
    }

    return fact;
}
*/

// using recursion
int factorial(int n){
    if(n==0 || n==1)
       return 1;
    //return n* factorial(n-1);-->> this is also correct
    return factorial(n-1)* n;
}


int main(){
    int a;
    cin>>a;
    cout<<factorial(a);
    return 0;
}