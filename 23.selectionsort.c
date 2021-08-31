#include<stdio.h>

void selectionsort(int a[100]);
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
             selectionsort(arr);
}

void selectionsort(int a[100])
{
	         int i,j,temp,min;
    for(i=0;i<n;i++)
     {
		min=i;
           for(j=i+1;j<n;j++)
	  {
		   if(a[j]<a[min])
		min=j;
           }

		temp=a[i];
		a[i]=a[min];
               a[min]=temp;
       } 

           printf("sorted array\n");
    for(i=0;i<n;i++)
          printf("%d\t",a[i]);
}
