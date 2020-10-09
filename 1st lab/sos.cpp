#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double s=0;
    for(int i=1;i<=n;i++)
    {
        s+=(1/pow(i,i));
    }
    cout<<s;
}