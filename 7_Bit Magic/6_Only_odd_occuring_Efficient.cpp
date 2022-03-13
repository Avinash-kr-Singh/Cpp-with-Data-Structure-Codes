#include<bits/stdc++.h>
using namespace std;


int oddocc(int A[], int &n){
    int res=0;
    for(int i=0;i<n;i++){
        res= res^A[i];
    }
    return res;
}



int main(){
   int size;
   cin>>size;
   cout<<""<<endl;
   int arr[size];

   for(int i=0;i<size;i++){
       cin>>arr[i];
   }

    
   cout<< oddocc(arr, size);
    return 0;

}