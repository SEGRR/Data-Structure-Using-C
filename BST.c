#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lptr;
    struct node * rptr;
};
struct node * root;

void inorder(struct node * temp);
void preorder(struct node * temp);
void postorder(struct node * temp);
void insert(int d);
void search(int d);

int main()
{
    root=NULL;
  int c;

insert(27);
insert(14);
insert(43);
insert(33);
insert(12);
printf("preorder : ");
preorder(root);
printf("\ninorder : ");
inorder(root);
printf("\n postorder : ");
postorder(root);
//   while (1)
//   {
//      printf("1.insert\n2.search\n3.inorder\n4.preorder\n5.postorder");
//      scanf("%d",&c); 
//      switch (c)
//      {
//      case 1:
         
//          insert
//          break;
     
//      default:
//          break;
//      }
//   }
  



return 0;
}

void insert(int d)
{
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));
   new->data=d;
    new->lptr=NULL;
      new->rptr=NULL;
   if (root==NULL)
   {
      root=new;
     
      return;
   }
   struct node *temp;
    temp=root;
  while (temp!=NULL)
  {
      if(d<=temp->data)
      {
         if(temp->lptr==NULL)
         { temp->lptr=new;
            return;
         } 
         else
      {
          temp=temp->lptr;
      }
    } else
      {
          if (temp->rptr==NULL)
          {
              temp->rptr=new;
                 return;
          }else
          {
              temp=temp->rptr;
          }
          
          
      }
      

    }
  
   
   

}

void preorder(struct node * temp)
{

  if (temp!=NULL)
  {
      printf("%d\t",temp->data);
      preorder(temp->lptr);
      preorder(temp->rptr);
  }
      

}

void inorder(struct node * temp)
{
    if (temp!=NULL)
    {
        inorder(temp->lptr);
        printf("%d\t",temp->data);
        inorder(temp->rptr);
    }
    
}

void postorder(struct node * temp)
{
    if (temp!=NULL)
    {
        postorder(temp->lptr);
        postorder(temp->rptr);
        printf("%d\t",temp->data);
    }
    
}

void search(int d)
{
    int found=0;
    struct node * temp;
    temp=root;

    while (temp!=NULL)
    {
        if(d==temp->data)
        {
           found++;
            break;
        }
        else if(d<temp->data)
        {
            temp=temp->lptr;
        }else if(d>temp->data)
        {
            temp=temp->rptr;
        }
    }
    if (found)
    {
        printf("%d was found %d times",d,found);
    }else
    {
        printf("value do not exist");
    }
    
}