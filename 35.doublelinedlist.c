#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*tail;

	
//struct node *createlist();
void displaylist();
void reverse();
void create();

void main()
{

	create();
        displaylist();
	printf("\n");
	reverse();
	displaylist();
}

void create()
{

	struct node *new;
	int choice=1;
	while(choice)
	{
		new=(struct node *)malloc(sizeof(struct node));
		printf("enter the data\n");
		scanf("%d",&new->data);
		new->prev=NULL;
		new->next=NULL;
		if(head==NULL)
		{
			head=tail=new;
		}
		else
		{
			tail->next=new;
			new->prev=tail;
			tail=new;
		}
		printf("do you want to continue\n");
		scanf("%d",&choice);
	}

	
}





void displaylist()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

void reverse()
{
	struct node *current,*nextnode;
	current=head;
	while(current != NULL)
	{
	nextnode=current->next;
	current->next=current->prev;
	current->prev=nextnode;
	current=nextnode;
	}

	current=head;
	head=tail;
	tail=current;
	
}
				


