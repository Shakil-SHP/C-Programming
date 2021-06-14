#include<stdio.h>
#include<stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist *next;
    struct linkedlist *prv;
};
typedef struct linkedlist node;
int main()
{
    node *first,*head,*temp=0,*previous=0;
    int option=1;
    first=0;
    while(option)
    {
        head=(node*)malloc(sizeof(node));
        printf("we get memory address: %d\n",head);
        printf("Enter the number: ");
        scanf("%d",&head->data);
        if(first!=0)
        {
            temp->next=head;
            head->prv=temp;
            temp=head;
        }
        else
        {
            temp=first=head;
        }
        fflush(stdin);
        printf("Press 1 to continue or press 0 to stop:  ");
        scanf("%d",&option);
    }
    temp->next=NULL;
    temp=first;
    while(temp != NULL)
    {
        printf("[%d]  [%d][%d]",temp,previous,temp->data);
        temp=temp->next;
        if(temp != NULL)
            previous=temp->prv;
    }
    printf("[NULL]\n");
}
