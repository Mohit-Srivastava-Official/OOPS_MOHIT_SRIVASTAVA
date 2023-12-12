//C++ program to demonstrate constructors(Default and Parameterized Constructor)
//Constructors are special class members called when object of the class is created
//Constructors do not have return type
/*
Constructors have same name as class
:default,:parameterized,:copy
*/

#include<iostream>
using namespace std;
class Geeks
{
    public:
    int id;
    //Default constructor
    Geeks()
    {
        cout<<"Default Constructor called "<<endl;
        id=-1;
    }
    //Parameterized Constructor
    Geeks(int x)
    {
        cout<<"Parameterized Constructor called "<<endl;
        id=x;
    }
};
int main()
{
    //obj1 will call Default Constructor
    Geeks obj1;
    cout<<" Geek id is "<<obj1.id<<endl;
    // obj2 will call Parameterized Constructor
    Geeks obj2(56);
    cout<<"Geek id is : "<<obj2.id<<endl;
    return 0;

}
