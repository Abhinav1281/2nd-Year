#include <bits/stdc++.h>
using namespace std;
class rectarea
{
    int l,b;
    public:
    void get(int a,int c)
    {
        l=a;
        b=c;
    }
    void areawf()
    {
        cout<<"WITHOUT FRIEND FUNCTION:"<<2*(l+b);
    }
    friend void areaf(rectarea);
};
void areaf(rectarea a)
{
    cout<<"\nWITH FRIEND FUNCTION:"<<2*(a.l+a.b);
}
int main()
{
    int len,br;
    cout<<"ENTER DATA:";
    cin>>len;
    cin>>br;
    rectarea a;
    a.get(len,br);
    a.areawf();
    areaf(a);
}
