#include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node * left;
    struct node* right;
};
struct node * root;
void insert(char);
void inorder(struct node *);
void preorder(struct node*);
void postorder(struct node*);

int main()
{
root=NULL;

insert('S');
insert('F');
insert('A');
insert('I');
insert('N');
insert('U');
insert('Y');
printf("\npreorder  : ");
preorder(root);
printf("\npostorder : ");
postorder(root);
printf("\ninorder   : ");
postorder(root);

return 0;
}

void insert(char c)
{
    struct node* new, * temp;

    new=(struct node*)malloc(sizeof(struct node));
    if (new==NULL)
    {
        printf("memory full");
        return;
    }
    
    new->data=c;
     new->left=NULL;
     new->right=NULL;
    
    if (root==NULL)
    {
        root=new;
         printf("\ninserted at root-- %c",c);
        return;
    }
    temp=root;

   
  
  while (temp!=NULL)
  {
      if(c<=temp->data)
      {
         if(temp->left==NULL)
         { temp->left=new;
           printf("\ninserted at left-- %c",c);
            return;
         } 
         else
      {
          temp=temp->left;
      }
    } else
      {
          if (temp->right==NULL)
          {
              temp->right=new;
               printf("\ninserted at right-- %c",c);
                 return;
          }else
          {
              temp=temp->right;
          }
          
          
      }
      

    }
  
   
 
    
    
    

}

void preorder(struct node* temp)
{
    if (temp!=NULL)
    {
        printf("%c\t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
    
}

void postorder(struct node* temp)
{
    if (temp!=NULL)
    {
        
        postorder(temp->left);
        postorder(temp->right);
        printf("%c\t",temp->data);
    }
    
}
void inorder(struct node * temp)
{
    if (temp!=NULL)
    {
        inorder(temp->left);
        printf("%d\t",temp->data);
        inorder(temp->right);
    }
    
}