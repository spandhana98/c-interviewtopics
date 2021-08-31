#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *front=NULL;
node *rear=NULL;

void enqueue()
{

	node *new=(node *)malloc(sizeof(node));
	
        printf("enter the element to push\n");
	scanf("%d",&new->data);
	
	new->next=NULL;
	if(front== NULL && rear==NULL)
	{
		front=new;
		rear=new;;
	}
	else
	{
		rear->next=new;
		rear=new;
	}
}

void display()
{
	node *temp;
	if(front==NULL && rear==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=front;
		while(temp)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void dequeue()
{
	node *temp;
	temp=front;
	if(front==0 && rear ==0)
	{
		printf("list is empty\n");
	}
	else
	{
		printf("dequeuesd element is %d",front->data);
		front=front->next;
		free(temp);
	}
}

void peek()
{
	if(front ==0 && rear==0)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("%d\t\n",front->data);
	}
}

void main()
{
	int choice;
	while(1)
	{
		printf("enter the choice\n");
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	enqueue();
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

