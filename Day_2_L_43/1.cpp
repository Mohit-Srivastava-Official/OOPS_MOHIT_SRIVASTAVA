/*Pillars of OOPS
1.Encapsulation in C++
:Wrapping up of data and information in a single unit
:Data Protection and Information hiding
source:GeeksForGeeks
The function which we are making inside the class must use only member variables,only then it is called encapsulation
// encapsulation improves readability,maintainability,and security by grouping data and methods together
Encapsulation leads to data abstraction
*/
#include <iostream>
using namespace std;
class temp
{
    int a;
    int b;

public:
    int solve(int input)
    {
        a = input;
        b = a / 2;
        return b;
    }
};
int main()
{
    int n;
    cin >> n;
    temp half;
    int ans = half.solve(n);
    cout << ans;
    return 0;
}