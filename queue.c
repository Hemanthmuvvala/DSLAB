#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
struct node *front=NULL,*rear=NULL;
void enqueue()
{
	int data;
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE ELEMENT U WANT TO INSERT");
	scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		if(front==NULL&&rear==NULL)
			front=rear=newnode;
		else
		rear->next=newnode;
		rear=newnode;

return ;
}
void show()
{
	struct node *ptr=front;
	if(front==NULL)
	printf("THERE ARE NO ELEMENTS IN THE LIST");
		while(ptr!=NULL)
		{
			printf("THE ELEMENTS IN THE LIST ARE=%d\n",ptr->data);
			ptr=ptr->next;
		}
}
int main()
{

show();



}
