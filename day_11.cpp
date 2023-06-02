#include<iostream>
using namespace std;

                     //                     Structures- a user-defined datatype
struct struct1
    {
        int a;
        int b;
        int c;
        int link;
    };


 


int main()
{
                            


    /*
    Syntax:

    struct structure_name
    {
        data_type member1;
        data_type member2;
        data_type member3;
    };

    calling the members of structure.

        struct structure_name object
        object.member1 = value;
        object.member2 = value;
    */

    
    struct1 s1;
    // struct strust1 *p;
    s1.a = 10;
    s1.b=20;
    s1.c = 30;
    // p->link = NULL;
    cout<<s1.a<<endl<<s1.b<<endl<<s1.c<<endl;


                                        //  Enum

    enum name{Ahsan, ali, abdullah, qasim};
    cout<<"This is enum output: "<<Ahsan<<endl;
    name name1 = ali;
    cout<<name1<<endl;



    //                                             Union

   union teacher
    {
        int id;
        // string name1;
        double salary;
    };

    union teacher uni1;
    uni1.id = 12;
    uni1.salary = 120000;
    cout<<uni1.id<<endl<<uni1.salary<<endl;



    return 0;
}
