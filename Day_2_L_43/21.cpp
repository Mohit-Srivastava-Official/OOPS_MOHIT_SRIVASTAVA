/*Virtual Function::
It is a member function that is declared in the base class using the keyword virtual and is re-defined (overridden) in the derived class
They are dynamic in nature
*/
#include<iostream>
using namespace std;
//Declaring a base class
class GFG_Base
{
    public:
    //Virtual function
    virtual void display()
    {
        cout<<"called Virtual Base Class function"<<"\n\n";
    }
    void print()
    {
        cout<<"Called GFG_Base print function"<<endl;
    }

};
//Declaring a child class
class GFG_Child:public GFG_Base
{
    public:
    void display()
    {
        cout<<"called Virtual child display function"<<"\n\n";
    }
    void print()
    {
        cout<<"Called GFG_Child print function"<<endl;
    }
};
//driver code
int main()
{
    //Creating a reference of class GFG_Base
    GFG_Base* base;
    GFG_Child child;
    base=&child;
    //this will call the virtual function
    base->GFG_Base::display();
    //this will call the non-virtual function
    base->print();
    return 0;
}
