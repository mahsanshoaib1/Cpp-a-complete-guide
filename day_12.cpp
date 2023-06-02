//                                          Functions
/*

    fucntion declaration.. function prototype
    function defination
    function calling
*/


/*
    function delaration:
        return_type function_name(parameter list);

    Syntax of function definition:
    return type func_name(parameter list(optional))
    {
        body of function;
    }

    syntax of funtion calling
    cout<<function_name(arguments(optional));
    functoin_name();
*/



// formal parameters(which are declared as a parameter in a function) and actual parameters (declared in the main fucntion)



#include<iostream>
using namespace std; 
int sum(int, int);              // declaring our function

int main()
{
    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1>>num2;
    cout<<sum(num1, num2)<<endl;   // calling the function and giving providing values
    return 0;

}

int sum(int a, int b)   // defining our funtion
{
    int c=a+b;
    cout<<"The sum of two numbers you provides is: "<<endl;
    return c;
}