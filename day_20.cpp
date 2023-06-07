//                                 Object Oriented programming

/*
    It is not a new language
    OOP is a technique to write a program we use in C++. 
    It works on the concept of classes and objects
    There is no memory allocated to a class until we make an object of it. 
    class is like a template: contain data and functions called members
    object is used to access the data or functions in class.
    for example,
        We have household items, let's say sugar, salt, and spices, each in a separate box. One box is placed somewhere, while the other
        is placed elsewhere. They function the same way but one is in one place and the other is in another place. Some mixture and dirt
        have been added to them. Now, all those boxes have been placed in a cabinet by mom. Now, that cabinet is like a class.

        Now, whenever we call a function, the cabinet will open, and we can use that function. Now, if someone in the family asks for a
        little sugar, flour, or ice, they won't take it themselves. Someone from the household will take out the item and give as much as needed.
        Now, the household member is an object who is helping in using the items from home. That becomes the object.

        Not all household items are given out freely. Some items are asked from mom, some are given by ourselves, so those items become 
        public. Some items are not given at all, so they become private. And some items are such that even guests can use them, so they become protected.

        
         ghr ka saman hy, yaan aap keh lo cheni, namak, masaly aik aik daby mein pary huy,
    aik dabba kahein para hua, aik kahein aur para hua. same as it is hi functions bna diye, but aik function kahein hein
    dosra kahein aur hy. kuch mixture aur gand dala hua hy. ab un sab daboon ko amma ny rakh dia cabnet mein, ab
    woh cabnet aik class hy. 
    ab jab bhi hum koi function call karein gy to woh cabnet khul jaye ga, aur hum us function ko use kar sakain gy.
    ab ji jnab hamsay aa gy baji thori cheni, aata yaan baraf dy dein. tu woh khud tu ni ly ga na, ghr ka koi banda
    usko cheez nikal kr dy ga, aur jitni chahye jo chahye woh dy ga, ab ghr ka banda object hy jo kia kr rha, saman ko
    ghr sy bahir use krny mein help kr rha. woh hogya object.
    ghr ka sara saman tu ni dainy wala hota na, pehly kuch chezein amma sy pouch kr daini hoti hein, kuch khudi dy
    daity, tu us hisab sy ham jo chezein khud dy daity woh ho gai public, aur jo chezein ni dainy wali woh ho gai
    private aur kuch chezein aisi hoti jo ghr aay mehman bhi istmal kr laity, tu woh gya protected. 
*/

#include<iostream>
using namespace std;

class dataa
{
    private:
        int a, b, c;  // can be used with in the class. can acces outside the class
    public:
    int d,e;
        void setdata(int num1, int num2, int num3);  // declaring inside and definingS outside
        
        void printdata()
        {
            cout<<"The value is: "<<a<<endl;
            cout<<"The value is: "<<b<<endl;
            cout<<"The value is: "<<c<<endl;
            cout<<"The value is: "<<d<<endl;
            cout<<"The value is: "<<e<<endl;
            
        }
};

void dataa :: setdata(int num1, int num2, int num3)
{
    a=num1;
    b=num2;
    c=num3;
}

int main()
{
    dataa d1;
    d1.d=100;
    d1.e = 120;
    // d1.a =13;              error
    d1.setdata(10, 12, 14);
    d1.printdata();
    return 0;
}