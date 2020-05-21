#include<stdio.h>
#include<stdlib.h>
//Represent a node of singly linked list  
struct node{
	int data;
	struct node * link;
};
//Represent the head and tail of the singly linked list

struct node *head,*temp=NULL;
//addNode() will add a new node to the list
void create(int data)
{
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));         //Create a new node  
	newnode->data=data;
	newnode->link=NULL;
	if(head==NULL)                                 //Checks if the list is empty 
	{
	
		head=newnode;
		temp=newnode;             		   //If list is empty, both head and tail will point to new node 
	}
	else
	{
		temp->link=newnode;				      //newNode will be added after tail such that tail's next will point to newNode
		temp=newnode;					  //newNode will become new tail of the list 
	}

} 

   
//display() will display all the nodes present in the list
void display()
{
	struct node *c=head;
	if(head==NULL)
	{
		printf("the list is emptyy\n");
		return ;
	}

		while(c!=NULL)		   //Prints each node by incrementing pointer
		{
			printf("%d  \n",c->data);
			c=c->link;
		}
		printf("\n");
	
	
}

void main()
{
	create(10);		    //Add nodes to the list 
	create(5);
	create(23);
	create(12);
	create(56);
	create(8);
	
	display();		   //Displays the nodes present in the list
}

