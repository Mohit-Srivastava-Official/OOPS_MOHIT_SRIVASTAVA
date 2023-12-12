//Copy constructor is the third type of Constructor
/*
A copy constructor--creates new object which is exact copy of exisiting object
syntax
class-name(class-name & name)
{
}
*/
#include<iostream>
#include<string.h>
using namespace std;
class Geeks
{
    int rno;
    char name[50];
    double fee;
    public:
    Geeks(int,char[],double);
    Geeks(Geeks &t)//this is copy constructor
    {
        rno=t.rno;
        strcpy(name,t.name);
        fee=t.fee;
    }
    void display();

};
Geeks::Geeks(int no,char n[],double f)
{
    rno=no;
    strcpy(name,n);
    fee=f;
}
void Geeks::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;


}
int main()
{
    Geeks m(10284,"Mohit Srivastava",1000);
    m.display();
    Geeks Mohit(m);//copy constructor called
    Mohit.display();
    return 0;

}
