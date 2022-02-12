#include<iostream>

using namespace std;

//TOKEN ->> smallest elemnent of program that compiler can understand or anthing/everthing that compiler can understand

/*
TOKEN
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


//KEYWORDS -->> keywords are those words which have some predefined meaning in  language.

int main(){
    // using , return, for , if , while , bool  etc are the examples of keywords.
    int main=10;// main is not keyword
    cout<<main<<endl;

    /*int using =10;// this will not work because using is a keyword in c++, and same with all cases..
    cout<<using<<endl;*/


   /* int #include=10;
    cout<<#include<<endl;*/

    int include=6;//include will work but #include will not work it will display error.
    cout<<include<<endl;

    /*int for=3;
    cout<<for;*/

    return 0;

}