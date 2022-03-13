#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int GCD(int &n, int  &m){
    int mi= min(n,m);
    for(int i=mi;i>=1;i--){
        if(n%i==0 && m%i==0){
            return i;
        }
    }
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
    return 0;
}