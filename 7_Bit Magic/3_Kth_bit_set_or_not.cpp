#include<bits/stdc++.h>

using namespace std;


void kthBitSet(int &n, int &k){
    int i=0;
    int count=0;
    while( n != 0){
        int l_bit=n%2;
        ++i;
        n = n/2;
        if(i == k){
            if(l_bit ==1){
                cout<<"bit is 1"<<endl;
                break;
            }
            else {
                cout<<"bit is 0"<<endl;
                break;
            }
        }
    }
    if(k>i){
        cout<<"Bit is 0"<<endl;
    }
}

int main(){
    int a, pos;
    cin>>a>>pos;
    kthBitSet(a, pos);
    return 0;
}