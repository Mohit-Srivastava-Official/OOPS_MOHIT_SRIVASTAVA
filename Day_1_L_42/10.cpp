/*
Shallow copy and Deep Copy
Shallow copy stores the references of objects to the original memory address.
Depp copy stores copies of the object's value.
*/
#include<iostream>
#include<algorithm>
#include<memory>
#include<vector>
using namespace std;
class Car
{
    public:
    string name;
    vector<string> colors;
    Car(string name,vector<string> colors)
    {
        this->name=name;
        this->colors=colors;
    }
};
int main()
{
    vector<string> honda_colors ={"Red","Blue"};
    Car honda = Car("Honda",honda_colors);
    //Deepcopy of Honda
    Car deepcopy_honda=honda;
    deepcopy_honda.colors.push_back("Green");
    cout<<"Deepcopy: ";
    for(string color: deepcopy_honda.colors)
    {
        cout<<color<< " ";
    }
    cout<<endl;
    //Shallow Copy of Honda
    Car* copy_honda =&honda;
    copy_honda->colors.push_back("Green");
    cout<<"Shallow copy: ";
    for(string color: copy_honda->colors)
    {
        cout<<color<<" ";
    }
    cout<<endl<<"Original: ";
    for(string color : honda.colors)
    {
        cout<<color<<" ";

    }
    return 0;
}