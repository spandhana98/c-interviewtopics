

#include<stdio.h>
void merge(int low,int mid,int high);
void mergesort(int low,int high);
//MERGE SORT(DIVIDE AND CONQUER)
int a[100];
int n;
void mergesort(int low,int high)
{
	int mid,i;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(low,mid);
		mergesort(mid+1,high);
		merge(low,mid,high);
	}
	else
		return;
	
}
void merge(int low,int mid,int high)
{
	int i,l1,l2,b[20];
	for(l1=low,l2=mid+1,i=low;l1<=mid && l2<=high;i++)
	{
		if(a[l1]<a[l2])
		{
			b[i]=a[l1++];
			
		}
		else
		{
			b[i]=a[l2++];
		}
	}

	while(l1<=mid)
		b[i++]=a[l1++];
	while(l2<=high)
		b[i++]=a[l2++];
	for(i=low;i<=high;i++)
		a[i]=b[i];
}

		/*if(i<=mid)
		{
			for(r=i;r<=mid;r++)
			{
				b[k]=a[r];
				k++;
			}
		}
		else
		{
			for(r=j;r<=high;r++)
			{
				b[k]=a[r];
				k++;
			}
		}
}*/

int main()
{
	
	printf("enter the size\n");
	scanf("%d",&n);
	int i;
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	mergesort(0,n-1);
	for(i=0;i<=n-1;i++)
		printf("%d\t",a[i]);
	
}
