// Implement a variable template that generates a sequence of Fibonacci numbers up to a specified index.

#include <iostream>
using namespace std;
 
template <int n>
struct fibonacci
{
    static constexpr int val = fibonacci<n-1>::val + fibonacci<n-2>::val;
};
 
template<>
struct fibonacci<0>
{
    static constexpr int val = 0;
};
 
template<>
struct fibonacci<1>
{
    static constexpr int val = 1;
};
 
int main()
{
    cout << fibonacci<0>::val << "\t";
    cout << fibonacci<1>::val << "\t";
    cout << fibonacci<2>::val << "\t";
    cout << fibonacci<3>::val << "\t";
    cout << fibonacci<4>::val << "\t";
    cout << fibonacci<5>::val << "\t";
    cout << fibonacci<6>::val << "\t";
    cout << fibonacci<7>::val << "\t";
    cout << fibonacci<8>::val << "\t";
    cout << fibonacci<9>::val << "\t";
 
    return 0;
}
