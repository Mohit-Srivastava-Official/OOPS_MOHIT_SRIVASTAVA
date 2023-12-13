/*Runtime Polymorphism
1.Achieved by Function Overriding
*/
#include<iostream>
using namespace std;
//Base class Declaration
class Animal
{
    public:
    string color="Black";

};
//inheriting Animal Class
class Dog:public Animal
{
    public:
    string color="Grey";
};
int main(void)
{
    //Accessing the field by reference variable which refers to derived
    Dog d=Dog();
    Animal e=Dog();
    cout<<d.color<<endl;
    cout<<e.color;

}
/*Parent class reference will always refer to data member of the parent class*/