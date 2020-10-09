/* ABHINAV SINHA
1929068
CSCE
*/
#include <bits/stdc++.h> 
using namespace std;
class Fraction
{
    int n,d;
    public:
    void get(int a,int b)
    {
        n=a;
        d=b;
    }
    void add(int num1,int den1)
    {
        //cout<<"REACHED ADD";
        int num=n,den=d;
        num=num*den1;
        num1=num1*den;
        int anum=num1+num;
        int aden=den1*den;
        int gc=check(anum,aden);
        //cout<<"\n"<<gc<<"\n";
        anum=anum/gc;
        aden=aden/gc;
        cout<<"\n"<<anum<<"/"<<aden;
    }
    int check(int a,int b)
    {
        //cout<<"REACHED CHECK";
        int g=1;
        for(int i=1;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
                g=i;
         }
         
         return g;
    }
    void subtract(int &a,int &b)
    {
        //cout<<"REACHED SUBS";
        int num=n,den=d;
        num=num*(b);
        a=(a)*den;
        int anum=num-a;
        int aden=(b)*den;
        int gc=check(anum,aden);
        //cout<<"CHECKED RETURNED";
        //cout<<"\n"<<gc<<"\n";
        anum=anum/gc;
        aden=aden/gc;
        cout<<"\n"<<anum<<"/"<<aden;      
    }
    void multiply(int *a,int *b)
    {
       // cout<<(*a)<<(*b);
        int num=n,den=d;     
        num=(*a)*num;
        den=(*b)*den;
        int gc=check(num,den);
        //cout<<"\n"<<gc<<"\n";
        num=num/gc;
        den=den/gc;
        cout<<"\n"<<num<<"/"<<den;
    }
};
int main()
{
    int n1,d1,n2,d2;
    cout<<"FOR 1:\nENTER NUMERATOR:";
    cin>>n1;
    cout<<"ENTER DENOMINATOR:";
    cin>>d1;
    Fraction ob;
    ob.get(n1,d1);
    cout<<"FOR 2:\nENTER NUMERATOR:";
    cin>>n2;
    cout<<"ENTER DENOMINATOR:";
    cin>>d2;
    int n3=n2,d3=d2;
    ob.add(n2,d2);
    ob.subtract(n2,d2);
    ob.multiply(&n3,&d3);

    
}