#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root =NULL;

struct node* createNode(int data)
{
	struct node *newnode = (struct node*)malloc (sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	
	return newnode;
}
int largest(struct node *temp)
{
	if(root == NULL)
	{
		printf("Tree is empty");
		return 0;
	}
	else{
		int leftMax , rightMax;
		int max= temp->data;
		if(temp->left!= NULL)
		{
			leftMax= largest (temp->left);
			max= (max > leftMax)? max: leftMax;
		}
			if(temp->right!= NULL)
		{
			leftMax= largest (temp->left);
			max= (max > rightMax)? max: rightMax;
		}
		
		return max;
	}
}
	int main()  
{  
    //Add nodes to the binary tree  
    root = createNode(15);  
    root->left = createNode(20);  
    root->right = createNode(35);  
    root->left->left = createNode(74);  
    root->right->left = createNode(55);  
    root->right->right = createNode(6);  
          
    //Display largest node in the binary tree  
    printf("Largest element in the binary tree: %d", largest(root));  
    return 0;
}
