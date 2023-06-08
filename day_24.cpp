#include<iostream>
using namespace std;

class oper
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"write the 2 values"<<endl;
        cin>>a>>b;
    }
        void sum()
        {
            c=a+b;
            cout<<"the sum of 2 values is "<<c<<endl;
        }
};
int main()
{
            //          making array of objects.
    oper sumas[5];
    sumas[0].getdata();
    sumas[0].sum();
    sumas[1].getdata();
    sumas[1].sum();
    sumas[2].getdata();
    sumas[2].sum();
    sumas[3].getdata();
    sumas[3].sum();

    for (int i=0; i<=4;i++)
    {
        sumas[i].getdata();
        sumas[i].sum();
    }


    return 0;
}