/*ABHINAV SINHA 
1929068
LINKED LIST FULL
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
struct node *start;

struct node *current;

void eb()
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
void display()
{
    printf("\n DISPLAYED DATA:");
    struct node *node1=start;
    //printf("%p",node1->next);
    while(node1!=NULL){
         //printf("ENTERED LOOP");
        printf("%d\t",node1->data);
        node1=node1->next;
        
    }
}

void reverse()
{
    struct node *startrev=NULL;
    
    
    struct node *temp1=start;
    
    while(temp1!=NULL)
    {
        struct node *node1=(struct node *)malloc(sizeof(struct node));
        node1->data=temp1->data;
        node1->next=NULL;
        if(startrev==NULL){
            startrev=node1;
        }
        else
        {
            node1->next=startrev;
            startrev=node1;
        }
        temp1=temp1->next;
    }
    printf("\nREVERSED:::");
    struct node *temp=startrev;
    while (temp!=NULL)
    {
         printf("%d\t",temp->data);
        temp=temp->next;
    }
    

}
int main()
{
    int i=1;
    
    while(i!=0){
       printf("\nENTER \n1 TO ADD  \n 0 TO EXIT:");
        scanf("%d",&i);
       if(i!=1)
        {
            printf("WRONG INPUT");
            continue;
        }
        else
            eb();
       
       
        
    
    }
    display();
    reverse();
}