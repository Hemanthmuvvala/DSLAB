#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int  count(struct node *head)
{
 int count=0;
    if(head==NULL)
    {return 0;}

 struct node *ptr=head;
    while(ptr!=NULL)
    {
    count++;
    ptr=ptr->next;
    }
        return count;

}
void show(struct node *head)
{
if(head==NULL)
{
    printf("there are no elements in the list:\n");
    
    return;
}
printf("The elements in the list are:");
struct node *temp=head;
while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
struct node *insert_at_begining(struct node *head,int n)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node *));
        newnode->data=n;
                    newnode->next=NULL;
                    newnode->next=head;
         head=newnode;
        return head;

}
void insert_at_end(struct node *head,int n)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node *));
    //printf("enter the element u want to insert at end");
    newnode->data=n;
    newnode->next=NULL;
    struct node *temp;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
void insert_at_pos(struct node*head,int pos,int n )
{
    struct node *node=(struct node*)malloc(sizeof(struct node*));
    struct node *ptr=head;
    node->data=n;
    node->next=NULL;
    pos--;
    while(pos!=1)
    {
        ptr=ptr->next;
        pos--;
    }
    node->next=ptr->next;
    ptr->next=node;

}
struct  node *delete_at_beg(struct node *head)
{
   
if(head==NULL){
printf("the list is empty");}
else{
struct node *temp=head;
temp=head;
head=head->next;
free(temp);}
return head;
}
struct node *delete_at_end(struct node *head)
{
struct node *temp,*prenode;
temp=head;
while(temp->next!=NULL)
{
        prenode=temp;
        temp=temp->next;

}
prenode->next=NULL;
free(temp);
return head;
}
struct node *del_at_pos(struct node *head,int pos)
{
    struct node*prenode,*temp;
    temp=head;
    prenode=head;
    if(head==NULL)
    printf("the are no elements in the list");
    for(int i=1;i<=pos;i++)
    {   if(pos==1)
           { head=head->next;
            free(temp);}
       else {
             if(i==pos&&temp)
         {
          prenode->next=temp->next;
         free(temp);
          }
             else
             {
                 prenode=temp;
                   if(prenode==NULL)
              break;
               temp=temp->next;
             }
         }
    }


return head;

}
void searchnode(struct node*head,int key)
{
    struct node *temp=head;
    int pos=0;
    if(head==NULL)
    {printf("there are no elements in the list");}
    
    while(temp!=NULL)
    {
    if(temp->data==key)
    pos++;
    temp=temp->next;
    }  
 if(pos>0)
 printf("the element is found at %d",pos);
 else {
       printf("the key is not found");
    }
return;
}
int main()
{int size;
    struct node *head=NULL;
    struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node *));
     newnode->data=10;
     newnode->next=NULL;
    head=newnode;
       newnode=(struct node*)malloc(sizeof(struct node *));
    newnode->data=20;
    newnode->next=NULL;
    head->next=newnode;
      newnode=(struct node*)malloc(sizeof(struct node *));
    newnode->data=30;
    newnode->next=NULL;
    head->next->next=newnode;
    show(head);
    head=insert_at_begining(head,50);
    show(head);
      size=count(head);
    printf("\nthe no of nodes in the list=%d",size);
   count(head);
    insert_at_end(head,70);
    show(head);
    size=count(head);
    printf("\nthe no of nodes in the list=%d",size);
    insert_at_pos(head,3,93);
    show(head);
     searchnode(head,93);
     show(head);
    head=delete_at_beg(head);
    show(head);
    head=delete_at_end(head);
    show(head);

    head=del_at_pos(head,3);
    show(head);
}
//insert at position
