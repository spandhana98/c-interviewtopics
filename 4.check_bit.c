/*wap to check whether bit is set or reset*/

#include<stdio.h>

int check_bit(int n,int p);
int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the bit to check\n");
	scanf("%d",&p);
	n=check_bit(n,p);
	if(n==0)
		printf("bit is not set\n");
	else
		printf("bit is set\n");
}

int check_bit(int n,int p)
{
	if((n & (1<<p))!=0)
		return 1;
	else
		return 0;
}
