#include <bits/stdc++.h>
using namespace std;
class DB;
class DM
{
    
    public:
    double m,cm;
    void get(double a,double b)
    {
        m=a;
        cm=b;
       // cout<<"\n:::"<<m<<cm;
    }
    void display(double summ)
    {
        cout<<"\nMETRES:"<<summ;
    }
    friend void add(DM,DB,DM);
    friend void add(DM,DB,DB);
    
};
class DB
{
    
    public:
    double f,i;
    void get(double a,double b)
    {
        f=a;
        i=b;
        //cout<<"\n:::"<<f<<i;
    }
    void display(double sumf)
    {
    
        cout<<"\nFEET:"<<sumf;
    }
    friend void add(DM,DB,DM);
    friend void add(DM,DB,DB);
};
void add(DM a,DB b,DM c)
{
    double sum=b.f*30.48;
    sum+=b.i*2.54;
    sum+=a.cm;
    sum+=a.m*100;
    double summ=sum/100;
    //double sumcm=sum%100;
    //cout<<"\n:::"<<summ<<" "<<sumcm;
    c.display(summ);
}
void add(DM a,DB b,DB c)
{
    double sum=b.f;
    //cout<<"\n:::"<<sum;
    b.i=b.i/12;
    sum+=b.i;
    //cout<<"\n:::"<<sum;
    a.cm=a.cm+a.m*100;
    a.cm=a.cm/30.48;
    sum+=a.cm;
    //cout<<"\n:::"<<sum;
    double sumf=sum;
    
    c.display(sumf);
}
int main()
{
    double a,b;
    cout<<"ENTER METRES:";
    cin>>a;
    cout<<"ENTER CENTIMETRES:";
    cin>>b;
    DM m;
    //cout<<":::"<<a<<b;
    m.get(a,b);
    
    cout<<"ENTER FEETS:";
    cin>>a;
    cout<<"ENTER INCHES:";
    cin>>b;
    //cout<<"\n:::"<<a<<b;
    DB f;
    f.get(a,b);
    add(m,f,m);
    add(m,f,f);
    
}