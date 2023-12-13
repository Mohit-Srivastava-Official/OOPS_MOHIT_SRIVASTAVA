// Demonstrating the implementation of Inheritance
#include<iostream>
using namespace std;
//Base Class
class Parent

{
    public:
    int id_p;
};
//Sub-class or derived class inheriting from base class (Parent)
class child : public Parent
{
    public:
    int id_c;
};
//main function
int main()
{
    child obj1;
    //An object of child class has all data members and member functions of parent class
    obj1.id_c=23;
    obj1.id_p=5;
    cout<<"Skill of child is "<<obj1.id_c<<endl;
    cout<<"Skill of Parent is "<<obj1.id_p<<endl;
    return 0;
}
