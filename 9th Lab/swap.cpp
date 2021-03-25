#include <bits/stdc++.h>
using namespace std;
class Swap
{
    public:
    template<class E>
    void swap(E o1,E o2)
    {
        cout<<"\nBEFORE SWAP->\nFIRST OBJECT:"<<o1<<"\nSECOND OBJECT:"<<o2;
        E temp=o1;
        o1=o2;
        o2=temp;
        cout<<"\nAFTER SWAP->\nFIRST OBJECT:"<<o1<<"\nSECOND OBJECT:"<<o2;
    }
};
int main()
{
    Swap a;
    int a1=20,a2=45;
    char c1='A',c2='T';
    a.swap<int>(a1,a2);
    a.swap<char>(c1,c2);
}