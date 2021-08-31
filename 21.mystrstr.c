#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],sub[100];
	int i,j,a,b;
	printf("enter the string\n");
        fgets(str,100,stdin);
	printf("enter the sub string\n");
	fgets(sub,100,stdin);
	a=strlen(str);
	b=strlen(sub);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(str[i+j]!=sub[j])
			{
			  break;
			}
		}
		if(j==b)
		printf("present at %d\n",i+1);
	}
	
}
