#include<bits/stdc++.h>
using namespace std;

bool isPalindome(int n){
    int temp= n;
    int rev=0;
    int lastDigit;
    while(temp>0){

        lastDigit= temp%10;
      
        rev= rev*10 + lastDigit;

        temp= temp/10;

    }
    return(n==rev);
}

int main(){
    int a;
    cin>>a;
    cout<<isPalindome(a);
    return 0;
}