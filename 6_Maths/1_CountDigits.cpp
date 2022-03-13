#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int countdigits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
    }



int main(){
    int a;
    cin>>a;
    cout<<countdigits(a)<<endl;
    cout<<" "<<endl;
    cout<<"Using Log: ";
    cout<<int(log10(a)+1);

    return 0;

    
}



