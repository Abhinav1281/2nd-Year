#include <bits/stdc++.h>
using namespace std;
class DISTANCE
{
    int feet,inch,sumf=0,sumi=0;
    public:
    
    DISTANCE (int a,int b)
    {
        feet=a;
        inch=b;
    }
    void sums(DISTANCE a,DISTANCE b)
    {
        sumf+=a.feet+b.feet;
        sumi+=a.inch+b.inch;
    }
    void display()
    {
        cout<<"\nSUM="<<sumf<<" feets and"<<sumi<<" inches";
    }
};
int main()
{
    int a,b;
    cout<<"ENTER 1st FEET PART:";
    cin>>a;
    cout<<"ENTER 1st Inches PART:";
    cin>>b;
    DISTANCE ab(a,b);
    cout<<"ENTER 2nd FEET PART:";
        cin>>a;
        cout<<"ENTER 2nd Inches PART:";
        cin>>b;
    DISTANCE bb(a,b);
    ab.sums(ab,bb);
    
    ab.display();
}