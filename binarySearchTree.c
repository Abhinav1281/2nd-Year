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

node minNode(node current)
{
    node lsmallest=NULL,rsmallest=NULL;
   if(current->left!=NULL)
   {
       lsmallest=minNode(current->left);
   }
   if(current->right!=NULL)
   {
       rsmallest=minNode(current->right);
   }
    if(lsmallest==NULL)
    {
        return rsmallest;
    }
    else if(rsmallest==NULL)
    {
        return lsmallest;
    }
    else
    {
        if(lsmallest->data<rsmallest->data)
            return lsmallest;
        else if(rsmallest->data<=lsmallest->data)
            return rsmallest;
    }
    
    
}

void delete(int deleteData,node current)
{
    if(current==NULL)
    {
        printf("\nDATA NOT FOUND...\n");
    }
    else if(current->data==deleteData)
    {
        if(current->left==NULL && current->right==NULL)
        {
            current=NULL;
        }
        else if(current->left!=NULL && current->right!=NULL)
        {
            node mNode=minNode(current);
            int temp=mNode->data;
            mNode->data=current->data;
            current->data=temp;
            delete(deleteData,current);
        }
        else
        {
            if(current->left==NULL)
            {
                current=current->right;
            }
            else
            {
                current=current->left;
            }
            
        }
        
        printf("\nDATA DELETED\n");
    }
    else
    {
        if(deleteData<current->data)
        {
            delete(deleteData,current->left);
        }
        else
        {
            delete(deleteData,current->right);
        }
        
    }
}

int main()
{
    int i=0,d;
    printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT\n3 TO SEARCH\n4 TO DELETE:");
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
           printf("ENTER DATA TO BE SEARCHED:");
            scanf("%d",&d);
            search(d,root);
       }
       else if(i==4)
       {
           printf("ENTER DATA TO BE DELETED:");
            scanf("%d",&d);
            delete(d,root);
       }
         printf("ENTER \n1 TO CONTINUE \n 2 TO EXIT\n3 TO SEARCH\n4 TO DELETE:");
        scanf("%d",&i);
    }
    display(root);
}
    
