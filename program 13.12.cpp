//       what is Default copy constructuor
//  A type of constructor that is used to initialize an object with another object of the same type is known as default copy constructor.its name is "default copy constructor" because it is available by default in all classes. The user does not need to write this constructor. It accepts a single object of the same type as parameter. The parameter for default copy constructor can be given in parenthesis or using assignment operator.


//    program 13.12 page 406
//Write a class Book that has attributes for pages, price and title. it has two functions to input the values and displays the values. Create three objects of the class and input values.

#include<iostream>
using namespace std;

class Book
{
private:
    int page, price;
    char title[20];
public:
    void get()
    {
        cout<<"Enter title: ";
        cin>>title;
        cout<<"Enter pages: ";
        cin>>page;
        cout<<"Enter price: ";
        cin>>price;
    }
    
    void show()
    {
        cout<<"\nTitle  "<<title<<endl;
        cout<<"Pages  "<<page<<endl;
        cout<<"Price  "<<price<<endl;
    }
    
};
int main()
{
    Book obj1;
    obj1.get();
    Book obj2(obj1);
    Book obj3=obj1;
    cout<<"\nThe detail of obj1 is: ";
    obj1.show();
    cout<<"\nThe detail of obj2 is: ";
    obj2.show();
    cout<<"\nThe detail of obj3 is: ";
    obj3.show();
    
    return 0;
}
