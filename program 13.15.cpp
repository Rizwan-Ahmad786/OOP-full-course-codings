//     Static Data Member in C++
// A type of data member that is shared among all objects of class is knows as static data member.The static data member is defined in the class with static keyword.the main difference between normal data member and static data member is that each object has its own variable of normal data member.while static data member shared among all objects of the class. only one memory location is created for static data member that is shared among all objects.

//  program 13.15 page 412
// write a program that counts the number of objects created of a particular class.

#include <iostream>
using namespace std;

class Count
{
private:
    static int n;
public:
    
    Count()
    {
        n++;
    }
    void show()
    {
        cout<<"You have created "<<n<<" object so far."<<endl;
    }
};

int Count::n=0;

int main()
{
    Count x,y,z;
    z.show();
    Count w;
    z.show();
    return 0;
    
}

