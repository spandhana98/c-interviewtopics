#include<stdio.h>
int mystrcmp(char *str1,char *str2)
{
	while(*str1==*str2)
	{
		if(*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int main()
{
	char s1[30],s2[30];
	int n;
	printf("enter the string 1\n");
	fgets(s1,30,stdin);
	printf("enter the string 2\n");
	fgets(s2,30,stdin);

	n=mystrcmp(s1,s2);
	if(n==0)
		printf("equal");
	else if(n<0)
		printf("s1 is less\n");
	else
		printf("s2 is less\n");
}

