#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
void display();
struct node *start;

void push()
{
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&(node1->data));
    node1->next=NULL;
    if(start==NULL){
        start=node1;
    }
    else
    {
        node1->next=start;
        start=node1;
    }
    display();
}
void pop()
{
    if(start==NULL){
        printf("\nLIST EMPTY\n");
    }
    
    else
    {
        struct node *temp=start;
        start=temp->next;
        printf("\nDATA DELETED:%d\n",temp->data);
    }
    display();
}
void display()
{
    printf("\n DISPLAYED DATA:");
    struct node *node1=start;
    //printf("%p",node1->next);
    while(node1!=NULL){
         //printf("ENTERED LOOP");
        printf("%d->",node1->data);
        node1=node1->next;
        
    }
}
int main()
{
    int i=10;
    
    while(i!=0){
       
       printf("\nENTER \n1 TO ADD \n2 TO DELETE \n 0 TO EXIT:");
        scanf("%d",&i);
        switch(i)
        {
            case 0:
                break;
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            default:
                printf("WRONG INPUT");
        }
    }
}       