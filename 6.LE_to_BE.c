/*wap to convert little endian to big endian*/

#include<stdio.h>
int LE_to_BE(int n);
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	n=LE_to_BE(n);
	printf("after conversion: %d\n",n);
}

int LE_to_BE(int n)
{
	n=((n & 0xFF000000)>>24 | (n & 0x000000FF)<<24 | (n & 0x00FF0000)>>8 | (        n & 0x0000FF00)<<8);
	return n;
}


