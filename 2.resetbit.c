 /*wap to reset a particular bit */

#include<stdio.h>

int resetbit(int n,int p);
int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the position to reset\n");
	scanf("%d",&p);
	n=resetbit(n,p);
	printf("after resetting : %d",n);
}

int resetbit(int n,int p)
{
	n=(n & (~(1<<p)));
	return n;
}
