#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* head1=NULL;
struct node* head2=NULL;

struct node *create(int x)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->link=NULL;
    return new;
}
/*
void insert_beg(struct node* head,int x)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->link=head;
    head=new;
    return head;
}*/

void insert_end(struct node* head,int x)
{
    struct node *new,*ptr;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        new->link=head;
        head=new;

        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=new;
        new->link=NULL;
    }
}

void display(struct node* head)
{
    struct node *ptr;
	if(ptr == NULL)
	{
		printf("\nList is empty");
		return;
	}
	ptr=head;
	printf("\nList is :\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr= ptr->link;
	}
	printf("\n");
}

void main()
{
    int arr[]={1,2,3,4,5};
    head1=create()
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            insert_end(head2,arr[i]);
        }
        else
        {
            insert_end(head1,arr[i]);
        }
    }
    display(head1);
    display(head2);

}
