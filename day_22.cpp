// arrays in class and static variable
    /* 
    static member functions in class are the functions which only accepts static variables
    they are not called by an object. nameOfClass :: static function
*/

#include <iostream>
using namespace std;

class shop
{
    int itemprice[100]={200};
    int itemid[100] ={1001} ;
    static int counter;        // static variable, by default 0. contains its previous value
    public:
    void price()
    {
        cout<<"The price of item is: "<<itemprice[0]<<endl;
        
    }
    void id()
    {
        cout<<"The id of item is: "<<itemid[0]<<endl;
        counter++;
    }
    void display()
    {
        cout<<"the counts of item is: "<<counter<<endl;
    }


};
int shop :: counter;   // declare it in the class and outside the class as well.

int main()
{
    shop obj1;
    shop obj2;
    obj1.id();
    shop obj3;
    obj1.id();
    obj3.id();
    obj1.price();
    obj1.display();
    return 0;
}