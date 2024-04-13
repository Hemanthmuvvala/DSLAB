//implementing stacks with  arrays
#include<stdio.h>
#include<stdlib.h>
#define max 20
int arr[max];
int top=-1;
int isFull()
{
	if(top==max-1)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void push() //push function is to insert an element in stack
{
	int data;
	printf("enter the  data you want to insert:");
	scanf("%d",&data);
	if(isFull())
	{printf("stack overflow or stack is full");
	return ;
	}
		top++;
 		arr[top]=data;
 	
	
}
//To delete the element of the stack
int pop()
{
if(isEmpty())
printf("stack underflow or stack is empty");
else
{
	int a;
	a=arr[top];
	top--;
	return a;
	
}
	
}
//To display the elememts of the stack
void show()
{
	if(top==-1)
	{printf("stack underflow");
	return ;
	}
	printf("THE ELEMENTS IN THE STACK ARE:\n");
	for( int i=top;i>=0;i--)
	{printf("%d\n",arr[i]);
	}
	
}

int main()
{
	int ch;
	int temp,data;
    push();
    push();
    push();
    push();
    show();
    temp=pop();
    show();	
    
    
while(1){

    printf("\n");
    printf("1.To push an element\n");
    printf("2.To pop an element\n");
    printf("3.To display elements\n");
    printf("4.Quit\n");
    printf("enter  your choice:\n");
    scanf("%d",&ch);
	
	
	switch(ch)
	{
	case 1:
		push();
	    break;
	case 2:
		temp=pop();
		printf("The deleted element=%d",data);
		break;
	case 3:
		show();
		break;
	case 4:
		exit(1);
	default :
	printf("invalid choice.");
	printf("Enter a valid choice");
	break;	
			
		
	}
}
	return 0;
	
}











