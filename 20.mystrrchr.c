/* strrchr ----> returns last occurance */

#include<stdio.h>

char *mystrrchr(char *s,char ch)
{
	char *isfound=NULL;

	if(s!=NULL)
	{
		do
		{
			if(*s == ch)
			{
				isfound=s;
			}
		}
		while(*s++);
	}
	return isfound;
}
int main()
{
	char s[30],ch;
	char *res;
  printf("enter the string\n");
  fgets(s,30,stdin);
  printf("enter the charecter to search\n");
  scanf("%c",&ch);
  res=mystrrchr(s,ch);
  if(res!=NULL)
 printf("%s", res);
  else
	  printf("not found\n");
}

