#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *right;
struct node *left;
};
struct node *create_node(struct node *root,int d)
{		int d;
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node *));
		temp->left=NULL;
		temp->data=d;
		temp->right=NULL;
return temp;
}
struct node *insert(struct node* root,int d)
{
	if(root==NULL)
	{
	root=create_node();
	}
	else 
	{
		if(d<=root->data)
		{
			root->left=insert(root->left,d);
		}
		else
		{
			root->right=insert(root->right,d);
		}

	}
	return root;
}
struct node *inorder()
{










}






























