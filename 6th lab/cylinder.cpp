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
    double carea()
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
    double rarea()
    {
        double ar=2*(r+b);
        return ar;
    }
};
class Cylinder:public Circle
{
    public:
    int h;
    Cylinder(int rd,int ht)
    {
        r=rd;
        h=ht;
    }
    double Volume()
    {
        return carea()*h;
    }
};
int main()
{
    Rectangle r(2,5);
    double cirArea=r.carea();
    double rArea=r.rarea();
    Cylinder c(5,10);
    double cArea=c.carea();
    double vol=c.Volume();
    cout<<"\nCIRCLE AREA FROM RECTANGLE CLASS="<<cirArea;
    cout<<"\nRECTANGLE AREA="<<rArea;

    cout<<"\n\nCIRCLE AREA FROM CYLINDER CLASS="<<cArea;
    cout<<"\nCYLINDER VOLUME="<<vol;

}