#include<iostream>
using namespace std;

class complex;      // declaring a class which we will define later. 

class calculator   // defining a new class whose friend function we are gonna use in previous class.
{
    public:
        int sum(complex o1, complex o2); /* declaring the function but not defining. because we are
        gonna use private data of other class which we have not declared yet. 
        */
};

class complex
{
    private:
        int a, b;
        friend int calculator :: sum(complex o1, complex o2); // declaring the friend function of other class. so that we can access private data in function
    
        // we can also make a class as friend. then we can call any functions and data directly, rather then declaring the each function individually
       
        friend class calculator;
    public:
        void setnumber()  // setting the value of private numbers
        {
            cout<<"enter the real and imaginary number "<<endl;
            cin>>a>>b;
        }
        int sumi() // getting sum of both values
        {
            return a+b;
        }
};
int calculator :: sum(complex o1, complex o2)  // defining friend function which we declared int both classes earlier.
        {
            cout<<"the sum is "<<endl;
            return (o1.sumi()+o2.sumi()); // using the sum of two objects of other class. again adding them 
        }

int main()
{
    complex obj1; // declaring 2 objects of our first class. its private data we will use in another class
    complex obj2;

    obj1.setnumber(); // setting value for one object
    // obj1.sumi();

    obj2.setnumber(); // setting value for 2nd object
    // obj2.sumi();

    calculator object1;

    cout<<object1.sum(obj1, obj2); // calling th funcion of 2nd class
    return 0;
}