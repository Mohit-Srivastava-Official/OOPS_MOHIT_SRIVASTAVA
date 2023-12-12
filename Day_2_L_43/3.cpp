/*In  c++,encapsulation can be implemented using classes and access modifiers
Encapsulation is basically use of setter and getter
Here,the variable x and the functions get() and set() are bound together i.e., encapsulation
 */
#include<iostream>
using namespace std;
class Encapsulation
{
    private:
    //Data hidden from  Outside world
    int x;
    public:
    //function to set value of variable x
    void set(int a)
    {
        x=a;
    }
    //function to return value of varaible x
    int get()
    {
        return x;
    }
    //Driver code

};
int main()
{
    Encapsulation obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}