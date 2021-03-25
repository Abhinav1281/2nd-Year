#include <bits/stdc++.h>
using namespace std;
class COMPLEX
{
    int pp,ip;
    public:
    COMPLEX()
    {
        pp=0;
        ip=0;
    }
    COMPLEX(int a)
    {
        pp=a;
        ip=a;
    }
    COMPLEX(int a,int b)
    {
        pp=a;
        ip=b;
    }
    friend void add(COMPLEX,COMPLEX,COMPLEX);
};
void add(COMPLEX a,COMPLEX b,COMPLEX c)
{
    cout<<(a.pp+b.pp+c.pp)<<"+"<<(a.ip+b.ip+c.ip)<<"i";
}
int main()
{
    int a,b;
    COMPLEX cb;
    cout<<"ENTER 1ST NUMBER PART:";
    cin>>a;
    
    COMPLEX ab(a);
    
    
    cout<<"ENTER 2ND NUMBER NORMAL PART:";
    cin>>a;
    cout<<"ENTER 2ND NUMBER COMPLEX PART:";
    cin>>b;
    COMPLEX bb(a,b);
    
    add(ab,bb,cb);
}