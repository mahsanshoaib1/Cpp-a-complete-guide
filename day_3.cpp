//                                  making variables of different data types


/*  build in data types are      char, string, bool, float, double
    user-define datatypes are   Struct, Union Enum 
    Derived data types are      Array, Pointer, Reference, function
*/

/*  \n is used for next line
    the variable defined in a fucntion is called local variable. if defined outside the fucntion it is called golbal variable*/

#include<iostream>
using namespace std;
int glo = 10;  // global variable. defined outside the function

int main(){
    int var1=10;
    float var2=5.6;
    char var3 = 'a';  // char is written in a single qoute and store one value. 
    bool var4 = true; // its output will be 1. 1 = true and false = 0.
    char var5[6] = "ahsan";  // by this char store more values and written in qoute and we have to put length of char+1 as index
    cout<<"the value of var1 is: "<<var1<<"\n the value of var2 is: "<<var2<<"\n the value of var3 is: "<<var3<<"\n the value of var4 is: "<<var4<<endl;
    cout<<"the value of global variable is: "<<glo<<endl;
    cout<<"the value of another char var5 is: "<<var5<<endl;
    return 0; 
}