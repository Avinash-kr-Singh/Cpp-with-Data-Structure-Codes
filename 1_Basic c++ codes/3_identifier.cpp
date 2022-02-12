#include<iostream>

using namespace std;

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

    int main(){
        //identifier -->> name of variable/classes/structuress/array/function . ie that we define on our own.
        cout<<"Started!!"<<endl;

        int a=6;//int is identifier which tells a(varibale) contain data of integer type.

        struct student{//struct is a identifier which tells student is varibale of struct datatype.
            short int roll_no;
            char name[50];
        }s;




        cout<<"ended"<<endl;

        return 0;
    }