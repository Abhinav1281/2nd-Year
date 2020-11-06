#include <stdio.h>
int* delete(int LA[],int N,int pos)
{
     for(int i=(pos-1);i<N;i++)
        {
            LA[i]=LA[i+1];
        }   
        LA[N-1]=0;
        
        return LA;
      
}
int main()
{
    int ar[10];
     printf("ENTER elements:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
   printf("ENTER POSITION:");
    int pos;
    scanf("%d",&pos);
    int *p=delete(ar,10,pos);
    for(int i=0;i<10;i++)
        {
            printf("%d\t",*(p+i));
        }
    
}