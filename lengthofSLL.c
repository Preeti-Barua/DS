#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * link;
};

struct node *head,*temp=NULL;
void create(int data)
{
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=NULL;
	if(head==NULL)
	{
	
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->link=newnode;
		temp=newnode;
	}

} 
void display()
{
	struct node *c=head;
		printf("nodes of single linked list:::\n");
	if(head==NULL)
	{
		printf("the list is emptyy\n");
		return ;
	}

		while(c!=NULL)
		{
			printf("%d  ",c->data);
			c=c->link;
		}
		printf("\n\n\n\n");
		
	
}
int length()
{
	struct node *l =head;
	int len=0;
	if(head==NULL)
	{
		printf("the list is empty");
			}
	while(l!=NULL)
	{
	        len++;
	        l=l->link;
	        	
	}
	return len;
}

void main()
{
	create(10);
	create(5);
	create(23);
	create(12);
	create(56);
	create(8);
	
	display();
	
	printf("the length is:%d" ,length() );
}
