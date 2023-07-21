#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
int main()
{
    int option;
    while(1)
    {
        printf("\n\n*****SINGLY LINKED LIST*****\n\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.count\n");
        printf("4.exit\n");
        printf("enter option(1,2,3,4):");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            count();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;

}
void create()
{
    int n,i,count=0;
    printf("enter array size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void display()
{
    printf("elements are:\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;

    }
}
void count()
{
    printf("count:\n");
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("%d",count);

}





