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
    Rectangle()
    {
        r=0;
        b=0;
    }
};
class Box:public Rectangle
{
    public:
    int h;
    Box(int l,int br,int ht)
    {
        r=l;
        b=br;
        h=ht;
    }
    double Volume()
    {
        return r*b*h;
    }
};
int main()
{
    Box b(5,2,3);
    double cirArea=b.carea();
    double rArea=b.rarea();
    double vol=b.Volume();

    cout<<"\nCIRCLE AREA="<<cirArea;
    cout<<"\nRECTANGLE AREA="<<rArea;
    
    cout<<"\nVolume="<<vol;
}