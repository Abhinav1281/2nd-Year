#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
struct node *start;
void create()
{
    start=(struct node *)malloc(sizeof(struct node));
    start->data=0;
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    
    scanf("%d",&(node1->data));
    start->next=node1;
    
    struct node *node2=(struct node *)malloc(sizeof(struct node));
    
    scanf("%d",&(node2->data));
    node1->next=node2;
    
    struct node *node3=(struct node *)malloc(sizeof(struct node));
    
    scanf("%d",&(node3->data));
    node2->next=node3;
    node3->next=NULL;
}
void display()
{
    
    struct node *node1=start;
    while(node1->next!=NULL)
    {
        node1=node1->next;
        printf("\t %d",node1->data);
        
    }
}

int main()
{
    printf("ENTER DATA:");
    create();
    display();
    
}