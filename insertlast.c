#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node *link;

 };
 struct node *head,*temp =NULL;
  create(int data)
  {
  	struct node * newnode;
  
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
  
  display()
  {
  	struct node *c=head;
  	if(head==NULL)
  	{
  		printf("the list is empty");
	  }
	  else
	{
		while(c!=NULL)
		{
			printf("%d    ",c->data);
			c=c->link;
		}
		printf("\n");
	}
  }
  void main()
  {
  	create(4);
  	display();
  	create(5);
  	display();
  	create(2);
  		display();
  	create(8);
  		display();
  	
  
	  
	  
	  }
