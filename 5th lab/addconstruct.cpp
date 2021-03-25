#include <bits/stdc++.h>
using namespace std;
class COMPLEX
{
    int pp=0,ip=0;
    public:
    COMPLEX(int a,int b,int c,int d)
    {
       pp+=a+c;
       ip+=c+d;
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
     int a,b,c,d;
        cout<<"ENTER 1st NUMBER NORMAL PART:";
        cin>>a;
        cout<<"ENTER 1st NUMBER COMPLEX PART:";
        cin>>b;
        
        cout<<"ENTER 2nd NUMBER NORMAL PART:";
        cin>>c;
        cout<<"ENTER 2nd NUMBER COMPLEX PART:";
        cin>>d;
        
    COMPLEX ab(a,b,c,d);
    ab.display();
    
    
}