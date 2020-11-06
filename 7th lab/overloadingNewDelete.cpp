#include <bits/stdc++.h>
using namespace std;
class NewDelete
{
    int num;
    double dnum;
    public:
    NewDelete()
    {

    }
    NewDelete(int n,double d)
    {
        num=n;
        dnum=d;
    }
    void display()
    {
        
            cout<<"\nINT DATA:"<<num<<"\nDOUBLE DATA:"<<dnum;
 
    }

    void* operator new(size_t s)
    {
        cout<<"\nUSING NEW";
        void * newp=::new NewDelete();
        return newp;
    }

    void operator delete(void * p)
    {
        cout<<"\nUSING DELETE";
        free(p);
    }
};

int main()
{
    NewDelete *n=new NewDelete(10,2.2);
    NewDelete *n1=new NewDelete(12,3.467);
    n->display();
    n1->display();
    delete n;
    delete n1;
   
}