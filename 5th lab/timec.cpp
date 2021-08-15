#include <bits/stdc++.h>
using namespace std;
class TIME
{
    int h,min,s,sumh=0,summ=0,sums=0;
    public:
    TIME()
    {
        h=5,min=15,s=23;
    }
    void sum(TIME a,TIME b)
    {
        sumh=a.h+b.h;
        summ=a.min+b.min;
        sums=a.s+b.s;
    }
    void display()
    {
        cout<<"TIME="<<sumh<<" HOURS "<<summ<<" MINUTES "<<sums<<" SECONDS.";
    }
};
int main()
{
    TIME t;
    TIME t1;
    t.sum(t,t1);
    t.display();
}