#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* ptr;

};
typedef struct node Node;
Node *top,*temp ,*head;
void push(int num);
void pop();
void display();

void main()
{
    int choice=1,option;

    while(choice){
        printf("\n\t\t1: Push an element to the stack\n\t\t2: Pop from the stack\n\t\t3: Display all elements\n\t\t4: Exit\n");
        printf("Enter your choice : \t");
        scanf("%d",&option);
        switch(option)
        {
            case 1: {
                int no;
                printf("\nEnter a value :\t");
                scanf("%d",&no);
                push(no);
            }break;
            case 2: pop();
             break;
            case 3: display();
             break;
            case 4: exit(0);
        }
        printf("\nTo exit press 0 or continue press any integer\n");
        scanf("%d",&choice);
    }
}
void push(int num)
{
        if (top == NULL)
    {
        top =(Node *)malloc(sizeof(Node));
        if(top == NULL){
            printf("\nError!overflow\n");
            exit(0);
        }
        top->ptr = NULL;
        top->data = num;
    }
    else
    {
        temp =(Node *)malloc(sizeof(Node));
        if(temp == NULL){
            printf("\nError!overflow\n");
            exit(0);
        }
        temp->ptr = top;
        temp->data = num;
        top = temp;
    }
}
void pop()
{
    head = top;
    if(head == NULL){
        printf("Stack is Underflow\n");
        exit(0);
    }else{
        head=head->ptr;
        printf("\nThe popped value is %d\n",top->data);
        free(top);
        top=head;
    }
}
void display()
{
    head = top;
    if(head == NULL){
        printf("\nStack is empty\n");
    }
    while(head != NULL){
        printf("\n\t[%d]",head->data);
        head=head->ptr;
    }
}
