/*Types of Abstraction::
1.Data Abstraction:show info about data
2.Control Abstraction:show info about implementation
Abstraction is hiding the complex code. For example, we directly use the cout object in C++, but we don’t know how it is implemented. Encapsulation is data binding, as in, we try to combine a similar type of data and functions together.


*/
#include <iostream>
using namespace std;
class Vehicle
{
private:
    void piston()
    {
        cout << "4 piston\n";
    }
    void manWhomade()
    {
        cout << "Markus Librette\n";
    }

public:
    void pistonc()
    {
        piston();
    }
    void company()
    {
        cout << "GFG\n";
    }
    void model()
    {
        cout << "Simple model\n";
    }
    void color()
    {
        cout << "Red/Gree/Silver\n";
    }
    void cost()
    {
        cout << "Rs.60000 to Rs.90000\n";
    }
    void oil()
    {
        cout << "Petrol\n";
    }
};
int main()
{
    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
    obj.pistonc();
    return 0;
}