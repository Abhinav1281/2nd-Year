#include <iostream>
using namespace std;
void Fun_Area(int r)
{
    
    cout<<(3.14*r*r)<<"\n";
}
void Fun_Area(int r,int t)
{
    cout<<(2*(r+t))<<"\n";
}
void Fun_Area(int r,int t,int q)
{
    cout<<(r*t*q)<<"\n";
}
void Fun_Area()
{
    cout<<"NO VALUE PROVIDED";
}
int main()
{
    int r=10;
    int a=5,b=10,c=20;
    Fun_Area(r);
    Fun_Area(a,b);
    Fun_Area(a,b,c);
    Fun_Area();
    
}