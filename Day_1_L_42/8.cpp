/*Why do we give semicolons at the end of class
Compiler checks if the user is trying to create an instance of the class at the end of it.
In summary, an instance of a class is a concrete object that brings the blueprint of a class to life. It allows you to create and manipulate objects with specific characteristics and behaviors, making object-oriented programming a powerful tool for building complex and robust software systems.



*/
#include <iostream>
using namespace std;
class Mohit
{
    int a, b;

public:
    // DEFAULT CONSTRUCTOR
    Mohit()
    {
        cout << "Default constructor is called" << endl;
    }
    // Parameterized Constructor
    Mohit(int a, int b) : a(a), b(b)
    {
        cout << "Parameterized constructor -values " << a << " " << b << endl;
    }
}instance(20,100);
int main()
{
    return 0;
}