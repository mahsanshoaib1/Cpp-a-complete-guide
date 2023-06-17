//                          Single Inheritence
#include <iostream>
using namespace std;

class employ // parent class whose data is gonna use in child classes
{
protected:
    int id, roll_number, salary, marks;

public:
    void display()
    {
        cout << "data of student is " << roll_number << " " << marks << endl;
        cout << "data of teacher is " << id << " " << salary << endl;
    }
};

// class child_className : visibily_mode parent_class_name
class student : public employ // 1st child class, which sets data for students only
{
public:
    void setdata()
    {
        cout << "write your roll number and marks " << endl;
        cin >> roll_number >> marks;
        // display();
    }
};
class teacher : public employ // 2nd child class, which sets data for teachers only
{
public:
    void setdata()
    {
        cout << "write your id and salary " << endl;
        cin >> id >> salary;
        // display();
    }
};

int main()
{
    employ emp1;
    emp1.display(); // it will display 0 0 , as no data is given

    student stu1;
    stu1.setdata(); // setting data of student
    stu1.display(); // it will display student marks and id, while teacher datat will remain 0 0

    teacher tea1;
    tea1.setdata(); // settting data for teacher
    tea1.display(); // display 0 0 for student as only teachers data is given.

    return 0;
}