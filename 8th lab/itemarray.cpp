#include <bits/stdc++.h>
using namespace std;
class item
{
    public:
    string name;
    int price;
    item(string s,int p)
    {
        name=s;
        price=p;
       // cout<<"ADDED "<<s<<" "<<p;
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
    item* it=(item *)malloc(n*sizeof(item));
    
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER NAME:";
        string s;
        cin>>s;
        
        cout<<"ENTER PRICE:";
        int p;
        cin>>p;
        item x(s,p);
        it[i]=x;
        
    }
    for(int i=0;i<n;i++)
    {
        it[i].display();
    }
}