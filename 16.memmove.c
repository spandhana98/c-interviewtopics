/*wap to implement memmove */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void *memove(void *dest,const void *src,size_t n)
{
	char *pdest=(char*)dest;
	char *psrc=(char *)src;
	char *temp=(char *)malloc(sizeof((char *)n));
	if(temp==NULL)
	{
		return NULL;
	}
	else
	{
		int i=0;
		for(i=0;i<n;i++)
		{
			*temp++ = *psrc++;
			n--;
		}
		while(n)
		{
			*pdest++ = *temp++;
			n--;
		}
           
		
	}
	return dest;
	free(temp);
}

int main()
{
	char src[30],dest[30];
	printf("enter the string\n");
	fgets(src,30,stdin);
	memove(src+6,src,strlen(src)+1);
	printf("%s",src);
}

