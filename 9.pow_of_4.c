/* wap to check whether number is power of 4*/

#include<stdio.h>
int pow_4(int n);
int main()
{
	int n,res;
	printf("enter the number \n");
	scanf("%d",&n);
	res=pow_4(n);
	if(res==1)
		printf("%d is power of 4\n",n);
	else
		printf("%d is not power of 4\n",n);
}

int pow_4(int n)
{
        int count=0,flag=0;
	if((n & (n-1))==0) 
	{
	 while((n &1)==0)
	 {
	   count=count+1;
	   n=n>>1;
	  }
      if((count % 2)==0)
	       return 1;
       else
	       return 0;
	}
	else
      return 0;
	      
}


	   

