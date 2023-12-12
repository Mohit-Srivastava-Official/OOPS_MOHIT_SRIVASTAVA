/*Static variable inside a class should be initialized explicitly by the user using the type class name and scope resolution operator outside the class */
// Static Variable Inside a Class
#include<iostream>
using namespace std;
class GFG
{
    public:
    static int i;
    //default constructor
    GFG()
    {
        // DO NOTHING

    };

};
int GFG ::i =10;
int main()
{
    GFG obj1;
    GFG obj2;
    cout<<" "<<obj1.i;
    cout<<endl;
    cout<<" "<<obj2.i;
    return 0;

}