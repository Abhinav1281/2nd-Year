#include <iostream>
using namespace std;
void SUM(int r)
{
    cout<<(r+10+20)<<"\n";
}
void SUM(int r,int t)
{
    cout<<(r+t+20)<<"\n";
}
void SUM(int r,int t,int q)
{
    cout<<(r+t+q)<<"\n";
}
int main()
{
    int a=8,b=16,c=24;
    SUM(a);
    SUM(a,b);
    SUM(a,b,c);
}