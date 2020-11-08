#include <bits/stdc++.h>
using namespace std;
class Keyfind
{
    public:
    template<class E>
    E find(E arr[],int keyarr[],int key,int keysize)
    {
        int i;
        E retval=0;
        for(i=0;i<keysize;i++)
        {
            if(key==keyarr[i])
            {
                retval=arr[i];
                cout<<"\n"<<arr[i]<<" DATA FOUND at "<<i;
                break;
            }
        }
       return retval;
    }
};

int main()
{
    int array[]={12,3,4,6,8,9,20};
    char carray[]={'A','X',';','g','E','-','#'};
    int key[]={101,201,301,401,501,601,701};

    Keyfind k;
    k.find<int>(array,key,301,7);
    k.find<char>(carray,key,701,7);
}