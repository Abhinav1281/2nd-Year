#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int carray[];
int f=-1,r=-1,size=0,data=0;
bool overflow()
{
    if(data==size){
         printf("OVERFLOW\n");
        return true;
    }
    return false;    
}
bool underflow()
{
    if(data=0){
        printf("UNDERFLOW\n");
        return true;
    }
    return false;
}
void enqueue(int val)
{
    
    if(overflow()==true){}
       
    else
    {
        data++;
        if(f==-1 && r==-1)
        {
            f=0;
        }
        r=r+1;
        r=r%size;
        carray[r]=val;
    }
        
}

void dequeue()
{
    if(underflow()==true){}
        
    else
    {
        data--;
        printf("ELEMENT DELETED:%d",carray[f]);
        carray[f]=0;
        f++;
        f=f%size;
        
            
    }
        
}

void display()
{
    
    for(int i=0;i<size;i++)
    {
        printf("%d\t",carray[i]);
    }
    printf("\n\n");
}
int main()
{
    int i=10;
    int val;
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&size);
    
    while(i!=0){
        printf("\nENTER \n1 TO INSERT \n 2 TO DELETE\n 3 TO DISPLAY\n 0 TO EXIT:");
         scanf("%d",&i);
       if(i!=0){
        switch (i)
        {
        case 1:
            
            printf("ENTER ELEMENT:");
            scanf("%d",&val);
            enqueue(val);
            break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        default:
        printf("WRONG CHOICE");
            break;
        }
       }
       else
       {
           break;
       }
       
    }
    display();
}
