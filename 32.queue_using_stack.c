#include<stdio.h>
#include<stdlib.h>
#define N 10


int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;

void push1(int data)
{
	if(top1==N-1)
	{
		printf("overflow\n");
	}
	else
	{
		top1++;
		s1[top1]=data;
	}
}
void push2(int data)
{
	if(top2==N-1)
	{
		printf("overflow\n");
	}
	else
	{
		top2++;
		s2[top2]=data;
	}
}

int pop1()
{
	return s1[top1--];
}

int pop2()
{
	return s2[top2--];
}
void enqueue()
{
	int x;
	printf("enter the data to push\n");
	scanf("%d",&x);
	push1(x);
	count++;
}

void dequeue()
{
	int i,a,b;
	if(top1==-1 && top2==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
	for(i=0;i<count;i++)
	{
		a=pop1();
		push2(a);
	}
	b=pop2();
	printf("the dequeued element: %d\n",b);
	count--;
	for(i=0;i<count;i++)
	{
		a=pop2();
		push1(a);
	}
	}
}

void display()
{
	int i;
	for(i=0;i<=top1;i++)
	{
		printf("%d",s1[i]);
	}
}



void main()
{
	int choice;
	while(1)
	{
	printf("enter the choice\n");
	printf("1.enqueue\n2.dequeue\n3.display\n4.EXIT\n");
         scanf("%d",&choice);
	switch(choice)
	{
	  case 1:enqueue();
		 break;
	  case 2:dequeue();
		 break;
	  case 3:display();
		 break;
	  case 4:exit(0);
		 break;
	}
	}
}
