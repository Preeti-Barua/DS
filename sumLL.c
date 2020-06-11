#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* link;
	
}node;
int main()
{	
	int N,i,a;
	node *newnode,*temp,*q,*head;

	printf("enter the N");
	scanf("%d",&N);
	printf("enter the elements in linked list..");
	newnode=(node *)malloc(sizeof(node));
	scanf("%d",&a);
	newnode->data=a;
	newnode->link=NULL;
	head=newnode;
	for(i=1;i<N;i++){
		
		q=(node *)malloc(sizeof(node));
		scanf("%d",&a);
		q->data=a;
		q->link=NULL;
		newnode->link=q;
		newnode=newnode->link;
		}
		
		//calculating the  sum !
		temp=head;
	                     int sum=0;
	                     while(temp!=NULL)
	                     {
	                     	sum=sum+temp->data;
	                     	temp=temp->link;
		 }
		 printf("the sum is::%d",sum);
				
	
	
	
	
	
}
