/*
Multilevel Inheritance: a derived class is created from another derived class
*/
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"This is a Vehicle\n";
    }
};
//First sub_class derived from base class
class Mustang :public Vehicle
{
    public:
    Mustang()
    {
        cout<<"I am a mustang vehicle\n";
    }

};
//Sub class derived from the derived base class
class A: public Mustang{
    public:
    A()
    {
        cout<<"I am 'A' type model\n";
    }
};
int main()
{
    //Creating object of sub class will invoke the constructor of base classes
    A obj;
    return 0;
}