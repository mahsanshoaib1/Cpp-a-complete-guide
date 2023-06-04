#include<iostream>
using namespace std;
int sum(int, int, int);
int sum(int, int);
int main()
{

    //                                         Function Overloading
    /*
        Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
        Function overloading can be considered as an example of polymorphism feature in C++.
        Following are some rules to define overloaded functions:
        1.Overloaded functions must differ either by the arity or data types.
        2.Overloaded functions may or may not have different return types.
        3.Overloaded functions can change the default argument values.
        4.Overloaded functions can be declared as const or volatile.
    */
    int a,b,c;
    cout<<"write 3 numbers: ";
    cin>>a>>b>>c;
    cout<<"The sum of 3 numbers is: "<<sum(a, b, c)<<endl;
    cout<<"The sum of 2 numbers is: "<<sum(a, c)<<endl;
    return 0;
}

int sum(int num1, int num2, int num3)
{
    cout<<"This output is from the function with three arguments"<<endl;
    return num1+num2+num3;
}

int sum(int num1, int num2)
{
    cout<<"This output is from the function with two arguments"<<endl;
    return num1+num2;
}