/* wap to implement string copy */
#include<stdio.h>
char *strcopy(char *dest,const char *src,size_t n)
{
	while(n && src)
	{
		*dest++ = *src++;
		n--;
	}
	return dest;
}

int main()
{
	char src[30],dest[30];
	int n;
	printf("enter the string\n");
	fgets(src,30,stdin);
	printf("enter the number of bits to copy\n");
	scanf("%d",&n);
	strcopy(dest,src,n);
	printf("after copying : %s",dest);
}
	
