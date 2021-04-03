/*
   BUBBLE SORT  

   Time Complexity = O(n^2)

1. compare first two  adjecent elements
2.  swap (if needed)
3. then 3rd ad 4th element and so on....
*/




#include<stdio.h>
int itrj=0; 
int itri=0;
void BubbleSort(int *m);
int main()
{
    int array[10]={76,23,98,33,96,212,56,87,1,8};

   BubbleSort(&array[0]);


   for (int i = 0; i < 10; i++)
   {
       printf("%d\t",array[i]);
   }
   printf("\nj itration = %d\t itration i = %d",itrj,itri);
}


void BubbleSort(int* m)
{
    int i,j,temp;

    for ( i = 0; i < 10; i++)
    {
        itri++;
        for ( j = 0; j < 10; j++)
        {
            
            if (m[j]>m[j+1])
            {
                itrj++;
                temp=m[j];     // compare and swap for decending
                m[j]=m[j+1];
                m[j+1]=temp;
            }
            
        }
        
    }
     
}