#include <bits/stdc++.h>
using namespace std;
class TIME
{
    int h,min,s,sumh=0,summ=0,sums=0;
    public:
    TIME(int hour,int m,int sec)
    {
        h=hour,min=m,s=sec;
    }
    void sum(TIME a,TIME b)
    {
        sums=a.s+b.s;
        if(sums>=60)
        {
            summ+=1;
            sums%=60;
        }
        summ=a.min+b.min;
        if(summ>=60)
        {
            sumh+=1;
            summ%=60;
        }
        sumh=a.h+b.h;
        
        
    }
    void display()
    {
        cout<<"TIME="<<sumh<<" HOURS "<<summ<<" MINUTES "<<sums<<" SECONDS.";
    }
};
int main()
{
    TIME t(2,5,15);
    TIME t1(3,4,56);
    t.sum(t,t1);
    t.display();
}