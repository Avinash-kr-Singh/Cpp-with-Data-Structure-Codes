#include<bits/stdc++.h>
using namespace std;

int Euclid(int &n, int &m){
    while(n != m ){
        if(m>n)
           m=m-n;
        else 
           n=n-m;
    }
    return n;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<Euclid(a,b);
    return 0;

}