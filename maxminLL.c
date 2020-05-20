#include<stdio.h>
#include<conio.h>

struct node {
	int data;
	struct node * next;
	
};
struct node * head,*temp,*newnode=NULL;
void enterdata(int data)
{
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=data;
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
int minimum()
{
	int min;
	struct node* neww=head;
	if(head==NULL)
	{
	
		printf("the list is empty");
	}
	else
	{
		min=head->data;
		while(neww!=NULL)
		{
			if(min>neww->data)
			{
				min=neww->data;
			}
			neww=neww->next;
		}
	
	}
	return min;

}

int maximum()
{
	int max;
	struct node* neww=head;
	if(head==NULL)
	{
	
		printf("the list is empty");
	}
	else
	{
		max=head->data;
		while(neww!=NULL)
		{
			if(max<neww->data)
			{
				max=neww->data;
			}
			neww=neww->next;
		}
	
	}
	return max;

}

void main()
{
	{
	enterdata(4);
	enterdata(2);
	enterdata(3);
	enterdata(5);
	enterdata(1);
	enterdata(7);
	

	printf("\n");
	
	printf("the minimum::: %d\n", minimum() );
	printf("the maximum::: %d", maximum() );

	
}
}
