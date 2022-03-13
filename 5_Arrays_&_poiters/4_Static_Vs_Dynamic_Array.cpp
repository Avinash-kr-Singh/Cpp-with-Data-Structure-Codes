#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }

}

int main(){
    // static array
    /*int arr[4];
    arr[2]=34;
    printarr(arr, 4);
    cout<<""<<endl;*/

    //dynamic array
   /* int *ptr;
    ptr = new int[5];
    ptr[0] =9;
    ptr[2]= 765;
    printarr(ptr, 5);

    delete []ptr;*/

    int *arr3 = new int[5];
    for(int i=0;i<5;i++){
        arr3[i]= i*i;
     }

    printarr(arr3,5);

     delete []arr3;


   

}