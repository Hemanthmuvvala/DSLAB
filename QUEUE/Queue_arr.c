//implementing queues using arrays
#include<stdio.h>
#include<stdlib.h>
#define max 100
int queue[max];				//declaring globally front and rear.
int front=-1,rear=-1;		
int isFull()
{
		if(rear==max-1)
			return 1;
		else
			return 0;
}
int isEmpty()
{
	if(front==-1)
		return 1;
	else
		return 0;
}
//inserting using rear
void enqueue()
{	
	int data;
	printf("ENTER THE ELEMENT U WANT TO INSERT:");
	scanf("%d",&data);
	if(isFull())
		{
		
			printf("THE  QUEUE IS OVERFLOW");
			return ;
		}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
			queue[front]=data;
		
	}
	else
	{
		rear++;
		queue[rear]=data;
		
	}
}
//removing from rear
int dequeue()
{	int t;
	if(isEmpty()){
	
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
//display using  rear
void show()
{	int i;
	if(front==-1)
	{
	
		printf("THERE ARE NO  ELEMENTS IN THE QUEUE");
		return ;
	}
	printf("THE ELEMENTS IN THE LIST:");
		for(i=front;i<=rear;i++)
		printf("%d  ",queue[i]);	
		printf("\n");
}
int main()
{	
	int c,t;
	while(1)
	{
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.display\n");
		printf("4.To Quit\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				enqueue();
				break;
			case 2:
				t=dequeue();
				break;
			case 3:
				show();
				break;
			case 4:
				printf("THANKS NAMASTHE");
				exit(1);
				break;
			default :
				printf("INVALID OPTION");
				break;
			
		}
			
	}
		
}
