/* Implement single linked list */

#include<stdio.h>
#include<stdlib.h>

/* create structure */

typedef struct node
{
	int data;
	struct node *next;
}node;

node *head,*tail;

/*create node */

void create()
{
	node *new=NULL;
	int choice=1;
	while(choice)
	{
		new=(node *)malloc(sizeof(node));
		printf("enter the data into new node\n");
		scanf("%d",&new->data);
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else
		{
			tail->next=new;
		        tail=new;
		}
		
		printf("enter the choice if u wanna continue 0/1\n");
		scanf("%d",&choice);
	}

}

void display()
{
	node *temp=head;
	while(temp)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

/* insert element at begining */

void insert_at_beg()
{
	node *new=(node *)malloc(sizeof(node));
	printf("enter the data\n");
	scanf("%d",&new->data);
	new->next=head;
	head=new;
}

void insert_at_middle()
{
	node *new=(node *)malloc(sizeof(node));
	printf("enter the data\n");
	scanf("%d",&new->data);
	node *p=head;
	node *q=head;
	while(q && q->next)
	{
		p=p->next;
		q=q->next->next;
	}

	new->next=p->next;
	p->next=new;
}

void insert_at_end()
{
	node *temp=head;
	node *new=(node *)malloc(sizeof(node));
	printf("enter the data\n");
	scanf("%d",&new->data);
	new->next=NULL;	
	while(temp->next)
		temp=temp->next;
	temp->next=new;
	//tail->next=new;
	//tail=new;
}

void delete_at_beg()
{
	node* temp=head;
        head=head->next;
	temp->next=NULL;
	free(temp);
}

void delete_at_end()
{
	node*temp=head;
	while(temp->next->next)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	free(temp->next);
}

void delete_at_middle()
{
	node *p=head;
	node *q=head;
	node *prev;
       while(q && q->next)
       {
	  prev=p;
          p=p->next;
          q=q->next->next;
       }
              
       prev->next=p->next;
       p->next=NULL;
}

node *reverse(node *list)
{
	node *revhead;
	if(list == NULL || list->next ==NULL)
	{
		return list;
	}
	revhead=reverse(list->next);
	list->next->next=list;
	list->next=NULL;
	return revhead;
    
}
	


int main()
{
	int n;
	while(1)
	{
	printf("enter the choice\n");
	printf("-------\n 1.create\n2.display\n3.insert at beginning\n4.insert at middle\n5.Insert at end\n6.delete at beg\n7.delete at end\n8.delete at middle\n9.reverse\n10.exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: create();
			break;
		case 2: display();
			break;
		case 3: insert_at_beg();
			break;
		case 4: insert_at_middle();
			break;
		case 5: insert_at_end();
			break;
		case 6:delete_at_beg();
		       break;
		case 7:delete_at_end();
		       break;
		case 8:delete_at_middle();
		       break;
		case 9:head=reverse(head);
		  
		       break;
		case 10: exit(0);
			break;
	}
	}
}

