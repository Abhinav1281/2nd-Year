#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int c=0;
    if(a>1)
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)
                c++;
        }
        if(c==2)
            cout<<"PRIME NUMBER";
        else
        {
            cout<<"NOT A PRIME NUMBER";
        }
   }
   else
   {
       cout<<"UNIQUE";
   }
   
}