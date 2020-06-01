#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	create(5);
	create(6);
	create(8);
	create(3);
	create(1);
	
	display();
}
struct node{
	int data;
	struct node *prev;
	struct node *next;
	
};
struct node *head,*newnode,*temp=NULL
void create()
{	head=NULL;
	int item;
	newnode=(struct node *)malloc(sizeof(structnode));
	printf("enter the data");
	scanf("%d",&item);
	newnode->next=NULL;
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
	temp=head;
	while(temp!=NULL)
	{
		printf("%d", temp->data);
		temp=temp->next;
		
	}
}
	
	
	


