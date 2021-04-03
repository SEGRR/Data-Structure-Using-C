#include<stdio.h>


# define size 3
int queue[size],front,rear;
front=0;
rear=0;
void Enqueue();
void Dequeue();
void Display();
int main()
{

int s;
do{
printf("enter 1 for enqueue\t 2 for dequeue\t 3 for display");
scanf("%d",&s);
switch (s)
{
case 1:
    Enqueue();
    break;
 case 2:
    Dequeue();
    break;
case 3:
     Display();
     break;
default:
     return 0;
}
}while(1);



return 0;
}


void Enqueue()
{
    if((rear+1)%size == front)
    {
        printf("ERROR : queue is full\n\n");
        return;
    }
    rear=(rear+1)%size;
    printf("enter value : ");
    scanf("%d",&queue[rear]);
    printf("value queued...\n\n");
}

void Dequeue()
{
    if ( front == rear)
    {
     printf("ERROR : queue is empty\n\n");
        return;   
    }
   
    queue[front]=0;
     front=(front+1)%size;
    printf("value is dequeued....\n\n");

}

void Display()
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t",queue[i]);
    }
    
}