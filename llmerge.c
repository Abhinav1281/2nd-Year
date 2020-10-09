/*ABHINAV SINHA
1929068
CSCE-1
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
struct node *start;
struct node *start1;
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
void create1()
{
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&(node1->data));
    node1->next=NULL;
    if(start1==NULL){
        start1=node1;
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
        printf("%d->",node1->data);
        node1=node1->next;
        
    }
    printf("END");
}
void display1()
{
    //printf("ENTERED DISPLAY");
    struct node *node1=start1;
    //printf("%p",node1->next);
    while(node1!=NULL){
         //printf("ENTERED LOOP");
        printf("%d->",node1->data);
        node1=node1->next;
        
    }
    printf("END");
}
void merge()
{
    struct node *node1=start;
    //printf("%p",node1->next);
    while(node1->next!=NULL){
         //printf("ENTERED LOOP");
        //printf("%d\t",node1->data);
        node1=node1->next;
        
    }
    node1->next=start1;
}
int main()
{
    int i=0;
    printf("FOR LIST 1:ENTER \n1 TO CONTINUE \n 2 TO EXIT:");
    scanf("%d",&i);
    while(i==1){
       
        create();
         printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT :");
        scanf("%d",&i);
    }
    printf("\n1st LIST:");
    display();
    printf("\n\nFOR LIST 2:ENTER \n1 TO CONTINUE \n 2 TO EXIT:");
    scanf("%d",&i);
    while(i==1){
       
        create1();
         printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT :");
        scanf("%d",&i);
    }
    printf("\n2nd LIST:");
    display1();
    merge();
    printf("\n\nMERGED LIST:");
    display();
    
}