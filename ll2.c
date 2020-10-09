#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
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
    }
    else
    {
      //  printf("ENTERED NODE UPDATE");
        current->next=node1;
        current=node1;
    }
        
    }
void display()
{
    //printf("ENTERED DISPLAY");
    struct node *node1=start;
    //printf("%p",node1->next);
    while(node1!=NULL){
         //printf("ENTERED LOOP");
        printf("%d\t",node1->data);
        node1=node1->next;
        
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