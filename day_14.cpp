#include<iostream>
using namespace std;
// int company(int);
void company(int exp=5)
{
    if (exp>=5)
    {
        cout<<"You can work with us"<<endl;
    }
    else
    {
        cout<<"you are not eligible."<<endl;
    }

}

//                                          Inline functions
    /*
        inline functions are those which are defined in the same line where they are called. They are used to reduce the time of execution
        the calling of the inline fucntion is replaced by the code of the function
    */
inline int product()
   {
    int a=3,b=2;
    return a*b;
   }

int main()
{

    cout<<product()<<endl;
   
    //                                  default values in functions
    /*
        default values of arguments are those which are declared in paranthesis while defining a function. We can overwrite them
    */
    int a;
    cout<<"write your expericnce: ";
    cin>>a;
    cout<<"the default criteria is 5 so you can  "<<endl;
    company();

    cout<<"the default criteria is 5 so "<<endl;
    company(a);

    //                                          constants are immutable, we use key word const to declare a constant
    const int num3=9;
    cout<<"the value of num3 is: "<<num3<<endl;
    // num3=10; // this will give an error
    cout<<"the value of num3 is: "<<num3<<endl;


    //                                          Static. Static variables initialize only one time

    for (int i=0; i<=10; i++)
    {
        int b = 0;  
        b++;
        cout<<"the value of b is: "<<b<<endl;
    }

    for (int i=0; i<=10; i++)
    {
        static int c=0;     // this will execute only one time
            c++;
            cout<<"the value of c is: "<<c<<endl;
    }



   
    return 0;
}

