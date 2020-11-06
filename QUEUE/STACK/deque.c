/*
Double ended Queue
Insertion and deletion take place in both ends
2 types - 1. Input restricted - Insertion - only rear
                              - Deletion - Both ends
          2. Output restricted - Insertion - both end(front rear)
                              - deletion - onlyfront
*/

#include <stdio.h>
#include <stdlib.h>
#define max 10
typedef struct
{
  int data[max];
  int front;
  int rear;
} Queue;
void display(Queue *q)
{

  if (q->front == -1)
  {
    printf("Queue is empty");
  }
  else
  {
    printf("Values of QUEUE are - ");
    for (int i = q->front; i <= q->rear; i++)
    {
      printf("%d\t", q->data[i], i);
    }
  }
  printf("\n");
}
int insert(Queue *q, int v, int side)
{
  if (q->rear == max - 1 && q->front == 0)
  {
    printf("Queue is full");
    return 1;
  }
  if (q->rear == -1)
  {
    q->front = q->rear = 0;
    q->data[q->rear] = v;
    return 0;
  }
  if (side == 1)
  {
    if (q->rear != max - 1)
    {
      q->rear++;
      q->data[q->rear] = v;
    }
    else
    {
      for (int i = q->front; i <= q->rear; i++)
        q->data[i - 1] = q->data[i];
      q->data[q->rear] = v;
      q->front--;
    }
    return 0;
  }
  else if (side == 0)
  {
    if (q->front != 0)
    {
      q->front--;
      q->data[q->front] = v;
    }
    else
    {
      for (int i = q->rear; i >= q->front; i--)
        q->data[i + 1] = q->data[i];
      q->data[q->front] = v;
      q->rear++;
    }
    return 0;
  }
}
int del(Queue *q, int *m, int side) // Order of 1
{
  if (q->front == -1)
  {
    printf("Queue is empty");
    return 1;
  }
  if (q->front == q->rear)
  {
    *m = q->data[q->front];
    q->front = q->rear = -1;
  }
  else
  {
    if(side == 0)
    {
      *m=q->data[q->front];
      q->front++;
    }
    else if (side == 1)
    {
      *m=q->data[q->rear];
      q->rear--;
    }
  }
  return 0;
}
int main()
{
  Queue q1;
  q1.front = q1.rear = -1;
  int n, m, i,v;
  while (1)
  {
    
    char choice = 0,ch=0;
    printf("Enter you choice\n1. Insert\n2. Delete\n3. Display\n4. End\n");
    choice=getchar();
    getchar();
    printf("%dhellooo",choice);
    if (choice == 49)
    {
      printf("Left or Right(L/R)");
      ch=getchar();
      if (ch == 108 || ch == 76)
      {
        printf("Enter a number to be inserted : ");
        scanf("%d", &v);
        int p = insert(&q1, v, 0);
      }
      else if (ch == 114 || ch == 82)
      {
        printf("Enter a number to be inserted : ");
        scanf("%d", &v);
        int p = insert(&q1, v, 1);
      }
      getchar();
    }
    else if (choice == 50)
    {
      printf("Left or Right(L/R)");
      
      ch=getchar();
      if (ch == 108 || ch == 76)
      {
        int t = del(&q1, &m, 0);
      }
      else if (ch == 114 || ch == 82)
      {
        int t = del(&q1, &m, 0);
      }
      getchar();
    }
    else if (choice == 51)
    {
         display(&q1);
    }
    else if (choice == 52)
      break;
    else
      break;
    
  }
}