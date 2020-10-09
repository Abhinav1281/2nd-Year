/*ABHINAV SINHA 
1929068
CQUEUE LIST FULL
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;

    
};
int data=0,size=0;
struct node *front;
struct node *rear;
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
    if(data==0){
        printf("UNDERFLOW\n");
        return true;
    }
    return false;
}
void enqueue()
{
    if(overflow()){}
    else{
        data++;
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&(node1->data));
    node1->next=NULL;
    if(front==NULL && rear==NULL){
            front=node1;
            rear=node1;
    }
        else
        {
        rear->next=node1;
        rear=node1;
            
        }
    }
    
    
}
void dequeue()
{
    if(underflow()){}
    else
    {
        data--;
        int datadel=front->data;
        printf("DATA DELETED:%d",datadel);
        front=front->next;

    }
    
}
void display()
{
    printf("\n DISPLAYED DATA:");
    struct node *node1=front;
    //printf("%p",node1->next);
    while(node1!=NULL){
         //printf("ENTERED LOOP");
        printf("%d\t",node1->data);
        node1=node1->next;
        
    }
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
            enqueue();
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
