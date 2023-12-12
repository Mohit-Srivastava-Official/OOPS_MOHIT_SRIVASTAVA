//Accessing of data in oops
#include<iostream>
using namespace std;
class Geeks
{
    //Access specififer
    public:
    //data members
    string user;
    //member functions()
    void printname()
    {
        cout<<"GFG User is : "<<user;
    }


};
int main()
{
    //Declaring an object of class Geeks
    Geeks obj1;
    //Accessing data member
    obj1.user="Mohit Srivastava";
    //Accessing member function
    obj1.printname();
    return 0;
}