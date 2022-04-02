#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> v ){
    
    for(auto it = v.begin(); it < v.end(); it++)
      cout<<(* it)<<" ";
    cout<<""<<endl;
    cout<<"size     : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"--------------------------"<<endl;

    
}

int main(){
/*
    vector<int> v={11,22,33,44,55};
    cout<<"initial vector : "<<endl;
    //printvector(v);
   

    // removues last element
    cout<<"pop_back()"<<endl;
    v.pop_back();
   // printvector(v);
    
    
   // refrence to  front element
   cout<<"front()"<<endl;
    cout<<v.front()<<endl;
    v.front() =12345;
    //printvector(v);
   
    
   // refrence to last element
   cout<<"back()"<<endl;
    cout<< v.back()<<endl;
    v.back() = 54321;
    //printvector(v);
    


*/

    //cout<<"insert"<<endl;
    vector<int> v2 ={10,20,30,40,50};
    //printvector(v2);

    

    v2.insert(v2.begin() , 2345);
    //printvector(v2);

    

    v2.insert(v2.begin() +2 , 1234);
  //  printvector(v2);

    

    v2.insert(v2.begin() , 4, 45678);
  //  printvector(v2);

    vector<int> v3;
    //cout<<"insert value in v3 form here(inclusive) to there(exclusive)"<<endl;
    v3.insert(v3.begin(), v2.begin() , v2.begin()+2);
    //printvector(v3);

   

    v3.insert(v3.begin(), v2.begin() , v2.end()-5);
    //printvector(v3);

   

    //cout<<"erase()"<<endl;
    
    vector<int> v5={10,20,30};
    //printvector(v5);

   
    v5.erase(v5.begin());
    //printvector(v5);

    

    v5.erase(v5.begin() , v5.end());
   // printvector(v5);

   //cout<<"clear()"<<endl;
   vector<int> v6 = { 12,23,45,56,78,89};
   //printvector(v6);

   v6.clear();
   //printvector(v6);

   vector<int> v7 = { 10,20,30,40,50};
   printvector(v7);

   v7.resize(3);
   printvector(v7);

   v7.resize(10);
   printvector(v7);

   v7.resize(15 , 45);
   printvector(v7);


}