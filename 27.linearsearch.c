#include<stdio.h>
void linear(int arr[],int n);

int main()
{
        int n;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n],i;
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}

	
	linear(arr,n);
}

void linear(int a[],int n)
{
	int key;
	printf("enter the key to search\n");
	scanf("%d",&key);
	int i,flag=0;
        for(i=0;i<n;i++)
        {
                if(key==a[i])
                {
                       printf("key found at index %d",i+1);

                        break;
                }
        }
         if(i==n)
                printf("key not found\n");

}



