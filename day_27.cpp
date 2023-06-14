#include<iostream>
using namespace std;



class number
{
    int a;
    public:
        number()
        {
            a = 0;
        }


        number(number &obj4)   // it is a copy constructor, it takes another object. 
        {
            // argument mein aik new reference object bnaya jo dosry object ko refer kry ga. 
            cout<<"copy constructor called"<<endl;
            a = obj4.a;
        }
        // when there is no copy constructor compiler autometically make the one. 


        number(int num)
        {
            a = num;
        }

        ~number()
        {
            cout<<"destructor is invoked."<<endl;
        }

        void display()
        {
            cout<<"the number you wrote is: "<< a<<endl;
        }

};



int main()
{
    number obj1;
    obj1.display();

    number obj2(10);
    obj2.display();

    number obj_2(obj2);
    obj_2.display();
    return 0; 
  
}


