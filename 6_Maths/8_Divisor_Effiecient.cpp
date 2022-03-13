#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void Divisor(int &n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
              cout<<n/i<<" ";
            }
        }
    }
}


int main(){
    int a;
    cin>>a;
    Divisor(a);
    return 0;

}