#include<bits/stdtr1c++.h>
using namespace std;

int Euclid(int n, int m){
    if(m==0)
       return n;
    else 
      return Euclid(m, n%m);
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<Euclid(a,b);
    return 0;

}