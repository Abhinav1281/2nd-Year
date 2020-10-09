#include <iostream>
using namespace std;
void Area_Vol(int r,int t)
{
    cout<<(3.14*r*t)<<"\n";
}
void Area_Vol(int r,int t,int q)
{
    cout<<((4.0/3.0)*3.14*r*t*q);
}
int main()
{
    int r=10;
    Area_Vol(r,r);
    Area_Vol(r,r,r);
    
}