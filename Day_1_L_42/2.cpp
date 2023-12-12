//Creation of object of class
/*
Syntax to create an object in C++:

class_name objectName;


Syntax to create an object dynamically in C++:

class_name * objectName = new class_name();

*/
#include<iostream>
using namespace std;
class Hero{
    int health;
    char level;
    int age;

};
int main()

{
    Hero mohit;
    cout<<"size of mohit is "<<sizeof(mohit)<<endl;
    return 0;



};