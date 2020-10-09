#include <bits/stdc++.h>
using namespace std;
class String
{
    public:
    string s;
    String(string s1)
    {
        s=s1;
    }
    void operator+(String snew)
    {
        s.append(snew.s);
    }
    void operator=(String snew)
    {
        s=snew.s;
    }
    void operator+=(String snew)
    {
        if(s!=snew.s)
        {
            cout<<"\n"<<s<<" is not equal to "<<snew.s;
            if(s>snew.s)
                cout<<"\n"<<s<<" is greater than "<<snew.s;
            else
                cout<<"\n"<<snew.s<<" is greater than "<<s;
        }
        else
        {
            cout<<"\n"<<s<<" is equal to "<<snew.s;
        }
        
    }
};
int main()
{
    String s1("HELLO");
    
    String s2("HII");

    s1+=s2;
    
    s1+s2;
    cout<<"\nAFTER ADDING S1 is "<<s1.s;
    s1=s2;
    
    cout<<"\nAFTER COPY S1 is "<<s1.s;
}