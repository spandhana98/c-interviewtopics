#include<stdio.h>
void printarr(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
				
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	int temp;

	do
	{
		while(a[i]<=pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);

	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}

void quicksort(int a[],int low,int high)
{
	int pindex;
	if(low<high)
	{
		pindex=partition(a,low,high);
		quicksort(a,low,pindex-1);
		quicksort(a,pindex+1,high);
	}
}
int main()
{
	int a[100];
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printarr(a,n);
	quicksort(a,0,n-1);
	printarr(a,n);
	return 0;
}



