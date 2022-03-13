#include<bits/stdc++.h>
using namespace std;

bool isprime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
          return false;
    }
    return true;
}


void SoE(int &n){
    int arr[n+1]={0};
      for(int i=0;i*i<=n;i++){
        if(isprime(i)){

            for(int j=2*i;j<=n;j=j+i){
                arr[j]=1;
            }
        }
    }
  
    /*for(int i=2;i<=n;i++){
        if(arr[i]==0){
            cout<<arr[i];
        }
    }
*/
}


int main(){
    int a;
    cin>>a;
    SoE(a);
    return 0;

}