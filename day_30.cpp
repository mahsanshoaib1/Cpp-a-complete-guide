// same code fo day29, but addition of constructors.

#include <iostream>
using namespace std;

class Base // parent class
{
private:
    int data1; // we cannot inherit it, we will call it in a public fucntion, then will use that public function in

public:
    Base() // default construcotr
    {
        // it will autometically run on the creation of object of parent class and child class as well.
        // child class ky object ban'ny pr bhi yeh invoke ho jay ga
        cout << "welcome, Im in parent class ma boy" << endl;
    }
    /*
             cannot make two default constructors in one class
        Base()

        {
            cout<<"welcome, Im in parent class ma boy"<<endl;
        }
*/

    int data2;
    void setdata(); // give the value to data1 and data 2
    int getdata1(); // return data1, as we cannot use data1 directly in child class
    int getdata2();
};

void Base ::setdata() // defining setdata outside the class
{
    data1 = 10;
    data2 = 20;
}

int Base ::getdata1() // definig
{
    return data1;
}

int Base ::getdata2() // definig
{
    return data2;
}

class derived : public Base // child calss, we can access, call, use the public members of Base class in it and through object of this class
{
private:
    int data3; // cannot access this outside the class
public:
    // Base()                 // through an error, cannot define constructor of parent in child
    // {
    //     cout<<"Im in child class boy"<<endl;
    // }
    derived()
    {
        cout << "now im in child class boy" << endl; // first output will be of parent constructor, then child constructor then other functions
    }

    int process();
    void display();
};

int derived ::process() // giving value to data3, then giving data3 to the other public function as we cannot access data3 oustide the class, so we will use a public function
{
    data3 = data2 * getdata1();
    return data3;
}

void derived ::display() // it displays our data1,
{
    cout << "value of data1 is " << getdata1() << endl; // data1 is private in parent class, thats we havnt call it directly in child class, we called it through a public function
    cout << "value of data2 is " << data2 << endl;      // data2 and data3 are public thats why we can call it in child class
    cout << "value of data3 is " << data3 << endl;      // displaying data3 using the variable.
    // process();
    cout << "value of data3 is " << process() << endl; // displaying data3 using the function
}

int main()
{
    derived dir1;
    dir1.setdata();
    dir1.process();
    dir1.display();
    return 0;
}