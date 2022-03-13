#include<bits/stdtr1c++.h>
#include<math.h>
using namespace std;

int LCM(int &m, int &n){
    int max1= max(m,n);
    for(int i=max1; ; i++){
        if(i%m==0  && i%n==0){
            return i;
        }
    }
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<LCM(a,b)<<endl;
    return 0;

}