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
    }
    void display()
    {
        cout<<"\nNAME:"<<name<<"\n Price:"<<price;
    }
};
int main()
{
    item *it,it1("ABC",200);
    it=&it1;
    cout<<"FROM ACTUAL OBJECT";
    it1.display();
    
    cout<<"\nFROM POINTER";
    it->display();
}