#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " "<<endl;
    }

}


int main(){
    // we cannot resize a array
    //create a new array and make point old array to it

    int * arr1 = new int[5];
    for(int i=0;i<5;i++){
        arr1[i]=(i+1)*i;
    }

    printarr(arr1, 5);

    cout<<"-------------------------------"<<endl;
    int * arr2 = new int[10];

    for(int i=0;i<5;i++){
        arr2[i] = arr1[i];
    }

    delete[] arr1;
    arr1= arr2;
    arr2= NULL;

    printarr(arr1, 10);

}