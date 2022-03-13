#include<bits/stdc++.h>
using namespace std;
int countprint =0;

 /*void fun1(int size1){
    cout<<" " <<endl;
    cout<<" "<<endl;
    countprint++;
    cout<<countprint<<". function 1  : "<<endl;
    int arr[100]={0};
    for(int i=0 ; i<size1 ; i++){
        cout<<arr[i]<<" ";
    }cout<<" "<<endl;

}

void fun2(int size2){
    cout<<" " <<endl;
    cout<<" "<<endl;
    countprint++;
    cout<<countprint<<". function 2  : "<<endl;

    int arr[100];
    countprint++;
    cout<<countprint<<". give input to array of function 2: "<<endl;
    for(int i=0;i<size2;i++){
        cin>>arr[i];
    }

    countprint++;
    cout<<countprint<<". priting array of function 2 :"<<endl;
    for(int i=0;i<size2;i++){
        cout<<arr[i]<<" ";
    }cout<<""<<endl;



}
*/
  void fun3(int size3){
    cout<<" " <<endl;
    cout<<" "<<endl;

    countprint++;
    cout<<countprint<<". function 3 : "<<endl;


    int arr[1000];
    fill_n(arr,size3,3);//By this code all the values of the array will get initialized by 3

    for(int i=0;i<size3;i++){
        cout<<arr[i]<<" ";
    }cout<<""<<endl;

  }

int main(){
    countprint++;
    cout<<countprint<<". main function staretd \n";
    int size;
    cin>>size;

    int arr[100];
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }cout<<""<<endl;


    //fun1(5);

    //fun2(3);

    fun3(5);


    countprint++;
    cout<<countprint<<". main funtion ended. \n";

}