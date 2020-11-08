#include <bits/stdc++.h>
using namespace std;

template<class T>
class sum
{
    T n,n1;
    public:
    sum(T num,T num1)
    {
        n=num;n1=num1;
    }

    void add()
    {
        cout<<"\n"<<n+n1;
    }
};

int main()
{
    int n1,n2;
    cout<<"Enter Int data:";
    cin>>n1;
    cin>>n2;

    cout<<"\nENTER DOUBLE DATA:";
    double d1,d2;
    cin>>d1;
    cin>>d2;

    sum<int> s(n1,n2);
    sum<double> s1(d1,d2);

    s.add();
    s1.add();
}