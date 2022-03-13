#include<bits/stdc++.h>
using namespace std;

int trailigZero(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }

    int count=0;
    while(fact%10 == 0){
        count++;
        fact=fact/10;
    }
    return count;
}

int main(){
    int a;
    cin>>a;
    cout<<trailigZero(a)<<endl;
    return 0;

}