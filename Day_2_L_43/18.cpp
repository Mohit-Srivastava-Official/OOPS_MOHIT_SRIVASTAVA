/*
C++ Polymorphism:::many forms
real life ex: A woman at the same time is a Mother,a Wife,and an employee.
Types of Polymorphism
1.Compile-time Polymorphism--Function overloading or Operator overloading
2.Runtime Polymorphism
*/
/*
Function Overloading::: Multiple functions with same name but different parameters.
*/
#include<iostream>
using namespace std;
class Geeks
{
    public:
    void func(int x)
    {
        cout<<"The value of x is "<<x<<endl;
    }
    void func(double x)
    {
        cout<<"The value of x is "<<x<<endl;
    }
    void func(int x,int y)
    {
        cout<<"Value of x and y is "<<x<<y<<endl;
    }
};
int main()
{
    Geeks obj1;
    /*Function being called depends on the parameters passed*/
    obj1.func(7);
    obj1.func(7.01);
    obj1.func(7,8);
    return 0;
}

