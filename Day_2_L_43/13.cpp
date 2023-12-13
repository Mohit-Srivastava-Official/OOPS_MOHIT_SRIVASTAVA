#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void set_A()
    {
        cout<<"Enter the value of a= ";
        cin>>a;

    }
    void disp_A()
    {
        cout<<endl<<"a is "<<a;
    }

};
class B:public A
{
    int  b,p;
    public:
    void set_B()
    {
      set_A();
      cout<<"Enter the value of B= ";
      cin>>b;
    }
    void disp_B()
    {
        disp_A();
        cout<<endl<<"B is "<<b;

    }
    void call_pro()
    {
        p=a*b;
        cout<<endl<<"Product is "<<p;
    }
};
int main()
{
    B _b;
    _b.set_B();
    _b.disp_B();
    _b.call_pro();
    return 0;
}