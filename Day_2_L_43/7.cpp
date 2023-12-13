/*Inheritance in C++
 It allows us to create a new class (derived class/sub class) from an existing class (base class).



Modes of Inheritance



Public mode: If we derive a subclass from a public base class. Then, the base class’s public members will become public in the derived class, and protected class members will become protected in the derived class.


Protected mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.


Private mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

*/
// Defining member functions without argument within the class
#include<iostream>
using namespace std;
class Person
{
    int id;
    char name[100];
    public:
    void set_p()
    {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>name;
    }
    void display_p()
    {
        cout<<endl<<"ID: "<<id<<"\n Name: "<<name<<endl;
    }

};
class Student: private Person{
    char course[50];
    int fee;
    public:
    void set_s()
    {
        set_p();
        cout<<"Enter the course name of CWH: ";
        cin>>course;
        cout<<"Enter the Course fee: ";
        cin>>fee;
    }
    void display_s()
    {
        display_p();
        cout<<endl<<"Course: "<<course<<"\n Fee: "<<fee<<endl;
    }
};
int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}