#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   int n=4, x=12;

   vector<int> v(n ,x);

   for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";

    cout<<""<<endl;

    vector<int> :: iterator it;

    for(int it=0;it<v.size();it++)
      cout<<v[it]<<" ";

    cout<<" "<<endl;

    // it is a refrence vraible so to access we need pointer to derefrence it
    for(auto it = v.begin(); it < v.end(); it++)
      cout<<(*it)<<" ";

    
      






}