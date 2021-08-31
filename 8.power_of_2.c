/* wap to check whether print power of 2*/
 #include<stdio.h>

int pow_2(int n);
int main()
{
	int n,res;
	printf("enter the number to check pow of 2\n");
	scanf("%d",&n);
	res=pow_2(n);
	if(n==1)
		printf("%d is power of 2\n",n);
	else
		printf("%d not power of 2\n",n);
}

int pow_2(int n)
{
	if(n & (n-1))
		return 1;
	else
		return 0;
}
