#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct tree
{
    int data;
    struct tree * left;
    struct tree * right;
};
typedef struct tree* node;

node root=NULL;
node insert(node current, int d)
{
    
    if (current == NULL)
    {
        node newNode=(node)malloc(sizeof(struct tree));
        newNode->data=d;
        newNode->left=NULL;
        newNode->right=NULL;
        
        return newNode;
    }
 
    
    if (d < current->data)
        current->left  = insert(current->left, d);
    else if (d >=current->data)
        current->right = insert(current->right, d);   
 
    
    return current;
}
  
void display(node displayNode)
{
    
    if(displayNode==NULL){
      
        return;
    }
   
    display(displayNode->left);
    printf(" %d ..",displayNode->data);
    display(displayNode->right);    
}

void search(int searchData,node current)
{
    if(current==NULL)
    {
        printf("\nDATA NOT FOUND...\n");
    }
    else if(current->data==searchData)
    {
        printf("\nDATA FOUND...\n");
    }
    else
    {
        if(searchData<current->data)
        {
            search(searchData,current->left);
        }
        else
        {
            search(searchData,current->right);
        }
        
    }
    
}

int main()
{
    int i=0,d;
    printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT\n3 TO SEARCH:");
    scanf("%d",&i);
    while(i!=2){
       if(i==1){
       printf("ENTER DATA TO BE ENTERED:");
       scanf("%d",&d);
        
        root=insert(root,d);
        display(root);
       }
       else if(i==3)
       {
           printf("ENTER DATA TO BE ENTERED:");
            scanf("%d",&d);
            search(d,root);
       }
         printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT\n3 TO SEARCH:");
        scanf("%d",&i);
    }
    display(root);
}
    
