#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int length();
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
void main()
{
	clrscr();
	root=(struct node*)malloc(sizeof (struct node));
	printf("enter data in nodes\n");
	while(root!=NULL)
	{
		root=root->link;
		scanf("%d",&root->data);
	}

   int i;
   i= length();
   printf("length of nodes is %d",i);
   getch();
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
