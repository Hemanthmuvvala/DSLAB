//implementing queues using linkedlist and dequeing from the front
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
	printf("ENTER THE ELEMENT U WANT TO INSERT:");
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
void dequeue()
{   struct node *ptr=front;
    if(front==NULL)
   {
	 printf("THE LIST IS EMPTY NO ELEMNTS TO DEQUEUE");
    return ;}
    if(front->next==NULL)
    free(ptr);
    else
    {
        front=front->next;
        free(ptr);


    }
    return ;
}
void show()
{
	struct node *ptr=front;
	if(front==NULL){
    	printf("THERE ARE NO ELEMENTS IN THE LIST");}
        printf("THE ELEMENTS IN THE LIST ARE:");
		while(ptr!=NULL)
		{
			printf("%d  ",ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
}
int main()
{   int c;
    enqueue();
    enqueue();
    dequeue();
    show();
        while(1)
    {

        printf("1.press 1 for enqueue\n");
        printf("2.press 2 for dequeue\n");
        printf("3.press 3 to display elements\n");
        printf("4.press 4 to exit\n");
        printf("ENTER YOUR CHOICE\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(1);
            break;
            default:
            printf("invalid choice\n reenter ");
            break;

        }


    }

}
