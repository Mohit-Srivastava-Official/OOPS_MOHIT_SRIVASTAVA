// Static Members of Class
/*
Class object as static::scope till the lifetime of the program
*/
//Below program is where the object is non-static
#include<iostream>
using namespace std;
class GFG
{
    int i;
    public:
    // DEFAULT constructor below
    GFG()
    {
        i=0;
        cout<<"I am inside constructor\n";

    };
    ~GFG ()
    {
        cout<<"I am inside destructor\n";
    }


};
int main()
{
    int x=0;
    if(x==0)
    {
       static GFG obj;
    //    GFG obj;
    }
    cout<<"End of main\n";

}