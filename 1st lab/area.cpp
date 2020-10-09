#include <iostream>
using namespace std;
int main()
{
    int a=10;
    float b=1.1f;
    cout<<"int "<<sizeof(a);
    cout<<"\nfloat "<<sizeof(b);
    short c=5;
    cout<<"\nshort "<<sizeof(c);
    char d=5;
    cout<<"\nchar "<<sizeof(d);
    bool e=true;
    cout<<"\nbool "<<sizeof(e);
}