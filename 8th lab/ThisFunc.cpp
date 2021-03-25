#include <bits/stdc++.h>
using namespace std;
class ABC
{
    int a;
    public:
    ABC(int n)
    {
        a=n;
        
    }
    void display()
    {
        int a=393;
        
        cout<<"\nUSING GLOBAL VARIABLE::a="<<this->a;
        cout<<"\nUSING LOCAL VARIABLE::a="<<a;
    }
};
int main()
{
    ABC a(22);
    a.display();
}