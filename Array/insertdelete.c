
#include <stdio.h>
int main()
{
    
    int s;
    printf("ENTER size:\n");
    scanf("%d",&s);
    printf("ENTER elements:\n");
    int ar[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
    }
    
        
    
    printf("ENTER 1 for replace:\n 2 for delete");
    int c;
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("ENTER element and position:\n");
        int p,e;
        scanf("%d",&e);
        scanf("%d",&p);
        ar[p-1]=e;
        printf("NEW ARRAY \n");
        for(int i=0;i<s;i++)
        {
            printf("\t %d",ar[i]);
        }
        break;

    case 2:
         printf("ENTER position to delete:\n");
         
         scanf("%d",&p);
         for(int i=p;i<s;i++)
         {
             ar[i-1]=ar[i];
         }
          printf("NEW ARRAY \n");
          ar[s-1]=0;
        for(int i=0;i<s;i++)
        {
            printf("\t %d",ar[i]);
        }   
        
        break;

    default:
        printf("WRONG INPUT");
        break;
    }

}

