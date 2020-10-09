#include <iostream>
using namespace std;
void sum(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<"\t"<<y<<"\n";
}
void sum(int &x,int &y,int ch)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<"\t"<<y<<"\n";
}
void sum(int *p,int *q)
{
    int *temp=p;
    p=q;
    q=temp;
    cout<<*p<<"\t"<<*q<<"\n";
}
int main()
{
    int a=5,b=10;
    
    sum(a,b);
    cout<<a<<" "<<b<<":ACTUAL VALUE NOT UPDATED\n";
    sum(a,b,1);
    cout<<a<<" "<<b<<":ACTUAL VALUE UPDATED\n";
    
    sum(&a,&b);
    cout<<a<<" "<<b<<":ACTUAL VALUE NOT UPDATED\n";
    
}
