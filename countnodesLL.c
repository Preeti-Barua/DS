#include<stdio.h>
#include<conio.h>

struct node {
	int data;
	struct node * next;
	
};
struct node * head,*temp,*newnode=NULL;
void enterdata(int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
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
int countnodes()
{
	struct node * counter=head;
		int count=0;

	
	while(counter!=NULL)
	{
		count++;
		counter=counter->next;
	}
	return count;
}

	


void display()
{
	struct node * counter=head;
              if(head==NULL)
              {
              	printf("empty");
              	return ;
              	
	}
	              
	
		while(counter!=NULL)
		{
			printf("%d",counter->data);
			counter=counter->next;
		}
	              	printf("\n");
	 	
}
int main()
{
	enterdata(4);
	enterdata(2);
	enterdata(3);
	enterdata(5);
	enterdata(1);
	enterdata(7);
	
	display();
	printf("\n");
	
	printf("the number of nodes are::: %d", countnodes() );
	return 0;
	
}



