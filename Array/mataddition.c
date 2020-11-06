#include <stdio.h>
void add(int *m1,int *m2,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;i++)
        {
            *((m1+i)+j)+=*((m2+i)+j);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;i++)
        {
            printf("%d",*((m1+i)+j));
        }
    }
}
int main()
{
    
    int r1,c1,r2,c2;
    printf("ENTER ROW AND COLUMN OF FIRST MATRIX:");
    scanf("%d %d",&r1,&c1);
    int m1[r1][c1];
    printf("ENTER ROW AND COLUMN OF SECOND MATRIX:");
    scanf("%d %d",&r2,&c2);
    int m2[r2][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("ENTER FIRST MATRIX ELEMENT:");
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("ENTER SECOND MATRIX ELEMENT:");
            scanf("%d",&m2[i][j]);
        }
    }
    int res[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;i++)
        {
            res[i][j]= m1[i][j]+m2[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    
    //  add(&m1[0][0],&m2[0][0],r1,c1);   
    
}