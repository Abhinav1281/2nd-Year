#include <bits/stdc++.h>
using namespace std;
class item
{
    public:
    string name;
    int price;
    void get(string s,int p)
    {
        name=s;
        price=p;
    }
    void display()
    {
        cout<<"\nNAME:"<<name<<"\n Price:"<<price;
    }
};
int main()
{
    int n;
    cout<<"ENTER NO. OF OBJECTS:";
    cin>>n;
    item *it=(item *)malloc(n*sizeof(item));
    item *it1=it;
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER NAME:";
        string s;
        cin>>s;
        
        cout<<"ENTER PRICE:";
        int p;
        cin>>p;
        (it1+i)->get(s,p);
    }
    for(int i=0;i<n;i++)
    {
        (it+i)->display();
    }
}