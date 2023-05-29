//  :: this operator is called scope resolution operator

#include<iostream>
using namespace std;
int c=45;
int main()
{

    int a=10, b=10, c=a+b;
    cout<<"the value of local c is "<<c<<endl;
    cout<<"the value of global c is "<<::c<<endl<<endl;   // we use scope of resolution operator :: to access the global variable                  

     
     //---------------------------------------- float, double and long double literals


    float d=34.4f;      // by default the type of point number is double. we can change it to f by typing f at the end of the value
    long double e = 34.4l;
    cout<<"the size of 34.4 is "<<sizeof((34.4))<<endl;  // by default double. output 8
    cout<<"the size of 34.4f is "<<sizeof((34.4f))<<endl; // changed to f. output 4
    cout<<"the size of 34.4F is "<<sizeof((34.4F))<<endl; // 
    cout<<"the size of 34.4l is "<<sizeof((34.4l))<<endl; // l for long. output 16
    cout<<"the size of 34.4L is "<<sizeof((34.4L))<<endl;    
    cout<<endl;

                                                            
    //--------------------------------------------------Reference variables


    float x = 455;
    float & y = x;      // y is reference variable of x. it is a nickname of x. it is not a copy of x. it is just a nickname of x
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;

    //---------------------------------------------------------typecasting
    // changing the type of a variable

    int m = 45;
    float n = 45.46;
    cout<<"the value of m is "<<(float)m<<endl;  // typecasting m to float
    int o = int(n);
    cout<<"The expression is: "<<m+n<<endl;    // output in float. 90.46
    cout<<"The expression is: "<<m+(int)n<<endl; // output in int 90
    cout<<"The expression is: "<<m+int(n)<<endl; // output in int 90


    return 0;
}