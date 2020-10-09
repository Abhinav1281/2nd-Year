#include <bits/stdc++.h>
using namespace std;
class unary
{
    public:
    int x;
    unary(int val)
    {
        x=val;
    }
    void operator-()
    {
        x=-x;
    }
};
int main()
{
    unary a(50);
    cout<<"\nBEFORE CHANGE "<<a.x;
    -a;
    cout<<"\nAFTER CHANGE "<<a.x;
}