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
    friend unary operator-(unary &a);
};
unary operator--(unary &a)
{
    a.x=-(a.x);
    return a;
}
int main()
{
    unary a(50);
    cout<<"\nBEFORE CHANGE "<<a.x;
    a=--a;
    cout<<"\nAFTER CHANGE "<<a.x;
}