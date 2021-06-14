#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*new_node,*temp;
int choice=1;
void create();
void display();

void main()
{
    create();
    display();
}

void create()
{
    head=0;
    while(choice)
    {
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("You get a memory : %d \n",new_node);
    printf("Enter your data :\t");
    scanf("%d",&new_node->data);
    new_node->prev = 0;
    new_node->next = 0;

    if(head == 0)
    {
        head=temp=new_node;
    }
    else
    {
        temp->next=new_node;
        new_node->prev=temp;
        temp=new_node;
    }
    printf("If you want to exit press 0 or continue press any integer:\t");
    scanf("%d",&choice);
    }
}

void display()
{
    temp = head;
    while(temp!=0)
    {
        printf("[%d] \t [%d] [%d]", temp,temp->prev,temp->data);
        temp= temp->next;
    }
    printf("[NULL]");
}
