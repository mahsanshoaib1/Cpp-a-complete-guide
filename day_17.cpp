#include<iostream>
using namespace std; 


//                               Recalling some basics of function


// int sum(a,b)   // through an error            // while declaring the function, always declare its own arguments. 
                                                // we cannot use main variables in other function although if we pass them while calling the function
// {
//     return a+b;
// }

int sum(int a, int b)   // we cannot access this a and  outside this sum() function
{
    int c= a+b;
    return c;        // i can print it directly using cout<<sum(). i cannot c out side the function. i have to store it somewhere.
}


int main()
{
    
    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1>>num2;
    cout<<sum(num1, num2)<<endl;   // calling the function and giving providing values
    return 0;


}