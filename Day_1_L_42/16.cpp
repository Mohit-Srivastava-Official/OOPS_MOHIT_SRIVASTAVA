// Static Functions in a class
/*
Static member functions do not depend on the object of the class
Static member functions are allowed to access only the static data members or other static member functions
*/
#include<iostream>
using namespace std;
class GFG
{
    public:
    //static member function creation
    static void printMsg()
    {
        cout<<"Welcome to GeeksforGeeks";
    }
};
int main()
{
    //invoking a static member function
    GFG::printMsg();
}