#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 10,20,30,40,50,60};
    int size = sizeof(arr)/ sizeof(arr[0]);

    // size and capacity of vector will be fixed , 
    // here size doesn't gets doubled when vectro gete filled
    vector<int> v(arr , arr+size);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(auto it = v.begin(); it <v.end();it++){
        cout<<(& it )<<" - ";// prints address
        cout<<(* it )<<" ";// prints value at given address
        cout<<" "<<endl;
    }
    cout<<" "<<endl;

    for(auto it = v.rbegin(); it <v.rend();it++)
      cout<<(* it )<<" ";
    cout<<" "<<endl;
}