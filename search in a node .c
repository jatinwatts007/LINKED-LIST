#include<stdio.h>
##include<conio.h>
#include<stdlib.h>
int length();
void append();
void display();
void search();
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
	l=length();
	display();
	search();
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
void search()
{
	int a;
	struct node *temp;
	temp=root;
	printf("enter data to see whether its is present in nodes or not\ndata=");
	scanf("%d",&a);
	while(temp!=NULL)
	{
		if(temp->data==a)
		{
			printf("this data is present in nodes");
			getch();
			exit(1);
		}
		temp=temp->link;
	}
	printf("this data is not present in nodes");
}
