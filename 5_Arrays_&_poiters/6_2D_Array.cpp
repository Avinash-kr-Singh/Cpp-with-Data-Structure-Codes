#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[][10], int size1, int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            cout<<arr[i][j]<<" ";
        }cout<<""<<endl;
    }

}
// we have to pass column very imporatnt 
// we need not to assign row number
//we can pass any value of size in function calling like we can call by printarr(arr,2,4) and so on

int main(){
    int arr[][10]={ 
                    {100,101,102,103}, 
                    {300,301,302,303},
                    {500,501,502,503},
                    {700,701}
                
                

                    };

    printarr(arr, 4,10);
    

}