/*strchr----> returns first occurance of charecter*/


#include<stdio.h>

char *mystrchr(char *s,char ch)
{
	while(*s!=ch && *s!='\0')
	{
		s++;
	}
		if(*s == ch)
                 return s;
		else
		 return NULL;
}

int main()
{
	char s[30],ch;
	printf("enter the string\n");
	fgets(s,30,stdin);
	printf("enter the charecter to search\n");
	scanf("%c",&ch);
	printf("%s",mystrchr(s,ch));
}
	


