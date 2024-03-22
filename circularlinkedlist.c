#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node*next;
};
void create_node(struct node **tail,int d)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node *));
temp->data=d;
temp->next=temp;
(*tail)=temp;
return ;
}
void show(struct node *tail)
{
struct node *ptr=tail->next;
printf("\nTHE ELEMENTS IN THE LIST:");
do
{
printf("%d  ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);

}
struct node *insert_at_beg(struct node *tail, int d)
{
     struct node *temp;
		struct node *ptr=tail->next;
		temp=(struct node *)malloc(sizeof(struct node*));
		temp->data=d;
		temp->next=NULL;
	            
			
			temp->next=ptr;
			tail->next=temp;
}
struct node *insert_at_end(struct node *tail, int d)
{
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node*));
		temp->data=d;
		temp->next=NULL;
				
			
				temp->next=tail->next;
				tail->next=temp;
				tail=temp;
				return tail;
}
struct node *insert_at_pos(struct node *tail,int pos,int d)
{
		struct node *temp;
		struct node *ptr=tail->next;
		temp=(struct node *)malloc(sizeof(struct node*));
		temp->data=d;
		temp->next=NULL;
			if(tail==NULL)
			printf("there are no elements in the list");
			if(pos==1)
			{insert_at_beg(tail,d);}
			else
			{
					pos--;
					while(pos!=1)
						{
						ptr=ptr->next;
						pos--;
						}
					if(ptr==tail)
					insert_at_end(tail,d);
					else
					{
					temp->next=ptr->next;
					ptr->next=temp;
					}
			}
			return tail;
}
struct node *del_at_beg(struct node *tail)
{
struct node *ptr=tail->next;
struct node *ptr1;
ptr1=ptr->next;
tail->next=ptr1;
free(ptr);
ptr=NULL;
return tail;

}
struct node *del_at_end(struct node *tail)
{
struct node *ptr;







}
int main()
{
struct node *tail;
create_node(&tail,10);
show(tail);
tail=insert_at_beg(tail,5);
show(tail);
tail=insert_at_end(tail,20);
show(tail);
tail=insert_at_pos(tail,1,3);
show(tail);
tail=del_at_beg(tail);
show(tail);

}





















