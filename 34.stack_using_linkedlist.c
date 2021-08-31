#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *top=NULL;
void push()
{

	node *new=(node *)malloc(sizeof(node));
	
        printf("enter the element to push\n");
	scanf("%d",&new->data);
	
	new->next=top;

	top=new;
}

void display()
{
	node *temp;
	if(top==0)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=top;
		while(temp)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void pop()
{
	node *temp;
	temp=top;
	if(top ==0)
	{
		printf("list is empty\n");
	}
	else
	{
		printf("popped element is %d",top->data);
		top=top->next;
		free(temp);
	}
}

void peek()
{
	if(top==0)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("%d\t\n",top->data);
		
	}
}

void main()
{
	int choice;
	while(1)
	{
		printf("enter the choice\n");
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	push();
				break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			       break;
		}
	}
}


