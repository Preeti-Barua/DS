#include<stdio.h>
#include<conio.h>

#define N 5
void insert();
void deletes ();
void display();
int front=-1, rear=-1;
int queue[N];
void main()
{
	int choice;
	while(choice!=4)
	printf("1. insert data in queue.\n"
	       "2. delete data from queue. \n"
	         "3. display data of queue. \n"	);
	printf("enter the choice::");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:{ insert();
			break;
		}
		case 2:{deletes();
			break;
		}
		case 3:{display();
			break;
		}
		default:{
			printf("enter within the choice::");
			break;
		}
	};
	
}
void insert()
{
	int item;
	printf("enter the data");
	scanf("%d",&item);
	if(rear==N-1)
	{
		printF("OVERFLOW");
	}
	else if(rear==-1 && front ==-1)
	{
		rear=front=0;
	//	queue[rear]=item;
	}
	else
	{
		rear++;
	//	queue[rear]=item;
	}
	queue[rear]=item;
	printf("value inserted\n");
}
void deletes()
{
	if(front==-1 && rear==-1)
	{
		printf("queue is empty");
	}
	else if(rear==front)
	{
		rear=front=-1;
	}
	else
	{
		printf("%d",queue[front]);
		front++;	
	}
}
void display()
{
	int i;
	if( rear==-1)

	{
		printf("empty queue");
	}
	else{
	
	printf("printing values \n");
	for(i=front;i<rear;i++)
	{
		printf("%d",queue[i]);
	}
}
}



