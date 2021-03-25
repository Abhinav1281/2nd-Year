#include <bits/stdc++.h>
using namespace std;

template<class T>
class Pair
{
    T num1;T num2;
    public:
    Pair(T n1,T n2)
    {
        num1=n1;num2=n2;
    }
    T get_max()
    {
        if(num1>num2)
        return num1;
        else return num2;
    }
};

int main()
{
    int n1,n2;
    double d1,d2;
    cout<<"ENTER INT DATA:";
    cin>>n1;
    cin>>n2;

    cout<<"\nENTER DOUBLE DATA:";
    cin>>d1;
    cin>>d2;
    Pair<int> intp(n1,n2);
    Pair<double> dp(d1,d2);

    int intmax=intp.get_max();
    double dmax=dp.get_max();

    cout<<"\nINT MAX VALUE:"<<intmax<<"\n DOUBLE MAX VALUE"<<dmax;

}