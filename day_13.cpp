                                                //       calling fucntion by value            
/*#include<iostream>
using namespace std;

void swapvar(int num1,int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "Inside swap: " << num1 << " " << num2 << endl;   // num1 and num2 are swaped but a  and b are not
}


int main()
{
    int a = 10, b = 20;
    cout << "Before swap: " << a << " " << b << endl;
    swapvar(a, b);
    cout << "After swap: " << a << " " << b << endl;
    return 0;
}
*/


//                                                          calling function using pointers
/*
#include<iostream>
using namespace std;
void swapvar2(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
    int num1=10, num2=20;
    cout<<num1<<" "<<num2<<endl;
    swapvar2(& num1,& num2);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}
*/

//                                                          calling function using reference variable

// #include<iostream>
// using namespace std;
// void swapvar3(int &a, int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;

// }

// int main()
// {
//     int num1=10, num2=20;
//     cout<<num1<<" "<<num2<<endl;
//     swapvar3(num1, num2);
//     cout<<num1<<" "<<num2<<endl;
//     return 0;
// }


//                                                          calling function using reference variable and return by reference

#include<iostream>
using namespace std;
int & swapvar3(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;

}

int main()
{
    int num1=10, num2=20;
    cout<<num1<<" "<<num2<<endl;
    swapvar3(num1, num2)=786;
    cout<<num1<<" "<<num2<<endl;
    return 0;
}