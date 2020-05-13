#include<stdio.h>

#include<stdlib.h>
	void main()
{

 
 struct node{
 	int data;
 	struct node *prev;
 	struct node *next;
 	
 };
 struct node * head ,*newnode,*temp;
 
 
 	head=0;
 
 	int choice=1;
 	while(choice)
 	{
 		newnode=(struct node*)malloc(sizeof(struct node));
 		printf("enter the data");
 		scanf("%d",&newnode->data);
 		newnode->prev=0;
 		newnode->next=0;
 		if(head==0)
 		{
 			head=temp=newnode;
		 }
		 else
		 {
		 	temp->next=newnode;
		 	newnode->prev=temp;
		 	temp=newnode;
		 }
		 printf("Do you want to add other elements(0,1)::");
		 scanf("%d",&choice);
		 
	}
	int ch=1;
	while(ch)
	{
	
	printf("do you want to insert any node???");
	scanf("%d",&ch);
	
 struct node{
 	int data;
 	struct node *prev;
 	struct node *next;
 	
 };
 struct node * head ,*newnode,*tail;
 
 
 	head=0;
 
 	int ch=1;
 	while(ch)
 	{
 		newnode=(struct node*)malloc(sizeof(struct node));
 		printf("enter the data");
 		scanf("%d",&newnode->data);
 		newnode->prev=0;
 		newnode->next=0;
 		if(head==0)
 		{
 			head=tail=newnode;
		 }
		 else
		 {
		 	tail->next=newnode;
		 	newnode->prev=tail;
		 	tail=newnode;
		 }
	}
}
	
	


		
		temp=head;
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
		
	}


		 
 		
	 
 
