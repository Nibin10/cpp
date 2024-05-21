// Implement a variable template that provides the value of Pi with a specified precision.
#include <iostream>
#include <cmath>
using namespace std;
 
template <int prec>
struct PiVal
{
    static constexpr double val = M_PI;
 
    void print()
    {
        cout.precision(prec);
        cout << "Pi val: " << val << endl;
    }
};
int main()
{
    cout << fixed;
    PiVal<10> pi;
    pi.print();
 
    return 0;
}