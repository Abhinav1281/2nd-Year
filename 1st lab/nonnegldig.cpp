#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if((a%10)==(b%10))
        cout<<"same last digit "<<(a%10);
     else
     {
         cout<<"last digit different";
     }
}
        