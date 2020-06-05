//write a class Result that contains roll no,
//name and marks of three students. the marks are stored in an array of integers. The class also contains the following member functions.
//the input() function is used to input the values in data member.
//the show() function is used to displays the value of data members.
//the total() function returns the total marks of a student.
//the avg() function returns the average marks of a student.
//the program should create an object of the class and call the member functions.

#include<iostream>
using namespace std;
 class Result
{
private:
    int rno, marks[3];
    char name[50];
public:
    void input()
    {
        cout<<"Enter your Roll No: ";
        cin>>rno;
        cout<<"Enter your name: ";
        cin>>name;
        for(int i =0; i<3; i++)
        {
            cout<<"Enter marks ["<<i+1<<"] ";
            cin>>marks[i];
        }
    }
    void show()
    {
        cout<<"\nYour Roll No = "<<rno<<endl;
        cout<<"Your Name is = "<<name<<endl;
        for(int i=0; i<3; i++)
        cout<<"Marks ["<<i+1<<"] is "<<marks[i]<<endl;
    }
    int total()
    {
        int t=0;
        for(int i=0; i<3; i++)
            t=t+marks[i];
        return t;
    }
    
    float avg()
    {
        int t=0;
        for(int i=0; i<3; i++)
            t=t+marks[i];
        return t/3.0;
    }
};

int main()
{
    Result r;
    r.input();
    r.show();
    cout<<"\nTotal marks = "<<r.total()<<endl;
    cout<<"Average marks = "<<r.avg()<<endl<<endl;
    return 0;
}

