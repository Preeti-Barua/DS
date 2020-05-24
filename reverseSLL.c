#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *head ,*newnode=NULL;

void create(int data)
{
	struct node * temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->link=newnode;
		temp=newnode;
	}
}
	

void reverse(struct node *current) {  
    //Checks if list is empty  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    else{  
        //Checks if the next node is null, if yes then prints it.  
        if(current->link == NULL) {  
            printf("%d ", current->data);  
            return;  
        }  
        //Recursively calls the reverse function  
        reverse(current->link);  
        printf("%d ", current->data);  
    }  
}  
  



  void main()
  {
  	create(3);
  	create(4);
  	create(5);
  	create(6);
  
  			

	reverse(head);
  				
  	
	  }	
