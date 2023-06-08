   //                      Friend function

    /*
        friend function is not the member of the class but can access the private members
        class. friend word is used to declare the friend function
        normally takes an object as argument
    */
   
#include<iostream>
using namespace std;

class sum
{
    private:
        int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        friend int add(sum s);
};

int add(sum s)
{
    return (s.a+s.b);
}

int main()
{
    sum s1;
    int x, y;
    cout<<"write two values ";
    cin>>x>>y;
    s1.setdata(x, y);
    cout<<add(s1);


    return 0;
}