#include<stdio.h>

#define size 3

int queue[size];
int front,rear;
front=-1;
rear=-1;
void enqueue();
void dequeue();
void Display(int,int);

int main()
{

int s;
do{
printf("enter 1 for enqueue\t 2 for dequeue\t 3 for display");
scanf("%d",&s);
switch (s)
{
case 1:
    enqueue();
    break;
 case 2:
    dequeue();
    break;
    case 3:
    Display(front,rear);
    break;
default:
     return 0;
}
}while(1);


return 0;
}

void enqueue()
{
    if (rear==size-1)
    {
        printf("ERROR: queue is full\n\n ");
        return;
    }
    printf("\nEnter value");
    scanf("%d",&queue[rear+1]);
    rear++;
    if (front<0)
       {front++;}

     printf("data enqueued.......\n\n"); 
}

void dequeue()
{
    if (front<0 || front>rear)
    {
        printf("ERROR : queue is empty\n\n");
        return;
    }
    queue[front]=0;
    front++;
    printf("value dequed....\n\n");
}


void Display(int f, int r)
{
     if(f<0 || f>r)
     {
         printf("Queue is empty\n\n");
         return;
     }
     while (f<=r)
     {
         printf("%d\t",queue[f]);
         f++;
     }
     printf("\n\n");
}