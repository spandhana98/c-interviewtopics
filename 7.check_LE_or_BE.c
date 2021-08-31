#include<stdio.h>
int main()
{
	int x=0x01;
	if((char)x & 1)
		printf("little endean\n");
	else
		printf("big endian\n");
}

