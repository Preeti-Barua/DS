#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * link;
};
struct node *head ,*newnode=NULL;

void create(int data)
{
	struct node * temp;
	newnode=(struct node *)malloc(sizeof(struct node));
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


void sort()
{
	struct node *current=head, *index=NULL;
	int temp;
	
	if(head==NULL)
	{
		return  ;
		
		
	}
	else{
		while(current!=NULL)
		{
			index=current->link;
		
		while(index!=NULL)
		{
			if(current->data>index->data)
			{
				temp=current->data;
				current->data=index->data;
				index->data=temp;
			}
			index=index->link;
		}
	}
		current=current->link;
	}
}

void display()
{
	struct node * temp=head;
	if(head==NULL)
	{
		printf("the list is empty..");
		return ;
	}

	while(temp!=NULL)
	{
		printf("%d   ",temp->data);
		temp=temp->link;
	}
	
}

void main()
{
	create(4);
	create(3);
	create(6);
	create(1);
	create(7);
	create(9);
	printf("the original is::");
	display();
	
	
	sort(); 	//sorted list
	printf("the sorted list::\n");
	
	
	display();    //displaying sorted list
	}
