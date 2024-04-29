#include<stdio.h>   //M H V N PAVAN KUMAR.
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;
void create_node()
	{int d;
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE ELEMENT");
	scanf("%d",&d);
	temp->data=d;
	temp->next=NULL;
	front=temp;
}
void insert_front()
{
	struct node*temp;
	int d;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE ELEMENT:");
	scanf("%d",&d);
	temp->data=d;
	temp->next=NULL;
	if(front==NULL)
		front=rear=temp;
	else
		{
	
		temp->next=front;
		front=temp;
		}
}
void insert_rear()
{
	struct node*temp;
	int d;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE ELEMENT:");
	scanf("%d",&d);
	temp->data=d;
	temp->next=NULL;
	if(front==NULL)
	front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
		
	}	
}
void del_front()
{	struct node *temp=front;
	if(front==NULL)
	printf("THERE ARE NO ELEMNTS TO DELETE");
	else if(front==rear)
	{
	
			free(front);
			front=NULL;
		}	
	else
	{
		front=front->next;
		free(temp);		
		
	}
}

void show()
{
	struct node *ptr=front;
	if(front==NULL){
    	printf("THERE ARE NO ELEMENTS IN THE LIST\n");
    	return ;
		}
        printf("THE ELEMENTS IN THE LIST ARE:");
		while(ptr!=NULL)
		{
			printf("%d  ",ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
}
struct node *del_rear()
{	struct node *temp,*prenode;
	temp=front;
	if(front==NULL){
    	printf("THERE ARE NO ELEMENTS IN THE LIST\n");
    	return ;
		}
	else if(front==rear)
	{free(rear);
	rear=NULL;
	}
	
	
	else{
	
				while(temp->next!=NULL)
			{
       				 prenode=temp;
       				 temp=temp->next;

			}
				prenode->next=NULL;
				rear=prenode;
				rear->next=NULL;
				free(temp);
				return front;
			}
}
int main()
{
	
		int c,t;
	while(1)
	{
		printf("1.insert front\n");
		printf("2.insert rear\n");
		printf("3.delete at front\n");
		printf("4.delete at rear\n");
		printf("5.To display elements\n");
		printf("6.To Quit\n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insert_front();
				break;
			case 2:
				insert_rear();
				break;
			case 3:
				del_front();
				break;
			case 4:
				front=del_rear();
				break;
			case 5:
				show();
				break;
			case 6:
				printf("THANKS NAMASTHE.");
				exit(1);
				break;
			default :
				printf("INVALID OPTION");
				break;
			
		}
			
	}
		


	
	
	
}
