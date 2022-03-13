#include<bits/stdc++.h>
#include<math.h>
using namespace std;


void printpower( string s){
    int n = s.length();
    int powsize= pow(2, n);

    for(int counter =0 ; counter< powsize; counter++){
        for(int j=0;j<n;j++){
            if(counter & (1<<j))//cheing set bit 
                cout<<s[j];
            
        }
        cout<<" "<<endl;
       
    }

}



int main(){
    string s;
    cin>>s;
    printpower(s);
    return 0;
}