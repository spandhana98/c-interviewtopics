/* wap to check whether number is negative */

#include<stdio.h>
int check_neg(int n)
{
  //if( (n &(1<<31))==1)
  if(n < 0)
	  printf("number is negative\n");
  else
	  printf("number is not negative\n");
}

int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	check_neg(n);
	n=-(~n);             //add 1 to given number
	printf("%d",n);
}
