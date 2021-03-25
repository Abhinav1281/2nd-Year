#include <bits/stdc++.h>
using namespace std;
class Integer
{
    int num;
    public:
    Integer(int n)
    {
        num=n;
    }
    void operator+(int x)
    {
        num=num+10;
    }
    int getNum()
    {
        return num;
    }
};

int main()
{
    int n;
    cout<<"ENTER 2 NUMBERS:";
    cin>>n;
    Integer a(n);
    cin>>n;
    Integer a1(n);
    a+5;
    a1+10;

    cout<<"\nFIRST NUMBER:"<<a.getNum();
    cout<<"\nSECOND NUMBER:"<<a1.getNum();
}
