#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter coeff of the quadartic eqn";
    cin>>a>>b>>c;
    int d=pow(b,2)-4*a*c;
    if(d>=0)
        cout<<((-b+pow(pow(b,2)-4*a*c,0.5))/(2*a))<<"\n"<<((-b-pow(pow(b,2)-4*a*c,0.5))/(2*a));
    else
    {
        int newd=sqrt((-d))/(2*a);
        cout<<(-b/(2*a))<<"+"<<newd<<"i\n";
        cout<<(-b/(2*a))<<"-"<<newd<<"i";
    }
    
        
}