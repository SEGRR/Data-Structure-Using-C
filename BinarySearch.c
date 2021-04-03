/*
   BINARY SEARCH
    
     Time Complexity = O(logn)

1. take input array
2. sort it 
3. Find mid value by mid=low+(high-low)/2
4. compare Key with Arr[mid]
5. if equal return 'Found'
6. else if Arr[mid] < Key then low=mid+1
7. else high=mid-1
8. repeat step 3 to 7 till number is found or low < =high
    END!!

*/



#include<stdio.h>

int main()
{
    int a[]={5,7,9,1,9,3,7,9,10,0};
    int i,j,m,key;
     int minVal;
    for (int i = 0; i < 10; i++)
    {
         minVal=i;

        for (int j = i+1; j < 10; j++)
        {
              if(a[j]<a[minVal])
              {
                  minVal=j;
              }
           int temp=a[i];
           a[i]=a[minVal];
           a[minVal]=temp;


        }
        
    }
    
    printf("Enter key : ");
    scanf("%d",&key);
    i=0;
    j=10;
    while(i<=j)
    {
        m=i+(j-i)/2;

        if(a[m]==key)
        {
        printf("found at %d index",m);
        return 0;
        }
        else if(a[m]<key)
           i=m+1;
        else
           j=m-1;   
    }
    printf("not found");
    return 0; 

}