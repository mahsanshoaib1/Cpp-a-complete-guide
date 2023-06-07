                //            Nesting of member functions
    // defininf or calling of one function into another function


#include<iostream>
#include<string>
using namespace std;

class binary    // making a class
{
    // this class take input as string from user and check if input is binary or not
    private:
    void check_data(); // declaring inside the private, we cannot access it outside the class
    string s;

    public:
    void getdata()  /// defining function to get data
    {
        cout<<"Enter a binary number: ";
        cin>>s;
        
    check_data();  // calling it inside this function. autometically run. this is called nesting
    }

    void display();
};

void binary :: check_data() // defining outside to check data
{
    for(int i=0; i<=s.length()-1; i++)
    {
        if (s.at(i)!='1' && s.at(i)!='0')
        {
            cout<<"noot good"<<endl;
            exit(0);
            // break;
           
        }
    }
}

void binary ::display()
{
    for (int i=0; i<=s.length()-1; i++)
    {
        cout<<s.at(i);
    }
    
}

int main()
{
    binary obj1;
    obj1.getdata();
    // obj1.check_data();
    obj1.display();

    return 0;
}