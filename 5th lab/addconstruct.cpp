#include <bits/stdc++.h>
using namespace std;
class COMPLEX
{
    int pp=0,ip=0;
    public:
    COMPLEX()
    {
        int a,b;
        cout<<"ENTER 1st NUMBER NORMAL PART:";
        cin>>a;
        cout<<"ENTER 1st NUMBER COMPLEX PART:";
        cin>>b;
        pp+=a;
        ip+=b;
        cout<<"ENTER 2nd NUMBER NORMAL PART:";
        cin>>a;
        cout<<"ENTER 2nd NUMBER COMPLEX PART:";
        cin>>b;
        pp+=a;
        ip+=b;
    }
    //friend void add(COMPLEX,COMPLEX);
    void display()
    {
        cout<<pp<<"+"<<ip<<"i";
    }
};
/*void add(COMPLEX a,COMPLEX b)
{
    cout<<(a.pp+b.pp)<<"+"<<(a.ip+b.ip)<<"i";
}*/
int main()
{
    COMPLEX ab;
    ab.display();
    
    
}