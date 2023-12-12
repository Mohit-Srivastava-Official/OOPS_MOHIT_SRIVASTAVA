/*
Static Keyword in C++
Prerequisite knowledge Static variables
Static Variables in a class::It is shared by the objects
It can not be initialized using constructors
Static variable inside a class should be initialized explicitly by the user using the class name and scope resolution operator outside the class 
*/
// static variables inside a class
#include <iostream>
using namespace std;
class GFG
{
public:
    int i;
    GFG(){
        // DO NOTHING
        //  THIS IS DEFAULT CONSTRUCTOR AND constructor has same name as that of class

    };
};
int main()
{
    GFG obj1;
    GFG obj2;
    obj1.i = 2;
    obj2.i = 5;
    cout << obj1.i << obj2.i;
    return 0;
}