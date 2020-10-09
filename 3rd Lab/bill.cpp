#include <bits/stdc++.h> 
using namespace std;
class bill
{
    string code;
    string name;
    double price;
    double totp=0;
    public:
    void getData(string c,string n,double p)
    {
        code=c;
        name=n;
        price=p;
        totp+=p;
        

    }
    void display()
    {
        cout<<"\t"<<code<<"\t"<<name<<"\t"<<price<<"\n";
        
    }
    void displaytot()
    {
        cout<<"TOTAL PRICE:"<<totp;
    }
    
};
int main()
{
    string code[10];
    string name[10];
    double price[10];
    double totp=0;
    for(int i=0;i<10;i++)
    {
        cout<<"FOR "<<i+1<<":\n";
        cout<<"ENTER CODE:";
        cin>>code[i];
        cout<<"ENTER NAME:";
        cin>>name[i];
        cout<<"ENTER PRICE:";
        cin>>price[i];
    }
    cout<<"SL NO.\tCODE\tNAME\tPrice\n";
    bill b;
    for(int i=0;i<10;i++)
    {
        cout<<i;
        
        b.getData(code[i],name[i],price[i]);
        b.display();
        
    }
    b.displaytot();
    //cout<<"TOTAL PRICE:"<<totp;

}