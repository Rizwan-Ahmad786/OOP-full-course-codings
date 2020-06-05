// program 13.6 page number 401
//write a class Array that contain an array of integers to store five values. it also contains the following member functions.
//The fill() function is used to fill the array with values from the user.
//The display() function is used to display the values of array.
//The max() function shows the maximum value in the array.
//the min() function shows the minimum value in the array.

//All member function should be defined outside the class.

#include <iostream>
using namespace std;

class Array
{
private:
    int a[5];
public:
    void fill();
    void display();
    int max();
    int min();
};

void Array::fill()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Enter "<<i+1<<" value ";
        cin>>a[i];
    }
}
void Array::display()
{
    for(int i=0; i<5; i++)
        cout<<"The "<<i+1<<" value you enter is: "<<a[i]<<endl;
}
int Array::max()
{
    int m=a[0];
    for(int i=0; i<5; i++)
        if(m<a[i])
            m=a[i];
    return m;
}
int Array::min()
{
    int m=a[0];
    for(int i=0; i<5; i++)
        if(m>a[i])
            m=a[i];
    return m;
}

int main()
{
    Array arr;
    arr.fill();
    cout<<"You entered the following values: "<<endl;
    arr.display();
    cout<<"The maximum value is: "<<arr.max()<<endl;
    cout<<"The minimum value is: "<<arr.min()<<endl;
    
    return 0;
}
