/* wap to toggle bit*/

#include<stdio.h>
int togglebit(int,int);
int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the position to toggle\n");
	scanf("%d",&p);
	n=togglebit(n,p);
	printf("after toggling the bit: %d",n);
}

int togglebit(int n,int p)
{
	n=n^(1<<p);
	return n;
}

