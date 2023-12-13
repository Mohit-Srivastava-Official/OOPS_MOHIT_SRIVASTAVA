/*
Multiple inheritance:
derived class has more than one base class and number of base classes will be separated by comma(',')
*/
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"This is  a Vehicle\n";
    }
};
class FourWheeler
{
    public:
    FourWheeler()
    {
        cout<<"This is a four wheeler Vehicle\n";
    }
};
//sub classs derived from two base classes
class Car:public Vehicle,public FourWheeler
{

};
int main()
{
    Car obj;
    return 0;
}