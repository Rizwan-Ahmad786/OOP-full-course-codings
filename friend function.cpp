//    Friend Function
// A type of function that is allowed to access the private and protected members of a particular class from outside the class.
// A function that is declared in a class with the friend keyword become the friend function of that class. it enables that function to access the private and protected members of the class.


//write a class that has 2 data members
//and 1 friend function that adds the private
//data member of a class
#include<iostream>
using namespace std;
class frnd
{
private:
    int a,b;
public:
    frnd (int c, int d)
    {
        a=c;
        b=d;
    }
    friend int add(frnd n);
};
int add (frnd n)
{
    return n.a+n.b;
}
int main()
{
    
    frnd obj1(4,8);
    cout<<add(obj1)<<endl;
    int x,y;
    cout<<"enter two values";
    cin>>x>>y;
    frnd obj(x,y);
    cout<<add(obj);
    
    
    
}
