#include<bits/stdc++.h>

using namespace std;

int CountSet(int &n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
    
}



int main(){
    int a;
    cin>>a;
    cout<<CountSet(a);
    return 0;
}