#include<iostream>
using namespace std;


    //                                          Recurions. calling the function in its own body. it works like a loop
    // simple example
void greet()
{
    static int i=0;
    i++;
    if (i>=5)
    {
        cout<<"done"<<endl;
        return;
    }
    cout<<"good morning"<<endl;
    greet();
}

//         finding factorial through recurion function

int fact(int num)
{
    if (num<=1)
    {
        return 1;
    }
    return num*fact(num-1);
}

/*
    fact(4)=4*factorial(3)
    fact(4)=4*3*factorial(2)
    fact(4)=4*3*2*factorial(1)
    fact(4)=4*3*2*1
*/

int main()
{
    int a;
    cout<<"write a number: ";
    cin>>a;
    cout<<fact(a)<<endl;
    greet();
    return 0;
}