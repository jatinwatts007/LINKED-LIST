#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int length();
void append();
void display();
void sort();
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
int main()
{
	int i,l;
	
	for(i=0;i<5;i++)
	{
		append();
	}
	printf("linked list have %d nodes\n",length());
	printf("linked list data are as following :-\n");
	display();
	sort();
	printf("sorted data in increasing order\n");
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
void sort()
{
	int i;
	struct node *temp,*p;
	temp=root;
	while(temp->link!=NULL)
	{
		p=temp->link;
		while(p!=NULL)
		{
			if(temp->data>p->data)
			{
				i=temp->data;
				temp->data=p->data;
				p->data=i;
			}
			p=p->link;
		}
		temp=temp->link;
	}
}
