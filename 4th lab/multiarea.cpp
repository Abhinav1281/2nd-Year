#include <bits/stdc++.h>
using namespace std;
class arc
{
    int s,l,b;
    public:
    void get(int a)
    {
        s=a;
    }
    void get(int a,int br)
    {
        l=a;
        b=br;
    }
    friend void area(arc a);
    
    
};
void area(arc a)
{
    cout<<"SQUARE:"<<a.s*a.s;
    cout<<"\nRECTANGLE:"<<2*(a.l+a.b);
}
int main()
{
    int len,br,sq;
    cout<<"ENTER RECT. DATA:";
    cin>>len;
    cin>>br;
    cout<<"ENTER RECT. DATA:";
    cin>>sq;
    arc a;
    a.get(sq);
    a.get(len,br);
    area(a);
    
}