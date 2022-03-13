#include<bits/stdc++.h>
using namespace std;

int main(){

    int *arr[3];

    arr[0] = new int[4];
    arr[1] = new int[2];
    arr[2] = new int[3];

  /*  for(int i=0;i<3;i++){
        for(int j=0;j<arr[i].length;i++){
            cout<<arr[i][j]<<" ";
        }cout<<""<<endl;
    }

    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<rows <<" "<<cols;
    
*/

 cout<<sizeof(arr[1])/ sizeof(arr[1][2]);
}
