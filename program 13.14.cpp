//     Returing object from member functions
//  The methode of returing an object from member function is same as returing a simple variable. If a member function returns an object, its return type should be the same as the type of object to be returned.

//        program 13.14  page 410
//  write a class Travel that has the attributes of kilometers and hours. A constructor with no parameter initializes both data members to 0. A member function get() inputs the values and function shows() displays the values. it has a member function add() that take an object or type Travel. adds the kilometers and hours of calling object and the parameter and returns an object with added values.
#include <iostream>
using namespace std;
class Travel
{
private:
    int km,hr;
public:
    Travel()
    {
      km=hr=0;
    }
    
    void get()
    {
        cout<<"Enter kilometers traveled:";
        cin>>km;
        cout<<"Enter hours traveled:";
        cin>>hr;
    }
    
    void show()
    {
        cout<<"You traveled "<<km<<" kilometers in "<<hr<<" hour\n"<<endl;
    }
    
    Travel add(Travel p)
    {
        Travel t;
        t.km = km + p.km;
        t.hr = hr + p.hr;
        return t;
    }
    
};

int main()
{
    Travel obj,obj1,sum;
    obj.get();
    obj.show();
    obj1.get();
    obj1.show();
    sum=obj.add(obj1);
    cout<<"Total traveling is as follows:"<<endl;
    sum.show();
    
    return 0;
    
}
