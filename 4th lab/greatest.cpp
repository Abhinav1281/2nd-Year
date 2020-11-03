#include <bits/stdc++.h>
using namespace std;
class great2;
class great1
{
    int num;
    public:
    void get(int x){
        num=x;
    }
    friend void gcalc(great1,great2);
};
class great2
{
    int num;
    public:
    void get(int x){
        num=x;
    }
    friend void gcalc(great1,great2);
};
void gcalc(great1 a,great2 b)
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
    great1 ab;
    ab.get(a);
    //cout<<a;
    cout<<"ENTER 2ND NUMBER:";
    cin>>b;
   // cout<<a;
    great2 bb;
    bb.get(b);
    gcalc(ab,bb);
    
}