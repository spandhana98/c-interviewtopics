### wap to set a particular bit ###


#include<stdio.h>
int setbit(int,int);

int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the position to set\n");
	scanf("%d",&p);
	n=setbit(n,p);
	printf("after setting bit:%d",n);
}

int setbit(int n,int p)
{
	n=(n|(1<<p));
	return n;
}
