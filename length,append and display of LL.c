#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int length();
void append();
void display();
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
	append();
	display();
	l=length();
	printf("linked list have %d nodes\n",l);
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
		temp->link=root;
		root=temp;
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
