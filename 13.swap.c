/* wap to swap */

#include<stdio.h>
int swap(int a,int b)
{
   a=a^b;
   b=a^b;
   a=a^b;
   printf("after swap : a=%d  b=%d\n",a,b);
}

int main()
{
	int a,b;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	printf("orginal numbers: a=%d  b=%d\n",a,b);
	swap(a,b);

}


