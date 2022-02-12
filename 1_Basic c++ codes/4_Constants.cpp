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
    //Constant -->> which have the same value throughout our program, we donot need to change ex pi, sin90 etc

    const float pi= 3.14f;//we nedd to write const keyword before our variable.
    cout<<pi<<endl;

    /*const int x;// this can not be done we need to initiliaze value at the time of decelaration only
    x=8;
    cout<<x;*/
    cout<<"NOTE : ";
    cout<<"initializationa and decleration at same time.."<<endl;

    cout<<" "<<endl;

    return 0;

}