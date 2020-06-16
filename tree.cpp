#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
 struct Node{
	int data;
	struct node *right;
	struct node *left;
};
 Node *create(int item)
{

	Node* node= new Node;
	node->data=item;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void inorder(struct Node *root)
{
	if(root==NULL){
		return ;
	}
	inorder(root->left);
	cout<< root->data<<" ";
	inorder(root->right);
}
 Node *insertion(struct Node *root,int item)


{
	if(root==NULL)
	{
		return create(item);
	}
	if(item< root->data)
	{
		root->left=insertion(root->left,item);
		
	}
	else
	{
		root->right=insertion(root->right,item);
	}
	return root;
	
	
}
int main()
{
	struct node *root;
	root=0;
	int i;
	int arr[10];
	for( i=0;i<8;i++)
	{           
	      cout<<"enter value to be inserted:";
	       cin>>arr[i];
	       root =insertion(root,arr[i]);
	       
	
	
	}
	inorder(root);
	cout<<"\n";	
}
