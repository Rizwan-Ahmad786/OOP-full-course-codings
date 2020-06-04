//write a class book with three data members BOOkID, Pages
//and price it also contains all following member function.
//the get() function is used to input value
//the show() function is used to display values
//the set() fucntion is used to set the values of data
//memberes using parametes
//the getPrice() function is used to return the value of price
// the program should create two objects of the class and input values for these objects, the program displays the details of the most costly book.

#include<iostream>
using namespace std;

class Book
{
private:
    int BookID,Pages;
    float Price;
public:
    void get()
    {
        cout<<"Enter BOOk ID: ";
        cin>>BookID;
        cout<<"Enter pages: ";
        cin>>Pages;
        cout<<"Enter price: ";
        cin>>Price;
    }
    void show()
    {
        cout<<"BookID = "<<BookID<<endl;
        cout<<"Pages = "<<Pages<<endl;
        cout<<"Price = "<<Price<<endl;
    }
    void set(int id, int pg, float pr)
    {
        BookID = id;
        Pages = pg;
        Price = pr;
    }
    int getPrice()
    {
        return Price;
    }
};

int main()
{
    Book b1,b2;
    b1.get();
    b2.set(2,320,150.75);
    cout<<endl<<"The detail of most costly book is as follows: "<<endl;
    if(b1.getPrice() > b2.getPrice())
        b1.show();
    else
        b2.show();
    return 0;
}
