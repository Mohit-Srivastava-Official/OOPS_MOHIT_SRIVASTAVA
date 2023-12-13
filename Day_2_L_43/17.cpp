/*
Hybrid (Virtual) Inheritence:
Combination of more than one type of inheritance
*/
#include<iostream>
using namespace std;
//base class
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"This is a Vehicle\n";
    }
};
//base class
class Fare
{
    public:
    Fare(){
        cout<<"Fare of vehicle\n";
    }
};
//First sub class
class Car:public Vehicle
{

};
// Second sub class
class Bus:public Vehicle,public Fare
{

};
/*Object creation of class will take place in int main*/
int main()
{
    Bus obj1;
    Car obj2;
    return 0;
}