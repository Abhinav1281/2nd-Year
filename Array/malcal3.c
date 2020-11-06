//Abhinav Sinha 1929068
#include <stdio.h>
#include <stdlib.h>
struct stud 
{
    int roll;
    char name[30];
    double per;
};
void main()
{
    struct stud *c;
    c=(struct stud *)malloc(10*sizeof(struct stud));
    printf("ENTER NUMBER OF ELEMENTS:");
    int count;
    scanf("%d",&count);
    for(int i=0;i<count;i++)
    {
        scanf("%d",&(c+i)->roll);
        scanf("%s",&(c+i)->name); 
        scanf("%lf",&(c+i)->per);
    }
    
     for(int i=0;i<count;i++)
    {
        printf("%d \t",(c+i)->roll);
        printf("%s \t",(c+i)->name); 
        printf("%lf\n",(c+i)->per);
        
    }
}