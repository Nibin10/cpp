// Create a generic lambda that sorts a container of any type using a custom comparator provided as a lambda.

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
auto sorting=[](auto &container,auto comparator)
{
    sort(container.begin(),container.end(),comparator);
};
int main()
{
    vector<int> v1={4,2,7,3};
    // list<int> v1={4,1,8,1,9};
    sorting(v1,[](int a,int b){
        return a>b;
    });
    for(auto i:v1)
    {
        cout<<i<<" ";
    }
    return 0;
}