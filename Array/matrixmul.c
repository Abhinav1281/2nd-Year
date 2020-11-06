#include <stdio.h>
int r1,r2,c1,c2;
 
int main()
{
    
    
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
            
            scanf("%d",&m1[i][j]);
        }
    }
    printf("2nd");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            
            scanf("%d",&m2[i][j]);
        }
    }
    
    int i, j, k; 
    int res[r1][c1];
    if(c1==r1)
    {
    for (i = 0; i < r1; i++) 
    { 
        for (j = 0; j < c1; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < c1; k++) 
                res[i][j] += (m1[i][k])*(m2[k][j]); 
                              
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
    }   
}