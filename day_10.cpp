//                                                              Pointers

/* pointers are the variables that store the address of another variable
    & is used to get the address of a variable, & is called address of or reference operator
    * is used to get the value of a variable using its address, and * is called dereference operator
    Sif a pointer is assigned to a variable, the value of the variable is changed
*/

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int* b=&a;
    cout<<"the address of the variable a is: "<<&a<<endl;
    cout<<"the address of the variable a is: "<<b<<endl<<endl;

    // value.
    cout<<"the value of the variable a is: "<<a<<endl;
    cout<<"the value of the variable a is: "<<*b<<endl<<endl;

    //pointer to pointer  , store the address of another pointer variable
    int** c=&b;
    cout<<"the address of the pointer b is: "<<&b<<endl;
    cout<<"the address of the pointer b is: "<<c<<endl<<endl;


    //                                                               Arrays

    /*
        collection of items of similar datatyp // declaring an arraye stored in a contigours memory location
        We access the values or items of an array through indexing
        Index always start from 0. means the first value of an array is at 0 index
    */
    
     //     declaring an array
    int arr1[5] = {6,2,3,4,5};  

    int arr2[3];
    arr2[0]=37;
    arr2[1]=38;
    arr2[2]=39;

    //      Accessing the values of array
    cout<<"The value at index 0 is: "<<arr1[0]<<endl;  
    cout<<"The value at index 0 is: "<<arr1[1]<<endl;
    cout<<"The value at index 0 is: "<<arr1[2]<<endl;   //output 3
    cout<<"The value at index 0 is: "<<arr1[3]<<endl;
    cout<<"The value at index 0 is: "<<arr1[4]<<endl<<endl;

    // if we call an index which is not in array, it will return a garbage value
    cout<<"The value at index 0 is: "<<arr1[5]<<endl<<endl; // output a garbage value

    // updating the value of an array
    arr1[0]=10; // updated from 6 to 10


    //      Displaying the values of an array at once. 
    for(int i=0; i<=4; i++)
    {
        cout<<"The value at index: "<<i<<" is "<<arr1[i]<<endl<<endl;
    }

    //                                                              Pointers and Arrays

    /*
    The name of array stores the address of first block. 
    We dont need to use & operator to assign the address to a pointer variable.
    */

    int arr3[5]= {1,2,3,4,5};
    int* p2 = arr3;
    cout<<p2<<endl;    // output address of first block of array arr3. or index 0

    p2++;  // now it stores the address of 2nd block of array. or index 1;
    cout<<p2<<endl;

    p2++;
    cout<<p2<<endl;
    cout<<&arr3[2]<<endl; // output same as upper one, 

    cout<<"Accessing the value: "<<*p2<<endl;
    return 0;
} 