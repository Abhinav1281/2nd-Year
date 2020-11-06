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
void ib()
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
void ab()
{
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:");
    scanf("%d",&(node1->data));
    int pos;
    printf("ENTER POSITION:");
    scanf("%d",&pos);
    node1->next=NULL;
    
    if(start==NULL){
        printf("LIST EMPTY");
    }
    
    else
    {
        struct node *temp=start;
        for(int i=0;i<pos-1;i++)
        {
          temp=temp->next;  
        }
        node1->next=temp->next;
        temp->next=node1;
    }
    display();
} 
void db()
{
    if(start==NULL){
        printf("LIST EMPTY");
    }
    
    else
    {
        struct node *temp=start;
        start=temp->next;
        printf("\nDATA DELETED:%d",temp->data);
    }
    display();
}
void de()
{
    if(start==NULL){
        printf("LIST EMPTY");
    }
    
    else
    {
       struct node *temp=start;
       struct node *ptr=start;
       
      while(ptr->next!=NULL){
          temp=ptr;
          ptr=ptr->next;
      }
        
      temp->next=NULL;
        printf("\nDATA DELETED:%d",ptr->data);
    }
    display();
}
void da()
{
    int pos;
    printf("ENTER POSITION:");
    scanf("%d",&pos);
    if(start==NULL){
        printf("LIST EMPTY");
    }
    
    else
    {
        struct node *temp=start;
        struct node *ptr=start;
        for(int i=0;i<pos;i++)
        {
          temp=ptr;
          ptr=ptr->next;  
        }
        
        temp->next=ptr->next;
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


int main()
{
    int i=10;
    
    while(i!=0){
       
       printf("\nENTER \n1 TO ADD AT BEGINNING \n2 TO ADD AT END \n3 TO ADD AT ANY POSITION \n4 TO DELETE FROM BEGINNING \n5 TO DELETE FROM END \n6 TO DELETE AT ANY POSITION \n 0 TO EXIT:");
        scanf("%d",&i);
        switch(i)
        {
            case 0:
                break;
            case 1:
                ib();
                break;
            case 2:
                eb();
                break;
            case 3:
                ab();
                break;
            case 4:
                db();
                break;  
            case 5:
                de();
                break; 
            case 6:
                da();
              break;     
            default :
                printf("WRONG ENTRY");
                break;            
        }
    }
    display();
    
}