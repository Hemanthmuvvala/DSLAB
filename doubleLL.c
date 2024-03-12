#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *pre;
};
void create_node(struct node**head,int d)
{
struct node *temp=(struct node*)malloc(sizeof(struct node*));
temp->data=d;
temp->pre=NULL;
temp->next=NULL;
*head=temp;
return;
}
int main(){
struct node *head;
head=(struct node*)malloc(sizeof(struct node*));

create_node(&head,72);
printf("%d",head->data);
}
