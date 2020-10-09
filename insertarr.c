#include <stdio.h>
int* insert(int LA[],int N,int pos,int val)
{
    int i;
    int LAN[N+1];
    for(i=N;i>=(pos-1);i--)
    {
        LA[i+1]=LA[i];
    }
    LA[pos-1]=val;
    N++;
    for(i=0;i<N;i++)
    {
        printf("%d\t",LA[i]);
    }
}
int main()
{
    int ar[10];
     printf("ENTER elements:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
   printf("ENTER ELEMENT TO BE INSERTED AND POSITION:");
    int x,pos;
    scanf("%d %d",&x,&pos);
    int *p=insert(ar,10,pos,x);
    
    for(int i=0;i<10;i++)
        {
            printf("%d\t",*(p+i));
        }
    
}