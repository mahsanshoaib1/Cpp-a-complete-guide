//                                          loops

/*
    There are 3 loops in c++;
    1. for loop
    2. while loop
    3. do while loop

*/

#include <iostream>
using namespace std;
int main()
{
    // for loop
    int a=5;
    for (int i=1; i<=10; i++)
    {
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    }
    

    // while loop
    int b=5;
    int i=1;
    while (i<=20)
    {
        cout<<b<<" * "<<i<<" = "<<b*i<<endl;
        i++;
    }

    // while loop
    
    while(true)
    {
        cout<<"hello world"<<endl;
        break;
    }

    // do while loop
    int c=2;
    i=1;
    do
    {
        cout<<c<<" * "<<i<<" = "<<c*i<<endl;   
        i++;
    }while(i<=10);

// break and continue
     
    for(int i=1;i<=5; i++)
    {
        if(i==3)
        {
            continue;  // skip the itreation and 3 will not be written 
        }
        cout<<i<<endl;
    }

    for(int i=1;i<=5; i++)
    {
        if(i==4)
        {
            break;  // break the loop and no more value will be written 
        }
        cout<<i<<endl;
    }
    return 0;
}