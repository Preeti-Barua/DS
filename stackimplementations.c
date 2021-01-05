#include<stdio.h>
#include<conio.h>

//stack implementation using array
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
	   printf("enter the number of elements in the stack:");
	   scanf("%d",&n);
	   
	   
	   
	   while(choice!=4)
	   {
	   	printf("1. push 2.pop 3.show 4.exit");
	   	printf("enter the number of choice");
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
					show();
					break;
					
				}
			case 4:
				{
					printf("exiting\n");
					break;
				}
				
				default:
					{
					
					printf("\nenter valid choice:");
				}
		   };
	   	
	   }
}
	   
	   void push()
	   {
	   	
	   	 int val;
	   	 if(top==n)
	   	 {
	   	 	printf("the stack if full!!\n");
			}
			else
			{
			
	   	    printf("enter element you want to insert?");
	   	     scanf("%d",&val);
	   	     top=top+1;
	   	     stack[top]=val;
	   }
}
	   
	   
	   void pop()
	   {
	   	if(top==-1)
	   	{
	   		printf("stack underflow");
	   		
		   }
		   else
		   {
		   	top=top-1;
		   }
	   }
	   
	   void show()
	   {
	   	for(i=top;i>0;i--)
	   	{
	   		printf("%d ",stack[i]);
		   }
		   
		   if(top==-1)
		   {
		   	printf("stack is empty");
		   }
	   }
	         

