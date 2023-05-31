// Control structure in CPP

// Sequence structure           Normal flow
// Selection structure          If-else
// Loop Structure               loops


//                                                      Selection structure


#include<iostream>
using namespace std;
int main()
{
    // if else
    int age=20;
    if (age>=18)
    {
        cout<<"you are older than 18."<<endl;
    }

    // if else ladder
    age=8;
    if (age>=18)
    {
        cout<<"you are older than 18."<<endl;
    }
    else if (age>=10)
    {
        cout<<"you are older than 10."<<endl;
    }
    else if (age>=5)
    {
        cout<<"you are older than 5."<<endl;
    }
    else
    {
        cout<<"you are older than 1."<<endl;
    }


//                                                                         switch case 

    int a=19;
    switch (a)
    {
    case 18:
        cout<<"you can drive"<<endl;
        break;
    case 19:
        cout<<"you can vote"<<endl;
        break;    
    default:
        break;
    }



    return 0;
}