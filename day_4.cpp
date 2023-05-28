

/*
    stream means flow of bits. input stream means flo of bit from mouse/keyboard to processor
    output stream means flow of bits from processor to screen or user.  
    "<<" . this operator is called insertion operator 
    ">>" this operator is called extraction operator
*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"write the value of number 1: "<<endl;
    cin>>num1;
    cout<<"write the value of number 2: "<<endl;
    cin>>num2;
    cout<<"The sum is: "<<num1+num2<<endl;


    return 0; 
}