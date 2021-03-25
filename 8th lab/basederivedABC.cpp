#include <bits/stdc++.h>
using namespace std;
class ABC
{
    public:
    int x=10;
    ABC()
    {
        x=10;
    } 
    virtual void display()
    {
        cout<<"ACCESSING BASE CLASS+"<<x;
    }
};
class BBC:public ABC
{
    public:
    BBC()
    {
        x=220;
    }
    void display()
    {
        cout<<"\nACCESSING BBC+"<<x;
    }
};

class KBC:public ABC
{
    public:
    KBC()
    {
        x=333;
    }
    void display()
    {
        cout<<"\nACCESSING KBC+"<<x;
    }
};

int main()
{
    ABC onlyBase;
    ABC* derived;
    BBC b;
    KBC k;
    onlyBase.display();
    derived=&b;
    derived->display();
    derived=&k;
    derived->display();

}