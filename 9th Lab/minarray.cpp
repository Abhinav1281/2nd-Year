#include <bits/stdc++.h>
using namespace std;
class minArray
{
    public:
    template<class E>
    
    E findMin(E arr[],int s)
    {
        E minNum=arr[0];
        for(int i=1;i<s;i++)
        {
            if(minNum>arr[i])
                minNum=arr[i];
        }
        return minNum;
    }
};

int main()
{
    int ar[]={10,20,3,1,78,65};
    float far[]={30.5f,3.3f,2.5f};

    minArray obj;
    int minint=obj.findMin<int>(ar,6);
    float minfloat=obj.findMin<float>(far,3);

    cout<<"MIN INTEGER="<<minint<<"\nMIN FLOAT="<<minfloat;
}
