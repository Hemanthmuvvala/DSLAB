#include<stdio.h>
#include<stdlib.h>
struct node {

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
    } while(ptr!=tail->next);

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
    {
        insert_at_beg(tail,d);
    }
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
    printf("the elements after deletion at end");
    ptr1=ptr->next;
    tail->next=ptr1;
    free(ptr);
    ptr=NULL;
    return tail;

}
struct node *del_at_end(struct node *tail)
{
    struct node *ptr=tail->next;
    while(ptr->next!=tail)
    {

        ptr=ptr->next;

    }
    ptr->next=tail->next;
    free(tail);
    tail=ptr;
    return tail;

}
struct node *del_at_pos(struct node *tail,int pos)
{

    if(tail==NULL)
    {
        printf("there are no elemlents in the list");
    }
    else
    {
        struct node *ptr=tail->next;
        struct node *ptr1;
        pos--;
        while(pos>1)
        {
            ptr=ptr->next;
            pos--;
            if(ptr->next==tail->next)
            {
                printf(" this is invalid position to delete");
                return tail;
            }
        }

        ptr1=ptr->next;
        ptr->next=ptr1->next;
        if(ptr1==tail)
            tail=ptr;
        free(ptr1);
    }
    return tail;
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
    tail=insert_at_end(tail,39);
    show(tail);
    tail=insert_at_pos(tail,4,3);
    show(tail);
    tail=del_at_beg(tail);
    show(tail);
    tail=del_at_end(tail);
    show(tail);
    tail=insert_at_end(tail,39);
    show(tail);
    tail=del_at_pos(tail,5);
    show(tail);
}





















