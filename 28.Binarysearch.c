/* BINARY SEARCH : search element in sorted array*/


#include<stdio.h>

int Binarysearch(int a[],int low,int high)
{
	int key;
	int mid;
	printf("enter the key to search\n");
	scanf("%d",&key);
	while(low<high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
        		return mid;
		}
		else if(key<a[mid])
		{
			high=(mid-1);
		}
		else
		{
			low=mid+1;
		}
	}

	
	return -1;

}


int main()
{
	int a[40];
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int found=Binarysearch(a,0,n-1);
	if(found==-1)
	{
		printf("element not found in the array\n");
	}
	else
	{
		printf("element found at index %d\n",found+1);
	}
}

