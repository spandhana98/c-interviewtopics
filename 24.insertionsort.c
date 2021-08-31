#include<stdio.h>

void insertionsort(int a[100]);
int n;
int main()
{
		int arr[100];
		int i;
		printf("enter number of elements\n");
		scanf("%d",&n);
               printf("enter the array elements\n");

      for(i=0;i<n;i++)
	{
	      scanf("%d",&arr[i]);
        }
              insertionsort(arr);
}

void insertionsort(int a[100])
{
	         int i,j,temp;
    for(i=1;i<n;i++)
	{
		  temp=a[i];
	 for(j=i;j>0 && temp<a[j-1];j--)
	   {
	          a[j]=a[j-1];
	   }
	  
	          a[j]=temp;
      }

           printf("sorted array\n");
   for(i=0;i<n;i++)
          printf("%d\t",a[i]);
}
