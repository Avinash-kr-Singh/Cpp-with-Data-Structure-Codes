#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int DtB(int &n){
    int ans=0;
    int i=0;

    while(n != 0){
        int bit = n%2;
        ans = bit * pow(10, i) + ans;
        n= n>>1;
        i++;
        
    }
    return ans;

}


int main(){
   int a;
    cin>>a;
    cout<<DtB(a)<<endl;
    return 0;



}