#include<iostream>
using namespace std;
class circle
{
    private:
    float area;
    float radius;
    public:
    void getRadius()
    {
        cout<<"Enter radius\n";
        cin>>radius;
    }
    void findArea()
    {
        area=3.14*radius*radius;
        cout<<"area "<<area;
    }
};
int main()
{
    circle cir;
    cir.getRadius();
    cir.findArea();
    return 0;
}