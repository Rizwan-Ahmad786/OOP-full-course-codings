//program 13.7 page no 402
//write a class that displays a simple message on the screen whenever an object of that class is created.

#include<iostream>
using namespace std;

class Hello
{
private:
    int n;
public:
    Hello()
    {
        cout<<"Hi Friends you are watching Codes4U: "<<endl;
    }
};

int main()
{
    Hello x,y;
    cout<<endl;
    return 0;
    
}

