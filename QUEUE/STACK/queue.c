#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
void display();
struct node *start;

struct node *current;

void enque()
{
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&(node1->data));
    node1->next=NULL;
    if(start==NULL){
        start=node1;
        current=node1;
    }
    else
    {
      //  printf("ENTERED NODE UPDATE");
      struct node *temp=start;
      while(temp->next!=NULL)
        temp=temp->next;
      temp->next=node1;
    }
    display();    
}

void deque()
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
                enque();
                break;
            case 2:
                deque();
                break;
            default:
                printf("WRONG INPUT");
        }
    }
}       