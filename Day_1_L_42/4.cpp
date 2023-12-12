// Member funcitons in classes
/*
There are 2 ways to define a member function:
inside or outside class definition
to define a member function outside the class definition we have to use the scope resolution :: operator along with the classs name and fucntion name
*/
#include<iostream>
using namespace std;
class Geeks
{
    public:
    string user;
    int id;
    //outside class definition
    void printname();
    //inside
    void printid()
    {
        cout<<"Geeks id is : "<<id;

    }

};
//outside , :: scope resolution
void Geeks::printname()
{
    cout<<"Geeks user is "<<user;
}
int main()
{
    Geeks obj1;
    obj1.user="Mohit Srivastava";
    obj1.id=10284;
    obj1.printname();
    cout<<endl;
    obj1.printid();
    return 0 ;


}