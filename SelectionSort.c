/*  
    SELECTION SORT

Time Complexity = O(n^2)
 1. find the samllest element 
 2. swap it with first element 
 3. then find the smallest element from the unsorted array 
 4. loop it for all elements int array
 */



#include<stdio.h>
int itJ=0,itI=0;
SelectionSort(int*);
void main()
{
   int array[10]={0,6,3,8,5,1,4,9,2,7};

   SelectionSort(array);

   for (int i = 0; i < 10; i++)
   {
       printf("%d\t",array[i]);
   }
   printf("\nj itration = %d\t i itration  = %d",itJ,itI);
}

SelectionSort(int m[])
{
    int i,j,temp,MinVal;
    
    for ( i = 0; i < 9; i++)
    {    
        itI++;
        MinVal=i;
        for ( j = i+1; j < 10; j++) // this loop will find smallest element in array
        {
                 
            if (m[j]<m[MinVal])
            {
                MinVal=j;
            }
            
        }
        itJ++;
                temp=m[i];         
                m[i]=m[MinVal];    // swapping 
                m[MinVal]=temp;
                
    }
    
}