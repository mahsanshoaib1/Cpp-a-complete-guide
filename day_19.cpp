//                                                  Strings in C++
/*
    
*/
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string name;
    name = "Ahsan";
    string greet;
    greet = "Hello, hw r u";
                //  concatination of strings

    string both = name+" "+ greet;
    cout<<both<<endl;

                //  Methods of strings in C++

    both.append("han han pata hy sara. ");
    cout<<both<<endl;
    cout<<"The length of string: "<<name.length()<<endl;
    cout<<"The size of string: "<<greet.size()<<endl;
    greet.push_back('y');
    cout<<"After push back: "<<greet<<endl;
    greet.pop_back();
    cout<<"After pop back: "<<greet<<endl;

                //    Indexing of string. 

    cout<<name[3]<<endl;
    cout<<name[0]<<endl;
    
                //   Updating the value in a string

    greet[0] = 'b'; // we can use only single qoutes
    // greet[0] = "J";       // error. 
    cout<<"The updated greet is: "<<greet<<endl;   

    return 0; 
}