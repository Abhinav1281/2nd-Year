#include <bits/stdc++.h>
using namespace std;
class overload
{
    public:
    template<class E, class E1>
    void sum(E num1,E1 num2)
    {
        num2+=num1;
        cout<<"\n"<<num2;
    }
    template<class E, class E1, class E2>
    void sum(E num1,E1 num2,E2 num3)
    {
        num3+=num2+num1;
        cout<<"\n"<<num3;
    }
};

int main()
{
    overload x;
    x.sum<int,int>(12,15);
    x.sum<int,int,double>(14,17,21.5);
}