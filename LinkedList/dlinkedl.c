#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
    
    
};
struct node *start;

struct node *current;

void create()
{
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&(node1->data));
    node1->next=NULL;
    if(start==NULL){
        start=node1;
        current=node1;
        node1->prev=NULL;
    }
    else
    {
      //  printf("ENTERED NODE UPDATE");
        node1->prev=current;
        current->next=node1;
        current=node1;
    }
        
    }
void display()
{
    //printf("ENTERED DISPLAY");
    struct node *node1=start;
    //printf("%p",node1->next);
    printf("\nNORMAL:::");
    while(node1!=NULL){
         //printf("ENTERED LOOP");
        printf("%d\t",node1->data);
        node1=node1->next;
        
    }
    printf("\nREVERSED:::");
    node1=current;
    while(node1!=NULL){
         //printf("ENTERED LOOP");
        printf("%d\t",node1->data);
        node1=node1->prev;
        
    }
    }


int main()
{
    int i=0;
    printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT:");
    scanf("%d",&i);
    while(i==1){
       
        create();
         printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT :");
        scanf("%d",&i);
    }
    display();
    
}