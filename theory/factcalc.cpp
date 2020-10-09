#include <iostream>
using namespace std;
class newcl
{
    public:
    int a,b;
    int fact(int x)
    {
        b=1;
        a=x;
        for(int i=1;i<=a;i++)
        {
            b*=i;
        }
        return b;
    }
};
int main()
{
    newcl a1;
    int a;
    cin>>a;
    int f=a1.fact(a);
    cout<<f;
    
}