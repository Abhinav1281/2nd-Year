#include <stdio.h>
struct poly
{
    int pow;
    int coEff;
    struct poly *next;
};
int count=0;
int count1=0;
struct poly *start;
void create(int p)
{

     printf("\nFOR 1::\n");
    struct poly *cur;
    for(int i=p;i>=0;i--)
    {
        count++;
        struct poly *newAdd=(struct poly *)malloc(sizeof(struct poly));
        newAdd->next=NULL;
        newAdd->pow=i;
        printf("ENTER Co-Effecient for %d::",i);
        scanf("%d",&(newAdd->coEff));
        if(start==NULL)
            start=newAdd;
        else
        {
            cur->next=newAdd;
        }
        cur=newAdd;
    }
    
}
struct poly *start1;
void create1(int p)
{

    printf("\nFOR 2::\n"); 
    struct poly *cur;
    for(int i=p;i>=0;i--)
    {
        count1++;
        struct poly *newAdd=(struct poly *)malloc(sizeof(struct poly));
        newAdd->next=NULL;
        newAdd->pow=i;
        printf("ENTER Co-Effecient for %d::",i);
        scanf("%d",&(newAdd->coEff));
        if(start1==NULL)
            start1=newAdd;
        else
        {
            cur->next=newAdd;
        }
        cur=newAdd;
    }
    
}
void display()
{
    
    struct poly *temp=start;
    printf("\nFOR 1::\n");
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        printf("%d.X^%d+",temp->coEff,temp->pow);
        //printf("CoEffecient=%d\n",temp->coEff);
        if(temp->next==NULL)
            printf("%dX^%d",temp->coEff,temp->pow);
        temp=temp->next;
    }
}
void display1()
{
    
    struct poly *temp=start1;
    printf("\nFOR 2::\n");
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        printf("%d.X^%d+",temp->coEff,temp->pow);
        //printf("CoEffecient=%d\n",temp->coEff);
        if(temp->next==NULL)
            printf("%dX^%d",temp->coEff,temp->pow);
        temp=temp->next;
    }
}
int size()
{
    return count;
}
int size1()
{
    return count1;
}
struct poly *startAdd;
void add()
{
    struct poly *temp=start;
    struct poly *temp1=start1;
    struct poly *cur;
    
    if(count>count1)
    {
        struct poly *addNew=temp;
        while(count!=count1)
        {
            
            if(startAdd==NULL)
                startAdd=addNew;
            else
            {
                cur->next=addNew;
            }
            cur=addNew;
            addNew=addNew->next;
            temp=temp->next;
            count--;
        }
    }
    else if(count1>count)
    {
        struct poly *addNew=temp1;
        while(count!=count1)
        {
            
            if(startAdd==NULL)
                startAdd=addNew;
            else
            {
                cur->next=addNew;
            }
            cur=addNew;
            addNew=addNew->next;
            temp1=temp1->next;
            count1--;
        }
    }
    while(temp!=NULL || temp1!=NULL)
    {
        struct poly *newAdd=(struct poly *)malloc(sizeof(struct poly));
        newAdd->next=NULL;
        if(temp->pow==temp1->pow)
        {
            //printf("BOTH ARE ADDED");
            newAdd->pow=temp->pow;
            newAdd->coEff=temp->coEff+temp1->coEff;
            temp=temp->next;
            temp1=temp1->next;
        }
        if(startAdd==NULL)
            startAdd=newAdd;
        else
            cur->next=newAdd;
        cur=newAdd;
        
    }
}
struct poly * startMul;

void multiply()
{
    struct poly * temp=start;
    struct poly * temp1=start1;
    struct poly * cur;
    int as=(size()+size1());
    int ar[as];
    for(int i=0;i<as;i++)
        ar[i]=0;
    while ((temp!=NULL))
    {
        int pow1=temp->pow;
        while (temp1!=NULL)
        {
            int pow2=temp1->pow;
            ar[pow1+pow2]+=temp->coEff*temp1->coEff;
            temp1=temp1->next;
        }
        temp1=start1;
        temp=temp->next;
    }
    for(int i=as-1;i>=0;i--)
    {
        struct poly * newAdd=(struct poly *)malloc(sizeof(struct poly));
        newAdd->pow=i;
        newAdd->coEff=ar[i];
        newAdd->next=NULL;
        if(startMul==NULL)
            startMul=newAdd;
        else 
            cur->next=newAdd;
        cur=newAdd;    
    }
    
}
void displaysum()
{
    struct poly *temp=startAdd;
    printf("\nFOR SUM::\n");
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        printf("%d.X^%d+",temp->coEff,temp->pow);
        //printf("CoEffecient=%d\n",temp->coEff);
        if(temp->next==NULL)
            printf("%dX^%d",temp->coEff,temp->pow);
        temp=temp->next;
    }
}
void displaymul()
{
    struct poly *temp=startMul;
    printf("\nFOR MULTIPLICATION::\n");
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        printf("%d.X^%d+",temp->coEff,temp->pow);
        //printf("CoEffecient=%d\n",temp->coEff);
        if(temp->next==NULL)
            printf("%dX^%d",temp->coEff,temp->pow);
        temp=temp->next;
    }
}
int main()
{
    create(1);
    //printf("%d",X->coEff);
    create1(1);
    display1();
    display();
    add();
    displaysum();
    multiply();
    displaymul();
}
