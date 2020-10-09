#include <bits/stdc++.h> 
using namespace std;
class complexsum
{
    int ap,bp,suma=0,sumb=0;
    public:
    void getData(int a,int b)
    {
        ap=a;
        bp=b;
      //  cout<<ap<<"\t"<<bp<<"\n";
        sum();
    }
    void sum()
    {

        suma+=ap;
        sumb+=bp;
    }
    void display()
    {
        cout<<"SUM="<<suma<<"+"<<sumb<<"i";
    }
};
int main()
{
    int ag,bg;
    complexsum c;
    for(int i=0;i<2;i++)
    {
        cout<<"\nFOR :"<<(i+1)<<"\n";
        cout<<"ENTER NORMAL PART:";
        cin>>ag;
        cout<<"ENTER complex PART:";
        cin>>bg;
        
        c.getData(ag,bg);    
    }
   // c.getData(ag,bg);
    c.display();

}