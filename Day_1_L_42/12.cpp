/*Static Variables
It preserve their value even after they are out of their scope
So,it is not initialized again in the new scope
static data_type var_name=var_value;
static int m=10284;
it is used to count the number of times a function is called
static variable retain their value b/w multiple function calls
in data segment not in stack segment
default value is 0

*/
/*Static Keyword in c++
static variables can only be initialized using constant literals
it should not be declared inside a structure in c
Java does not allow static local variables in functions
*/

// In this program we are basically using static variable to count the number of times a function is called
#include<iostream>
using namespace std;
int fun()
{
    // static int count;
    static int count =0;

    count++;
    return count;
}
int main()
{
    cout<<" "<<fun();
    cout<<" "<<fun();
    return 0;
}
