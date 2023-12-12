// Destructor::It is called when scope of the object ends
#include<iostream>
using namespace std;
class Geeks
{
    public:
    int id;
    ~Geeks()
    {
        cout<<"Destructor is called for id : "<<id<<endl;
    }
};
int main()
{
    Geeks (obj1);
    obj1.id=7;
    int i=0;
    while(i<5)
    {
        Geeks (obj2);
        obj2.id=i;
        i++;
    }//scope for obj2 ends here
    return 0;

}//scope for obj1 ends here
