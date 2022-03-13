#include<bits/stdc++.h>
using namespace std;

// using Left Shift
/*void kthBit(int &n, int &k){
    if( n & (1<<(k-1))){
        cout<<"bit is 1";
    }

    else{
        cout<<"Bits is 0"<<endl;
    }
}*/

//using right shift

void kthBit(int &n, int &k){
    if(n>>(k-1) &1 ){
        cout<<"bit is 1";
    }

    else{
        cout<<"Bits is 0"<<endl;
    }
}


int main(){
    int a, pos;
    cin>>a>>pos;
    kthBit(a, pos);
    return 0;
}