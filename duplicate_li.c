#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*p,*temp,*index;
struct node *creation(struct node*);
void display();
void duplicate();
int main()
{
	do
	{
	int choose;
	printf("\n1.creation\n2.display\n3.to remove duplicates\n0.exit\n");
	printf("enter ur choice : ");
	scanf("%d",&choose);
	printf("\n")
	switch(choose){
		case 1:
			creation(temp);
			break;
		case 2:
			display();
			break;
		case 3:
			duplicate();
			break;
		case 0:
			exit(1);
			break;
		default : 
			printf("invalid choice\n");
			break;
	}
	}while(1);
}
struct node *creation(struct node *temp){
	temp=(struct node *)malloc(sizeof(struct node));
	int x;
	printf("\nenter the data to insert : ");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		p=temp;
	}
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
void display()
{
	if(start==NULL){
		printf("LL is empty\n");
	}
	else{
		p=start;
		while(p!=NULL){
			printf("%d",p->data);
			p=p->next;
		}
	}
	printf("\n\n");
}
void duplicate()
{
	if(start==NULL)
	{
		printf("LL is empty\n");
		return;
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			temp=p;
			index=p->next;
			while(index!=NULL)
			{
				if(p->data==index->data)
				{
					temp->next=index->next;
				}
				else
				{
					temp=index;
				}
				index=index->next;
			}
			p=p->next;
		}
	}
}
