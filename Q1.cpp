// Implement a generic lambda that accepts any callable object and calls it with a set of arguments, then returns the result.

#include<iostream>
using namespace std;
int main()
{
    auto result=[](auto func,auto... args)
    {
        return func(args...);
    };
    class add
    {
        public:
        //     int a;
        //     int b;
        // add(int a,int b):a(a),b(b){}
        int operator()(int a,int b)
        {
            return a+b;
        }
    };
    class mul
    {
        public:
        int operator()(int a,int b)
        {
            return a*b;
        }
    };
    add ob1;
    cout<<"add = "<<result(ob1,1,2)<<endl;
    mul ob2;
    cout<<"mul = "<<result(ob2,1,2)<<endl;
    return 0;
}