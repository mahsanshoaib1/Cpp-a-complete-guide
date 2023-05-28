//                                                                   Operators in cpp

/*
    There are two types of header files
    1. System header files: It comes with the compiler
    2. User-defined header files: It is written by the programmer
    Syntax of user defined header file: create a file in the same folder and call that file with include. #include "this.h"
*/

#include<iostream>
using namespace std;
int main(){
    int a=10, b=20;
            // Arithmetic Operators

    cout<<"first type of operators are Arithmetic operators that are: "<<endl;
    cout<<"+ is the first arithmetic operator we can use it like : "<< a+b<<endl;
    cout<<"- is the 2nd arithmetic operator we can use it like : "<< a-b<<endl;
    cout<<"* is the 3rd arithmetic operator we can use it like : "<< a*b<<endl;
    cout<<"/ is the 4th arithmetic operator we can use it like : "<< b/a<<endl;
    cout<<" '%'  is the 5th arithmetic operator we can use it like : "<< a%b<<endl;
    cout<<"++ is also use like : "<< a++<<endl; // print a then add 1
    cout<<"-- is also use like : "<< a--<<endl; // print a then minus 1
    cout<<"++ is also use like : "<< ++a<<endl; // add 1 then print a
    cout<<"-- is also use like : "<< --a<<endl; // minus 1 then print a
    cout<<endl;

            // Assignment Operators -------------> used to assing the value to a variable. ---> these are =, +=, =+

            // comparison Operators  -----------> Used to compare values or variables
    
    cout<<"comparison operators are: "<<endl;
    cout<<"== is the first comparison operator we can use it like : "<< (a==b)<<endl; // () this bracket is necessory
    cout<<"!= is the 2nd comparison operator we can use it like : "<< (a!=b)<<endl;
    cout<<"> is the 3rd comparison operator we can use it like : "<< (a>b)<<endl;
    cout<<"< is the 4th comparison operator we can use it like : "<< (a<b)<<endl;
    cout<<">= is the 5th comparison operator we can use it like : "<< (a>=b)<<endl;
    cout<<"<= is the 6th comparison operator we can use it like : "<< (a<=b)<<endl;

            // Logical Operators ---------------> Used to combine conditional statements
    cout<<"Following are the logical operators: "<<endl;
    cout<<"&& is the first logical operator we can use it like : "<< ((a==b) && (a<b))<<endl; // if both the values are true
    cout<<"|| is the 2nd logical operator we can use it like : "<< ((a==b) || (a<b))<<endl; // if any one of the value is true
    cout<<"! is the 3rd logical operator we can use it like : "<< !(a==b)<<endl; // if the value is false then it will give true and vice versa

            // Bitwise Operators ---------------> Used to compare binary numbers
    





    return 0; // if we dont return the value, it will give the warning
}
