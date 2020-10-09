#include <bits/stdc++.h>
using namespace std;
class Complex
{
    
    public:
    int np,cp;
    Complex(int n,int c)
    {
        np=n;
        cp=c;
    }
    void operator+(Complex &c1)
    {
        np+=c1.np;
        cp+=c1.cp;
    }
    void operator*(Complex &c1)
    {
        np*=c1.np;
        cp*=c1.cp;
    }
};
int main()
{
    Complex c1(2,5);
    Complex c2(5,11);

    
    cout<<"\nBEFORE CHANGE C1:"<<c1.np<<"+"<<c1.cp<<"i";
        
    cout<<"\nBEFORE CHANGE C2:"<<c2.np<<"+"<<c2.cp<<"i";

    c1+c2;
    cout<<"\nAFTER ADDITION:"<<c1.np<<"+"<<c1.cp<<"i";
    c1*c2;
    
    cout<<"\nAFTER MULTIPLICATION:"<<c1.np<<"+"<<c1.cp<<"i";

    
}