#include <bits/stdc++.h>
using namespace std;
class COMPLEX
{
    int pp,ip;
    public:
    void get(int a,int b)
    {
        pp=a;
        ip=b;
    }
    friend void add(COMPLEX,COMPLEX);
};
void add(COMPLEX a,COMPLEX b)
{
    cout<<(a.pp+b.pp)<<"+"<<(a.ip+b.ip)<<"i";
}
int main()
{
    int a,b;
    cout<<"ENTER 1ST NUMBER NORMAL PART:";
    cin>>a;
    cout<<"ENTER 1ST NUMBER COMPLEX PART:";
    cin>>b;
    COMPLEX ab;
    ab.get(a,b);
    
    cout<<"ENTER 2ND NUMBER NORMAL PART:";
    cin>>a;
    cout<<"ENTER 2ND NUMBER COMPLEX PART:";
    cin>>b;
    COMPLEX bb;
    bb.get(a,b);
    add(ab,bb);
}