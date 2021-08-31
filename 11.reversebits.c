/*wap to reverse bits of integer */

#include<stdio.h>
int reversebits(int n);
int main()
{
	int n;
	printf("enter the number to reverse\n");
	scanf("%d",&n);
	n=reversebits(n);
	printf("after reversing %u",n);
}

int reversebits(int n)
{
	int i,j;
	for(i=0,j=(sizeof(char)*8)-1;i<j;i++,j--)
	{
		if((n & (1<<i))!=(n & (1<<j)))
		{
			n=n^(1<<i);
		        n=n^(1<<j);
		}
	}

	return n;
}
