                    // variables and comments

/*  computer process everything in the form of numbers and specifically 0 and 1. 
    variables are the containers to store our data. and we use that later when we need.
    Variables has different types. Depending upon the type of data the variable type also changes. that types of a variable are called data types
    The data types in cpp are int, string, char, boolean, float, double
    Based on scope the types of variable are:  (scope meaning the place where the variable is created or exist)
        local and global varibales
*/

#include<iostream>
using namespace std;
int main()
{
    int num1; // creating a variable. int is the datatype of variable. num1 is the name of the variable 
    num1=10;  // assigning a value to our variable
    cout<<"the value of num1 is: "<<num1;  // displaying the variable
    cout<<endl; // adding a line
    return 0; 
}