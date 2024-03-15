#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *pre;
};
void create_node(struct node **head,int d)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=d;
    temp->pre=NULL;
    temp->next=NULL;
    *head=temp;
    return;
}
void show(struct node *head)
{
    if(head==NULL)
    {
        printf("there are no elements in the list:\n");

        return;
    }
    printf("\nThe elements in the list are:");
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int count_of_nodes(struct node *head) {
    int count=0;
    if(head==NULL)
    {
        return 0;
    }

    struct node *ptr = head;
    while(ptr!=NULL) {
        count++;
        ptr=ptr->next;
    }
    return count;
}
struct node *insert_at_beg(struct node *head,int d)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->pre=NULL;
    temp->data=d;
    temp->next=NULL;
    temp->next=head;
    head->pre=temp;
    head=temp;
    return head;
}
struct node* insert_at_end(struct node *head, int d)
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->pre=NULL;
    temp->data=d;
    temp->next=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->pre=ptr;
    return head;
}
void insert_at_pos(struct node *head,int pos,int d)
{
  int size=count_of_nodes(head);
    struct node *temp,*ptr=head;
    struct node *ptr2=NULL;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->pre=NULL;
    temp->data=d;
    temp->next=NULL;
     if(head==NULL)
     printf("there are no elements in the list");
    if(pos<1||pos>size+1)
    printf("invalid position to insert");
    else
    {
   		 pos--;
    	while(pos!=1)
   	  {
         ptr=ptr->next;
         pos--;
   	  }
   	    if(ptr->next==NULL)
		 { insert_at_end(head,d);
        
    	 }
   	  else 
   	  {
			ptr2=ptr->next;
       
        	ptr->next=temp;
       		 ptr2->pre=temp;
        	temp->pre=ptr;
        	temp->next=ptr2;
      }
    }
    return;
}

struct node *del_at_beg(struct node *head)
{
    struct node*ptr=head;
    if(head==NULL)
        printf("the list is empty");
    else {
        head=head->next;
        head->pre=NULL;
        free(ptr);
        return head;
    }
}
struct node *del_at_end(struct node*head)
{
    struct node *ptr=head,*ptr1;
    if(head==NULL)
        printf("the list is empty");
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr1=ptr->pre;
        ptr1->next=NULL;
        free(ptr);

    }
    return head;
}
struct node *del_at_pos(struct node *head,int pos)
{

	int size=count_of_nodes(head);
	
    struct node*ptr=head;
    
    struct node*ptr1,*ptr2;
    if(head==NULL)
    printf("THERE ARE NO ELEMENTS IN THE LIST TO DELETE");
    if(pos<1||pos>size+1)
    printf("this is invalid position to delete");
    else
	 {
   		 pos--;
   		 while(pos!=0)
   		 {
   		     ptr=ptr->next;
     	   pos--;
    	 }
  
   	   if(ptr->next==NULL)
     	   del_at_end(head);
     	 
      else
   		 {

        	ptr1=ptr->pre;
        	ptr2=ptr->next;
        	ptr1->next=ptr2;
        	ptr2->pre=ptr1;
        	free(ptr);
    	}
 	}
 	
   return head;
   
}

int main()
{
    struct node *head=NULL;
    int size;
    head=(struct node*)malloc(sizeof(struct node*));
    create_node(&head,24);
    printf("%d",head->data);
    head=insert_at_beg(head,45);
    show(head);
    head=insert_at_end(head,99);
    show(head);
    size=count_of_nodes(head);
    printf("the no of nodes=%d",size);
    insert_at_pos(head,3,93);
    show(head);
    
    head=del_at_beg(head);
    show(head);
    head=del_at_end(head);
    show(head);
    size=count_of_nodes(head);
    printf("the no of nodes=%d",size);
    head=del_at_pos(head,4);
    show(head);
 }
 
 
 
 
                                              
 
 
    
   

