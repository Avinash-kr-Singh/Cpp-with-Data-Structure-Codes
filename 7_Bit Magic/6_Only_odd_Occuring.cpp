#include<bits/stdc++.h>
using namespace std;


void oddocc(int A[], int &n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(A[i] == A[j]){
                count++;
            }
        }
        if(count %2 != 0){
            cout<<" "<<endl;
            cout<<A[i];
        }
    }
}



int main(){
   int size;
   cin>>size;
   cout<<""<<endl;
   int arr[size];

   for(int i=0;i<size;i++){
       cin>>arr[i];
   }

    
    oddocc(arr, size);
    return 0;

}