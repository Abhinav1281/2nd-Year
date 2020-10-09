#include <bits/stdc++.h>
using namespace std;

class Circle
{
    
    public:
    int r;
    Circle(int radius)
    {
        r=radius;
    }
    double area()
    {
        double ar=3.14*r*r;
        return ar;
    }
    Circle()
    {
        r=0;
    }
};
class Rectangle: public Circle
{
    public:
    int b;
    Rectangle(int l,int br)
    {
        r=l;
        b=br;
    }
    double area()
    {
        double ar=2*(r+b);
        return ar;
    }
};
int main()
{
    Circle c(5);
    double cirArea=c.area();
    Rectangle r(2,5);
    double rArea=r.area();

    cout<<"\nCIRCLE AREA="<<cirArea;
    cout<<"\nRECTANGLE AREA="<<rArea;
}