#include<bits/stdc++.h>
using namespace std;
 
void Twooddocc(int A[], int n)
{
    // Find XOR of all numbers
    int xor1 = 0;
    for (int i = 0; i < n; i++)
        xor1 = xor1 ^ A[i];

    int set_bit = xor1 & (~(xor1 - 1));

    int res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] & set_bit)
            res1 = res1 ^ A[i];
        else
            res2 = res2 ^ A[i];
    }

    cout << res1 << " " << res2;
}


int main(){
   int size;
   cin>>size;
   cout<<""<<endl;
   int arr[size];

   for(int i=0;i<size;i++){
       cin>>arr[i];
   }

    
    Twooddocc(arr, size);
    return 0;

}