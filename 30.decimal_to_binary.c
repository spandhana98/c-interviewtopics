#include<stdio.h>

int decimal_to_binary(int n)
{
        if(n==0)
        {
                return 0;
        }
        else if(n>0)
	{
               

	        return (n%2)+10*(decimal_to_binary(n/2));
	}


}

int main()
{
        int n,i;
        printf("enter the number\n");
        scanf("%d",&n);
        int res=decimal_to_binary(n);
	if(n>0)
	{
        printf("the binary equivalent  is  %d\n",res);
	}

}

