// program 13.9 page 403
// write a class that has marks and grade as data members.
// A constructor with two parameters initializes data member function show displays the values of data membres. Create two objects and display the values.

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;
    char grade;
public:
    Student(int m, char g)
    {
        marks = m;
        grade = g;
    }
    void show()
    {
        cout<<"Your marks are: "<<marks<<endl;
        cout<<"Your grade is: "<<grade<<endl;
    }
};

int main()
{
    Student s1(730,'A'),s2(621,'B');
    cout<<"Record of student 1 is: "<<endl;
    s1.show();
    cout<<"\nRecord of student 2 is: "<<endl;
    s2.show();
    cout<<endl;
    return 0;
}
