// Types of Inheritence
/*
Single,Multilevel,Multiple,Hierarchical,Hybrid
Single Inheritance ex:1
one base class & one derived class
*/
#include<iostream>
using namespace std;
//base class
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"This is a vehicle\n";
    }
};
//Sub class derived from a single base class
class Car:public Vehicle
{

};
int main()
{
    //Creating the object of subclass will invoke the constructor of base class
    Car obj;
    return 0;
}