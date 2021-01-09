#include<stdio.h>
#include<stdlib.h>

struct node
{
	    int data;
	    struct node * next;
};
struct node * head,* newnode,* temp=NULL;

insert(int x)
{

newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
	        if(head==NULL)
	        {
	        	head=newnode;
	        	temp=newnode;
			}
			else
			{
				temp->next=newnode;
				temp=newnode;
			}
}


insertatbeg()
{
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
		printf("enter element at the beg");
	scanf("%d", &newnode->data);
	newnode->next =head;
	head=newnode;

}

display()
{
	struct node*c=head;
	if(head==NULL)
	{
		printf("list is empty");
	}
	
	      while(c!=NULL)
	      {
	      	printf("%d\n",c->data);
	      	c=c->next;
		  }
}
int main()
{
	
	insert(2);
	insert(4);
	insert(5);
	display();

	insertatbeg();
	display();
	
}
