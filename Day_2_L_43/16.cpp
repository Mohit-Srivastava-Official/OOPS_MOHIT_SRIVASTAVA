/*Hierarchical Inheritence :more than one derived class is created from a single base class i.e., mulitple child*/
#include<iostream>
using namespace std;
//base class
class Mohit
{
    public:
    Mohit()
    {
        cout<<"I am the holder\n";
    }
};
//first sub class
class Age: public Mohit
{

};
//seccond sub class
class DOB: public Mohit
{

};
int main()
{
    //creating object of sub class will automatically invoke the constructor of base class
    //Everytime we create the object of class it will invoke the constructo.
    Age obj1;
    DOB obj2;
    return 0;
}