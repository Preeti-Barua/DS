#include<stdio.h>
#include<stdlib.h>
void push();
void pop();

void display();

struct node
{
	int v;
	struct node * next;
	
};
struct node *head;

void main()
{
	int choice=0;
	printf("-----------stack operation list------------\n");
	while(choice!=3)
	{
		printf("1.push \n 2.pop \n 3. display the items\n");
		printf("enter any choice::\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
		
		case 1:
			{
				push();
				break;
			}
		case 2:
			{
				pop();
				break;
			}
		case 3:
			{
				display();
				break;
	
			}
		default:
			{
				printf("enter the correct choice......");
			}
	};
}
}
void push()
{
	int v;
	struct node *ptr;
	ptr=(struct node *) malloc (sizeof(struct node));
	if(ptr==NULL)
	{
		printf("not able to push the element");
	}
	else
	{
	
	printf("enter the data::");
	scanf("%d",&v);
	if(head==NULL)
	{
		ptr->v=v;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		ptr->v=v;
		ptr->next=head;
		head=ptr;
	}
	printf("item pushed");
	

}
}
void pop()
{
	int item;
	struct node *ptr;

	if(head==NULL)
	{
		printf("underflow");
	}
	else
	{
		item=head->v;
		ptr=head;
		head=head->next;
		free(ptr);
		printf("item popped");
		
	}
	
}

void display()
{
	struct node *ptr;
	ptr=head;
	
	if(ptr==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
	printf("printing stack elements::\n");
	while(ptr!=NULL)
	{
		printf("%d",ptr->v);
		ptr=ptr->next;
	}
}

}

