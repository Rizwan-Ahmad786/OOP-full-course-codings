//        program 13.8  page 403
//write a class that contain two integer data members
//which are initialized to 100 when an object is created.
//it has a member function avg that displays the average
//of data members.

#include<iostream>
using namespace std;

class Number
{
private:
    int x,y;
public:
    Number()
    {
        x=y=100;
    }
    void avg()
    {
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
        cout<<"Average = "<<(x+y)/2<<endl;
    }
};

int main()
{
    Number n;
    n.avg();
    
    return 0;
}
