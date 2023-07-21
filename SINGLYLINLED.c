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
        printf("4.insertfront \n");
        printf("5.insertend \n");
        printf("6.insertmiddle\n");
        printf("7.exit \n");
        printf("enter option(1,2,3,4,5'6,7):");
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
            insertfront();
            break;
        case 5:
            insertend();
            break;
        case 6:
            insertmiddle();
            break;
        case 7:
            exit(0);
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
void insertfront()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter data to insert at front:");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}
void insertend()
{

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter data to insert at end:");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void middle()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter data to insert at middle:");
    scanf("%d",&newnode->data);
    temp=head;
    for(int j=1; j<pos; j++)
    {
        if(temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;


}




