#include<stdio.h>
#include<stdlib.h>

void Insert();
void Delete();
void Dislpay();

struct node
{
    int data;
     struct node * next;
     

};

struct node * head=NULL;

int main()
{
   int s;
do{
printf("enter 1 for insert\t 2 for delete\t 3 for display");
scanf("%d",&s);
switch (s)
{
case 1:
    Insert();
    break;
 case 2:
    Delete();
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

void Insert()
{
    struct node * new, *t;
     struct node * temp;
    new=(struct node *)malloc(sizeof(struct node));
     printf("Enter value : ");
     scanf("%d",&new->data);
   if (head==NULL)
   {
       head=new;
       head->next=head;
       printf("node created....\n\n");

       return;
   }
    t=head;
    temp=NULL;
   do
   {
       temp=t;
       t=t->next;
   } while(t!=head);

   new->next=t;
   temp->next=new;
   
   printf("node created....\n\n");

}

void Delete()
{
    struct node *t,*temp;
    int d;
    if (head==NULL)
    {
        printf("ERROR : no node to delete\n\n");
        return;
    }
    
    printf("enter value to delete");
    scanf("%d",&d);
    if (d==head->data)
    {
        temp=head->next;
         do
        {
           
          temp=temp->next;
        } while (temp->next != head);
        temp->next=head->next;
        t=head;
        head=head->next;
        free(t);
        printf("Value is deleted...\n\n");
        return;

    }
    
    t=head;
    temp=NULL;
  do
    {
         temp=t;
       t=t->next;
    } while(t != head || t->data != d);
    if (t == head)
    {
        printf("Value do not exist\n\n");
    }  
    else
    {
        temp->next=t->next;
        free(t);
        printf("Value is deleted....\n\n");
    }
    
    
}

void Display()
{
    if (head==NULL)
    {
         printf("ERROR : no node to display\n\n");
        return;
    }
    struct node *t;
     t=head;
   do
    {
        printf("%d\t",t->data);
        t=t->next;
    } while (t!=head);
    
    
}