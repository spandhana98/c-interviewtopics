/*wap to check even or odd */

#include<stdio.h>
int check_even_odd(int n)
{
	if((n &1)==0)
		printf("%d : even\n",n);
	else
		printf("%d : odd\n",n);
}
int main()
{
	int n;
	printf("enter the number\n");;
	scanf("%d",&n);
	check_even_odd(n);
}
