#include <bits/stdc++.h>
using namespace std;
class Player
{
    string name;
    int num,score;
    public:
    friend istream& operator>>(istream &input,Player &p)
    {
        cout<<"ENTER DATA:";
        input>>p.name;
        input>>p.num;
        input>>p.score;
        return input;
    } 

    friend ostream& operator<<(ostream &out, Player &p)
    {
        out<<"NAME:"<<p.name<<"\nNUMBER:"<<p.num<<"\tSCORE:"<<p.score;
        return out;
    }
};
int main()
{
    Player p1;
    cin>>p1;
    cout<<p1;
    
}