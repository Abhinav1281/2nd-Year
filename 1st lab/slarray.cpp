#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"ENTER SIZE:";
    cin>>s;
    int ar[s];
    int l=0,sm=0;
    cout<<"ENTER VALUES:\n";
    cin>>ar[0];
    l=sm=ar[0];
    for(int i=1;i<s;i++)
    {
        cin>>ar[i];
        if(ar[i]>l)
        {
            l=ar[i];
            
        }    
        else if(ar[i]<s)
        {
            sm=ar[i];
            
        }
    }
    cout<<"largest:"<<l<<"\n smallest:"<<sm;



}