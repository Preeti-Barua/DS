#include<stdio.h>
#include<stdlib.h>
void main()
{
	push(7);
	push(5);
	push(6);
	push(2);

	pop();
	display();
	
}

struct node
{
	int data;
	struct node * link;
	
};

struct node *top=0;
 push(int a)
{
	struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=a;
	newnode->link=top;
	top=newnode;		
}

 display()
{
	   struct node *temp;
	   temp=top;
	   if(top==0)
	   {
	   	printf("list is empty");
	   }
	   else{
	   
	   while(temp!=0)
	   {
	   	printf("%d\n",temp->data);
	   	temp=temp->link;
	   }
}
}
 pop()
{
	 
	  struct node *temp;
	  temp=top;
	  
	   if(top==0)
	   {
	   	printf("stakc is empty");
	   	
	   }
	   else
	   {
	   	printf("%d",top->data);
	   	top=top->link;
	   }
}

 peek()
{
	   if(top==0)
	   {
	   	printf("stack is empty");
	   	
	   }
	   else
	   {
	   	printf("top element is%d", top->data);
	   }
}


