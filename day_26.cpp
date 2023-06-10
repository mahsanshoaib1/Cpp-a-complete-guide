//                           Constructors
/*
    have same name as of class
    have no return type
    run autometically on creating an object
    used for initialization
    could be of two types: default constructor and parameterized constructor
    default constructor: takes no argument
    parameterized constructor: takes arguments
    class can have more than one constructors
    compiler differetiate between them on the basis of their number of arguments and types of arguments
*/

#include <iostream>
using namespace std;

class operators
{
private:
    int a, b, c;

public:
    /*
        for dynamic construcotr, at least one default construcotr must be there,
        could be empty. otherwise, it will through an erro
    */
    operators()
    {
        cout << "Welcome to my Class. This is the default constructor. " << endl;
        a = 0;
        b = 0;
    }
    operators(int num1, int num2) // 2nd constructor
    {
        cout << "We are going to set our values in this constructor. This is parametarized constructor" << endl;
        a = num1;
        b = num2;
    }
    operators(int num1, int num2, int num3) // 3rd construcot
    {
        cout << "this is also a parametarized constructor. It takes three values and set them" << endl;
        a = num1;
        b = num2;
        c = num3;
    }
    int sum()
    {
        cout << "The sum of two values is " << a << " " << b << endl;
        return a + b;
    }
    int multiply()
    {
        cout << "it multiply three numbers" << endl;
        return a * b * c;
    }
};

int main()

{
    operators op1; // no arguments, only default construcotr is running.
    cout << op1.sum() << endl;

    operators op2(2, 3); // passing 2 arguments, 2nd construcotr and default construcotor is running
    cout << op2.sum() << endl;

    // taking value fromm user and passing
    int d, e, f;
    cout << "write three numbers: " << endl;
    cin >> d >> e >> f;
    operators op3(d, e, f); // passing 3 arguments, 3rd construcotr and default construcotor is running
    cout << op3.multiply() << endl;
    return 0;
}