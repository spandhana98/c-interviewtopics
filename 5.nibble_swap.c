/* wap to nibble swap */

#include<stdio.h>
int nibble_swap(int n);
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	n=nibble_swap(n);
	printf("after nibble swap : %d",n);
}

int nibble_swap(int n)
{
	n=((n & 0xf0)>>4)|((n & 0x0f)<<4);
	return n;
}
