#include<stdio.h>
void bubblesort(int arr[100]);

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
             bubblesort(arr);
}

void bubblesort(int arr[100])
{
	int temp,i,j;
  for(i=0;i<n-1;i++)
  {
     for(j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
	     {
		      temp=arr[j];	     
		      arr[j]=arr[j+1];
	              arr[j+1]=temp;
           }
    }
  }
       printf("sorted list in ascending order\n");
   for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
}

