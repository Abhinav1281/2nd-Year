#include <bits/stdc++.h> 
using namespace std;
class timefun
{
    public:
    int h,m,s;
    int sumh=0,summ=0,sums=0;
    
    void getData(int ho,int mi,int se)
    {
        h=ho;
        m=mi;
        s=se;
        sum();
    }
    void sum()
    {
        
        sumh+=h;
        summ+=m;
        sums+=s;
        
    }
    void display()
    {
        cout<<"\nNEW="<<sumh<<":"<<summ<<":"<<sums;
    }
};

int main()
{
    int h,m,s;
    timefun t;
    for(int i=0;i<2;i++)
    {
        cout<<"\nFOR :"<<(i+1)<<"\n";
        cout<<"ENTER hour:";
        cin>>h;
        cout<<"ENTER minutes:";
        cin>>m;
        cout<<"ENTER seconds:";
        cin>>s;        
        t.getData(h,m,s);    
    }
    
    t.display();

}