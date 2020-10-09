#include <bits/stdc++.h>
using namespace std;
class COPY
{
    int a,b;
    public:
    COPY(int x,int y)
    {
        a=x,b=y;
    }
    COPY(COPY &ax)
    {
        a=ax.a;
        b=ax.b;
    }
    void display()
    {
        cout<<"\na="<<a<<" b="<<b;
    }
};
int main()
{
    int a,b;
    cout<<"ENTER 1st a value:";
    cin>>a;
    cout<<"ENTER 1st b value:";
    cin>>b;
    COPY ab(a,b);
    COPY bb=ab;
    cout<<"FOR 1st OBJ";
    ab.display();
    cout<<"\nFOR 2nd OBJ";
    bb.display();
}