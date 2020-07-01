#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node* next;
};
struct node *head,*start,*temp,*p;
void create(int n);
void display();
int main()
{
    int n;
    printf("How many times want to continue:");
    scanf("%d",&n);
    create(n);
    printf("The values are:");
    display();
    return 0;
}

void create(int n)
{
    int i=1;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of %d:",i);
    scanf("%d",&head->value);

    head->next=NULL;
    temp=head;

    for(i=2;i<=n;i++)
    {
        start=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of %d:",i);
        scanf("%d",&start->value);

        start->next=NULL;
        temp->next=start;
        temp=start;
    }
}

void display()
{
    p=head;
    printf("[HEAD]->");
    while(p!=NULL)
    {
        printf("[%d]->",p->value);
        p=p->next;
    }
    printf("[NULL]\n");
}