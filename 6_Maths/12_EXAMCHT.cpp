#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    while(T--){
    
        int r1, r2;
        cin>>r1>>r2;
        int n = abs(r1-r2);
        int count=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i) count+=1;
                else{count+=2;}
            }
        }
        cout<<count;
    }
}