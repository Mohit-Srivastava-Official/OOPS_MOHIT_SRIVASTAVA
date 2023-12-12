// shallow copy
#include <iostream>
using namespace std;
class Students
{
    int age;
    char *names;

public:
    Students(int age, char *names)
    {
        this->age = age;
        this->names = names;
        // shallow copy,here we are putting the same array,just copying the reference
    }
};
int main()
{
    return 0;
}
