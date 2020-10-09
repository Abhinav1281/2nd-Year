#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int val,c=1;
    if(a>b)
        val=b;
    else
        val=a;
    for(int i=1;i<=val;i++)
    {
        if(a%i==0 && b%i==0)
            c=i;
    }    
    cout<<"\nGCD:"<<c;
        
}