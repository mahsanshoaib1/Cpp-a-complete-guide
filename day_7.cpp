//-------------------------------------Constants, manipulators, Operator Precedence

#include<iostream>
#include<iomanip>   //a library for a manipulator
using namespace std;

int main()
{
    const int a=5; // we cannot change the value of a constant, unlike the variables
    cout<<"the value of a was: "<<a<<endl;
    // a=10; this will through an error

    //                                      manipulators

    // endl is a manipulator. it is used to end the line
    int b=1, c=10, d=100;
    cout<<"the value is : "<<endl;
    cout<<"the value is : "<<endl;
    cout<<"the value is : "<<endl;

    cout<<endl<<"With setw"<<endl;
    cout<<"the value is : "<<setw(4)<<b<<endl;  // this function tells that upcoming word is gonna take letter space.   
    cout<<"the value is : "<<setw(4)<<c<<endl;
    cout<<"the value is : "<<setw(4)<<d<<endl;


    //                                  Operator Precedence
    // kisi bhi expression mein konsa operator pehly kaam kry ga 
    // which operator will execute first in an expression
    return 0;
}