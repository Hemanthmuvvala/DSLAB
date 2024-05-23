//inserting elements by using data structure trees.
//M H V N PAVAN KUMAR.
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *right;
struct node *left;
};
struct node *create_node(struct node *root,int d)
{
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node *));
		temp->left=NULL;
		temp->data=d;
		temp->right=NULL;
return temp;
}
//TO INSERT ELEMENTS IN THE TREE. 
struct node *insert(struct node* root,int d)
{
	if(root==NULL)
	{
	root=create_node(root,d);
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
//TO PRINT THE DATA IN THE ASCENDING ORDER.
 void inorder(struct node *root)
{
	if(root->left!=NULL)
	inorder(root->left);
	printf("%d  ",root->data);
	if(root->right!=NULL)
	inorder(root->right);

}

void postorder(struct node *root)
{
	if(root->left!=NULL)
	postorder(root->left);
	if(root->right!=NULL)
	postorder(root->right);
	printf("%d   ",root->data);
}
void preorder(struct node *root)
{	
	printf("%d  ",root->data);
	if(root->left!=NULL)
	preorder(root->left);
	
	if(root->right!=NULL)
	preorder(root->right);
	
}
int main()
{
struct node*root=NULL;
root=insert(root,20);
root=insert(root,50);
root=insert(root,10);
root=insert(root,70);
root=insert(root,60);
root=insert(root,10);
printf("\nTHE INOORDER DATA:");
inorder(root);
printf("\nTHE POSTORDER DATA:");
postorder(root);
printf("\nTHE PREORDER DATA:");
preorder(root);


}

