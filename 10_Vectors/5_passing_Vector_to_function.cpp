#include<bits/stdc++.h>
using namespace std;

void fun (vector<int> v){
    v.push_back(12345);


}

void funref( vector<int> &v){

    v.push_back(15);

}

void constfunref(const  vector<int> &v){

    // v.push_back(15);
    // no cnages can be made in vector

}

int main(){
    vector<int> v= {10,20,30,40,50};
    
    cout<<"initail vector : ";
    for(auto it = v.begin(); it < v.end(); it++)
       cout<<(* it)<<" ";
    cout<<""<< endl;
    cout<<"------------------------------------------"<<endl;
    
    cout<<"pass by value : ";
    fun(v);
    for(auto it = v.begin(); it < v.end(); it++)
       cout<<(* it)<<" ";
    cout<<""<<endl;
    cout<<"------------------------------------------"<<endl;

    cout<<"pass by address : ";
    funref(v);
    for(auto it = v.begin(); it < v.end(); it++)
       cout<<(* it)<<" ";





}
       
        