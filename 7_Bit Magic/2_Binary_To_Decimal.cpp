#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int BtD(int &n){
    int ans=0;
    int i=0;

    while( n != 0){
        int l_digit= n%10;
        if(l_digit == 1){
            ans = pow(2,i) + ans;
        }
        i++;
        n=n/10;
    }
    return ans;
}

int main(){
    int bits;
    cin>>bits;
    cout<<BtD( bits)<<endl;
    return 0;
}