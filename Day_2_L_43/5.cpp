// Abstraction
/*Abstraction is displaying only essential information and hidding the details

Abstraction using Access Specifiers(here only public and private)
private:: members that define internal implementation(here a,b)
public::info important for outside world and these public members can access the private members as they are inside the class void set(int x,int y) and void display()
*/
#include<iostream>
using namespace std;
class Abstraction
{
    private:
    int a,b;
    public:
    //Setting the values of private members
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    Abstraction obj;
    obj.set(10,20);
    obj.display();
    return 0;
}