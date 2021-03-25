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
    friend Complex operator+(Complex &c1,Complex &c2);
    friend Complex operator*(Complex &c1,Complex &c2);
       
    
};
Complex operator+(Complex &c1,Complex &c2)
{
        c1.np+=c2.np;
        c1.cp+=c2.cp;
        return c1;
}
Complex operator*(Complex &c1,Complex &c2)
{
        c1.np*=c2.np;
        c1.cp*=c2.cp;
        return c1;
}
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