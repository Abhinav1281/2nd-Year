#include <iostream>
using namespace std;
class triangle
{
    double bs;
    double ht;
    public:
    void getData(double b,double h)
    {
        bs=b;
        ht=h;
    }
    double areaTrin()
    {
        return (0.5*bs*ht);
    }

};
int main()
{
    for(int i=1;i<=10;i++)
    {
        int b,h;
        cout<<"FOR "<<i<<":\n";
        cout<<"ENTER BASE:";
        cin>>b;
        cout<<"ENTER HEIGHT:";
        cin>>h;
        triangle t;
        t.getData(b,h);
        double area=t.areaTrin();
        cout<<"AREA:"<<area<<"\n";
        
    }
}