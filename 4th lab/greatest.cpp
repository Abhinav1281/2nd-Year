#include <bits/stdc++.h>
using namespace std;
class great
{
    int num;
    public:
    void get(int x){
        num=x;
    }
    friend void gcalc(great,great);
};
void gcalc(great a,great b)
{
    //cout<<a.num<<" "<<b.num;
    if(a.num>b.num)
        cout<<a.num;
    else
        cout<<b.num;    
}
int main()
{
    int a,b;
    cout<<"ENTER 1ST NUMBER:";
    cin>>a;
    great ab;
    ab.get(a);
    //cout<<a;
    cout<<"ENTER 2ND NUMBER:";
    cin>>b;
   // cout<<a;
    great bb;
    bb.get(b);
    gcalc(ab,bb);
    
}