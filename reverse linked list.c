#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int length();
void append();
void display();
void reverse();
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
void main()
{
	int i,l;
	clrscr();
	for(i=0;i<5;i++)
	{
		append();
	}
	printf("linked list have %d nodes\n",length());
	printf("linked list data are as following :-\n");
	display();
	reverse();
	printf("reverse of data of nodes as follows\n");
	display();
	getch();
}
void append()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;
		while (p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	  }
}
int length()
{
	struct node *temp=root;
	int i=0;
	while(temp!=NULL)
	{
		temp=temp->link;
		i++;
	}
	return i;
}
void display()
{
	struct node * temp;
	temp=root;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
void reverse()
{
       struct	node *prev=NULL;
	struct node *curr=root;
	struct node *next=root->link;
	while(curr!=NULL)
	{
		curr->link=prev;
		prev=curr;
		curr=next;
		if(curr!=NULL)
		next=curr->link;
	}
	root=prev;
}
