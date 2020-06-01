#include<stdio.h>

#include<stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
	
};
struct node *head,*temp=NULL;
 void create(int data)
{	
	
	
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
//	printf("enter data:");
//	scanf("%d", &newnode->data);
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
		
	}
}
void display()
{
	struct node *c=head;
	if(head==NULL)
	{
		printf("the list is empty..........");
		return ;
	}
	printf("the nodes of the DLL is::::\n");
	while(c!=NULL)
	{
		printf("%d    ", c->data);
		printf("\n");
		c=c->next;
		
	}
}
void count()
{
	//checking the length of DLL is even or odd without counting!!
	
	struct node *h=head;
	while(1)
	{
		if(h==NULL)
		{
			printf(" the length is even");
			break;
		}
		if(h->next==NULL)
		{
			printf("the length is odd");
			break;
		}
		h=h->next->next;
	}

}
int main()
{
 
 
 	create(5);
	create(6);
	create(8);
	create(3);
	create(1);
	display();
	count();	

	  
	
	
	

}
	
	
	


