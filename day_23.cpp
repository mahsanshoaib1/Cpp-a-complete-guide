// this function is about giving object of class as argument


#include<iostream>
using namespace std;

class sums
{
    private:
        int a, b, sum;
    public:
        void getdata()                      // to get data from user
        {
            cout<<"write the value of a ";
            cin>>a;
            cout<<"write the value of b ";
            cin>>b;
        }
        void sumdata()              // to sum the data given by user
        {
            sum = a + b;
            
        }
        void display()              // to display the sum
        {
            cout<<"the sum of a and b is: "<<sum<<endl;
        }
        void objectdata(sums obj1, sums obj2) 
        /*
            as we create variables in bracket and pass them our actual variables. just like that. 
            we are going to pass an object to the function to we declare objects that will caught 
            the data of object we pass. 
            Although we passed the object. but we will call only that functions or data that we need. 
        */
        {
            cout<<"the sum of data of object one is ";
            cout<<obj1.sum<<endl; // calling the variable of obj1 which actually stores the data of o1
            obj1.display();   // calling the function of obj1 which actually stores the data of o1
            cout<<"the sum of data of object two is ";
            cout<<obj2.sum<<endl;
            obj2.display();
        }

};

int main()
{
    sums o1;
    sums o2;
    sums o3;
    o1.getdata();
    o1.sumdata();
    o1.display();
    o2.getdata();
    o2.sumdata();
    o2.display();
    o3.objectdata(o1,o2);

    return 0;
}