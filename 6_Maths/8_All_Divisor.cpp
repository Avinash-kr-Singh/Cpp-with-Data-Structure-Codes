#include<bits/stdc++.h>
using namespace std;

void divisor(int &n){
    for(int i=1; i<=n; i++){
        if(n%i==0)
          cout<<i<<"  ";
   }
}

int main(){
    int a;
    cin>>a;
    divisor(a);
    return 0;

}