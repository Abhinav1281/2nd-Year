//Abhinav Sinha 1929068 
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *it;
    it=(int *)malloc(10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",(it+i));
    }
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=*(it+i);
    }
    printf("%d",sum);
    
}