#include<iostream>

using namespace std;

/*
TOKEN  ->> smallest elemnent of program that compiler can understand or anthing/everthing that compiler can understand

    |_____ 1. keywords    -->>having predefined meaning.
    |
    |_____ 2. identifier  -->>name of variable/classes/structuress/array/function .
    |
    |_____ 3. Constant    -->>having fixed values.
    |
    |_____ 4. String      -->>array of characters
    |
    |_____ 5. Special symbols -->>* (pointer), [] (array), {} (start/end) , ~ (destructor) etc
    | 
    |_____ 6. Operators   -->>unary
                              binary
                              ternary

                            */

int main(){
    //Strings are the array of characters and at the end of strings null character are put by compiler.

   /* string str[] ={"C++", " JAVA"};
    cout<<str[0]<<endl;// we can access elemant by index of it.*/

    string str1[5] ={"PYTHON   ", "REACTJS  ","C#       ","         ", "z        "};

 /*   for( string element : str1){// we can access element by for each loop
        cout<<element<<endl;
    }*/

    for(int i=0;i<5;i++){// we can also access element by for 
        cout<<"index is : "<<i<<" "; 
        cout<<"    value is : "<<str1[i]<<"  ";

        cout<<"    address is : "<<str1<<endl;
    }

    //string str2[] ={};

}