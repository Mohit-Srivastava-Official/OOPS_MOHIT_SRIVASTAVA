/*
this Pointer

this Pointer-

this pointer holds the address of the current object. In simple words, you can say that this pointer points to the current object of the class.



There can be three main usages of this keyword in C++.

It can be used to refer to a current class instance variable.
It can be used to pass the current object as a parameter to another method.

It can be used to declare indexers.
The ‘this’ pointer is available only within the non-static member functions of a class. If the member function is static, it will be common to all the objects, and hence a single object can’t refer to those functions independently.
*/
#include<iostream>
using namespace std;
class mobile
{
    string model;
    int year_of_manufacture;
    public:
    void set_details(string model,int year_of_manufacture)
    {
        this->model=model;
        this->year_of_manufacture=year_of_manufacture;
    }
    void print()
    {
        cout<<this->model<<endl;
        cout<<this->year_of_manufacture<<endl;
    }

};
int main()
{
    mobile redmi;
    redmi.set_details("Note 7 pro",2019);
    redmi.print();
}