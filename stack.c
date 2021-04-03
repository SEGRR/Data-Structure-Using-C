#include<stdio.h>

#define size 3

 void push();
 void pop();
int stack[size];
int top=-1;
int main()
{
int s;
do{
printf("enter 1 for push\t 2 for pop\t 0 for exit");
scanf("%d",&s);
switch (s)
{
case 1:
    push();
    break;
 case 2:
    pop();
    break;
default:
     return 0;
}
}while(1);



return 0;
}

 void push()
{
    if (top==size-1)
    {
      printf("\n ERROR:stack overflow \n\n");
      return 0;   
    }

   printf("enter value : ");
   scanf("%d",&stack[top+1]); 
    top++;
   printf("\n value inserted......\n\n");
   return 0;
}


void pop()
{
    if (top<0)
    {
        printf(" \n  ERROR : stack underflow\n\n");
        return 0;
    }
    stack[top]=0;
    top--;
    printf("\n value poped.......\n\n");
}