#include <bits/stdc++.h>
using namespace std;
class ABC
{
    int a=10;
    public :
    
    void displaya()
    {
        cout<<"\nBASE CLASS:"<<this->a;
    }
};
class B:public ABC
{
    int b=30;
    public:
    
    void displayb()
    {
        cout<<"\nDERIVED CLASS:"<<this->b;
    }
};
int main()
{
    
    B* a;
    a->displaya();
    a->displayb();
}