#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=4;
    int *ptr = 0;
    cout<<ptr<<endl;
    //cout<< *ptr <<endl;

    cout<< "-------------------------------------------"<<endl;

    int a2= 8;
    int *ptr2 = &a2;
    cout<< *ptr2 <<endl;
    cout<< ptr2 <<endl;
    cout<< a2 <<endl;
    cout<< &a2 <<endl;

    cout<< "-------------------------------------------"<<endl;

    int a3=10;
    int *ptr3 = &a3;
    
    cout<< a3<<endl;
    cout<< *ptr3++ <<endl;

    cout<< "-------------------------------------------"<<endl;

    int arr[6]={3,45,67,86,44,6};
    cout<< arr <<endl; //gives address because array is itself a address to first element of array.4
    cout<< arr[0] <<endl;//element at index 0
    cout<< *arr <<endl;// element at index 0
    cout<< *arr +1 <<endl;// prints element at index 0 and adds 1 to it
    cout<< * (arr +1) <<endl;//element at index 1
    cout<< arr[3] <<endl;
    // NOTE  
    cout << * (arr + 3) <<endl;
    cout << * (3  + arr) <<endl;

    // &arr[O] , &arr , arr -- al  gives address of arr array.
    cout<< "-------------------------------------------"<<endl;

    cout<<sizeof(arr)<<endl;// 6 * size of int i.e 4 -->> 6.4*
    cout<<sizeof(&arr)<<endl;// gives the size of pinter.
    cout<<sizeof(*arr)<<endl; //gives the size of datatype of element at index 0

   //arr[i] = * (arr + i)
   //i[arr ] = * (i +arr) -->> array i of index as arr is equal to derefrencing pointer to array (i.e index 0 ) + adding arr index to it.

  //
  





}