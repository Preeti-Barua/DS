#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node* next;
	};
	struct node *head,*newnode,*temp;
                    head=0;
	int choice=1;
	while (choice)
	{
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
	  head=temp=newnode; }
	else
	{
	   temp->next=newnode;
	   temp=newnode;	
	}
	printf("do you want to continue(0,1)");
	scanf("%d",&choice);
	}
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	int count=0;
	temp=head;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	printf("the length is:%d",count);
	getch();
}

	




	
