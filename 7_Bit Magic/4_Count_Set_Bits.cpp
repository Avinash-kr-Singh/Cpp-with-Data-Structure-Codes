#include<bits/stdc++.h>
using namespace std;

int CountSet(int &n){
    int count =0;
    while(n != 0){
    if(n & 1==1){
        count++;
    }
    n=n>>1;
    }
    return count;

}


int main(){
    int a;
    cin>>a;
    cout<<CountSet(a);
    return 0;
}