#include<stdio.h>
#include<conio.h>
#define N 5 
//circular queue implementation in arrays!!!!!!!

void enqueue();
void dequeue();
void display();
int queue[N];
int front=-1,rear=-1;
void main()
{
	int choice;
	printf("-------------------the stack operation are-----------------\n\n\n");
	while(choice!=4)
	{
		printf("1. enqueue \n 2.dequeue \n 3. dislay \n \n\n\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				enqueue();
				break;
			}
			case 2:{
				dequeue();
				break;
			}
			case 3:{
				display();
				break;
			}
			default:{
				printf("enter the correct choice.\n");
				break;
			}
		};
	}
	
}
void enqueue()
{
	int item;
	 printf("enter the element to insert::");
	                 
	                    
	scanf("%d",&item);
	if(front==-1 && rear==-1)
	{
		
		front=rear=0;
	                   queue[rear]=item;
	                    printf("###item inserted successfully!!!\n\n\n");
	                    
	                    
	}
	else if((rear+1)%N==front){
		printf("the queue is empty..");
		
		
	}
	else
	{
		rear=((rear+1)%N);
		queue[rear]=item;
	
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("****the queue is empty****");
	}
	 else if(rear==front)
	{
		printf(" => %d is dequeue element",queue[front]);        /*we can write rear also in the subscript becoz the  rear &
					 front are same,both will give the desired output,
					  but the deletion can only occur from front.. */ 
		rear=front=-1;
	}
	else
	{
		printf(" =>the dequeue element is %d",queue[front]);
		front=((front+1)%N);             //incrementation of front
	}
}

void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("the queueis empty");
	}
	else{
		printf("the element if the circular queue is::");
		while(i!=rear)
		{
			printf("%d ",queue[i]);
			i=((i+1)%N);
		}
		printf("%d",queue[rear]);
			}
}
