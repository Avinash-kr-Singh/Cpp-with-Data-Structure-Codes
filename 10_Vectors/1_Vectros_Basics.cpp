#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"------------------------------"<<endl;

    v.push_back(231);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"------------------------------"<<endl;

    v.push_back(21);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"------------------------------"<<endl;

    v.push_back(451);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"------------------------------"<<endl;

    // size gets doubled when vector gets filled
    cout<<"for each loop : "<<endl;
    for(int e : v)
      cout<<e<<" ";
    cout<<""<<endl;
    cout<<"------------------------------"<<endl;

    cout<<"simple for loop :"<<endl;
    for(int i=0 ; i<v.size() ; i++)
      cout<<v[i]<<" ";
    cout<<""<<endl;
    cout<<"------------------------------"<<endl;

    cout<<"v.at() : "<<endl;
    cout<<v.at(1)<<endl;
    cout<<v.at(0)<<endl;
    cout<<v.at(2)<<endl;
     cout<<"------------------------------"<<endl;

    vector<int> v2={10,20,30,40,50};

    for(int e : v2) 
      cout<<e<<"  ";
    cout<<""<<endl;

  //  if we paas by refrence we can make change in original vector
   for(int  &e : v2)
       e=5;
   for(int e : v2) 
      cout<<e<<"  ";


   cout<<""<<endl;



}