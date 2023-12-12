#include <iostream>
using namespace std;

class mobile
{
    string model;
    int year_of_manufacture;

public:
    void set_details(string model, int year_of_manufacture)
    {
        this->model = model;
        this->year_of_manufacture = year_of_manufacture;
    }
    void print()
    {
        cout << this->model << endl;
        cout << this->year_of_manufacture << endl;
    }
};
int main()
{
    mobile redmi;
    redmi.set_details("Note 7 Pro", 2019);
    redmi.print();
}
