#include<iostream>
using namespace std;
bool primechk(int a)
{
    int c=0;
    if(a>1)
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)
                c++;
        }
        if(c==2)
            return true;
        else
        {
            return false;
        }
   }
   else
   {
        return false;
   }
   
}
void primefc(int n)
{
    for(int i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            if(primechk(i)==true)
            {
                cout<<i<<"\t";
            }
        }
    }
}
int main()
{
    int num;
    cin>>num;
    primefc(num);
}