#include<bits/stdc++.h>
using namespace std;


int countZero(int n){
    int count=0;
    for(int i=5;i<=n;i=i*5){
        count= count+ n/i;

    }
    return count;
}



int main(){
    int a;
    cin>>a;
    cout<<countZero(a)<<endl;
    return 0;

}