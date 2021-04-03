#include<stdio.h>


int main()
{
 int array[10]={76,23,98,33,96,212,56,87,1,8};
   
   InsertionSort(array);
for (int i = 0; i < 10; i++)
   {
       printf("%d\t",array[i]);
   }
  

return 0;
}


void InsertionSort(int m[])
{
    int s,i,j;

    for ( i = 1; i < 10; i++)
    {
        s=m[i];
        j=i-1;
        while (m[j]>s && j>=0)
        {
        m[j+1]=m[j];
        j--;
        }
        m[j+1]=s;
    }
    
}