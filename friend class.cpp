//   Friend Class
// A type of class all of whose member function are allowed to access the private and protected members of a particular class is called friend class.A class that is declared in another class with friend keyword becomes the friend of the class

#include<iostream>
using namespace std;

class A
{
private:
    int a,b;
public:
    A()
    {
        a=15;
        b=10;
    }
    friend class B;
};

class B
{
public:
    void show(A obj)
    {
        cout<<"\t\tThe value of a: "<<obj.a<<endl;
        cout<<"\t\tThe value of b: "<<obj.b<<endl;
    }
    void add(A obj)
    {
        cout<<obj.a + obj.b<<endl;
    }
 
};

int main()
{
    A x;
    B y;
    y.show(x);
    y.add(x);
    
    return 0;
}
