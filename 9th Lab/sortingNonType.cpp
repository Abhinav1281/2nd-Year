#include <bits/stdc++.h>
using namespace std;
class sorter
{
    public:
    template<class E, int size>
    E* sort(E arr[])
    {
        E* arpointer;
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    E temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        arpointer=&arr[0];
    }
};

int main()
{
    int arr[]={10,50,20,3,56};
    sorter s;
    int* arp=s.sort<int,5>(arr);
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arp[i];
    }
}