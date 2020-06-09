//     Constructor Overloading
//The process of declaring multiple constructors with same name but different parametrs is known as constructor overloading. The constructor with same name must differ in one of the following ways
//     Number of parameters
//     Type of parameter
//     Sequence of parameters.

//    program 13.11  page 405
//write a class that has num and ch as data members.
//A constructors with no parameter initializes num to 0 and ch to 'x'. A constructor with two parametes initializes data members with the given values and member function show diplays the values of data members.

#include <iostream>
using namespace std;

class Over
{
private:
    int num;
    char ch;
public:
    Over()
    {
        num = 0;
        ch  = 'x';
    }
    Over(int n, char c)
    {
        num = n;
        ch = c;
    }
    
    void show()
    {
        cout<<"num = "<<num<<endl;
        cout<<"ch  = "<<ch<<endl;
    }
};

int main()
{
    Over first, secound(100, 'p');
    cout<<"The contents of first:"<<endl;
    first.show();
    cout<<"\nThe contents of secound:"<<endl;
    secound.show();
    cout<<endl;
    return 0;
}
