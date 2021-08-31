/* wap to implement string concatination */

#include<stdio.h>
#include<string.h>

char *strgcat(char *dest,const char *src,size_t n)
{
	char *p=dest;
	int i=0;
	for(i=0;*(dest+i)!='\0';i++)
	{
		dest++;
	}

	while(n && src)
	{
		*dest++ = *src++;
		n--;
	}
	dest='\0';
       return p;
}

int main()
{
	char s1[30],s2[30];
	int n;
	printf("enter the string\n");
	fgets(s1,30,stdin);
	printf("enter the string2\n");
	fgets(s2,30,stdin);
	printf("enter number of elements to concatinate\n");
	scanf("%d",&n);
	strgcat(s1,s2,strlen(s2)+1);
	printf("after concatination %s",s1);
}

