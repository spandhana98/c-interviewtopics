#include<stdio.h>

int binary_to_decimal(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
		return (n%10)+2*(binary_to_decimal(n/10));
}

int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	int res=binary_to_decimal(n);
	printf("the decimal equivalent  is  %d\n",res);
}
