#include<stdio.h>
#include<stdlib.h>
#define max 100
int front=-1,rear=-1;
int queue[max];
void insert_rear()
{	int data;
	printf("ENTER THE ELEMENT:");
	scanf("%d",&data);
	if(rear==max-1)
	printf("QUEUE IS OVERFLOWN");
	if(front==-1)
	{
		front++;
	rear++;
	queue[rear]=data;
	}
	else
		{
			rear++;
			queue[rear]=data;
		}
	
}
void del_rear()
{
	if(rear==-1)
	printf("THE QUEUE IS EMPTY");
	else if(front==rear)
	{
	
			printf("THE DELETED ELEMENT IS=%d",queue[rear]);
			front=rear=-1;
	}
	else
	{
		printf("THE DELETED ELEMENT IS=%d",queue[rear]);
		rear--;
		
	}
	
	
}
int del_front()
{	int t;
	if(front==-1){
	
		printf("THE QUEUE IS EMPTY");
		return ;
	}
	else if(front==rear)
	{
		front=rear=-1;	
		
	}
	else
	{
		t=front;	
		front++;
		return t;
		
	}

		
}
void insert_front()
{	
	int data;
	printf("ENTER THE ELEMENT TO  INSERT AT FRONT:");
	scanf("%d",&data);
	if(front==0)
	printf("THE QUEUE IS FULL AT FRONT");
	else if(front==-1)
	{	 
		front++;
		queue[front]=data;
		}	
	else
	{
		front--;
		queue[front]=data;
		
	}
	return ;
	
	
}
void show()
{	int i;
	if(front==-1)
	
	printf("THERE ARE NO ELEMENTS IN THE QUEUE");
	else
	{
	for(i=front;i<=rear;i++)
	printf("%d  ",queue[i]);		
	}
		printf("\n");
}

int main()
{
	
	int c,t;
	while(1)
	{
		printf("1.insert front\n");
		printf("2.insert rear\n");
		printf("3.delete at rear\n");
		printf("4.delete at front\n");
		printf("5.To display elements");
		printf("6.To Quit\n");
		printf("ENTER YOUR CHOICE\n");
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
				del_rear();
				break;
			case 4:
				t=del_front();
				break;
			case 5:
				show();
				break;
			case 6:
				printf("THANKS NAMASTHE");
				exit(1);
				break;
			default :
				printf("INVALID OPTION");
				break;
			
		}
			
	}
		


	
	
	
}
