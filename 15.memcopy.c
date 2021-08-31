/* wap to implement memcopy */

#include<stdio.h>
#include<string.h>
void *memcopy(void *dest,const void *src,size_t n)
{
	char *psrc=(char *)src;
	char *pdest=(char *)dest;
	while(n)
	{
		*pdest++ = *psrc++;
		n--;
	}

	return dest;
}

int main()
{
	char src[30],dest[30],idest[30];
	printf("enter the string\n");
	fgets(src,30,stdin);
	memcopy(dest,src,strlen(src)+1);
	printf("after copying %s",dest);

	memcopy(idest,src,5);
	printf("after copying %s",idest);
}

