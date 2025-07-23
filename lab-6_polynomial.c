#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coef;
	int expo;
	struct node *next;
};
struct node *start=NULL,*temp,*p,*start1=NULL,*start2=NULL,*start3=NULL,*start4=NULL,*start5=NULL;
struct node * polynomial(struct node *s)
{
	int n,i;
	printf("enter no of nodes: ");
	scanf("%d",&n);
	 
	for(i=1;i<=n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("NODE-%d:\n",i);
		printf("enter the coefficient: ");
		scanf("%d",&temp->coef);
		printf("enter the exponent: ");
		scanf("%d",&temp->expo);
		temp->next=NULL;
		if(s==NULL || temp->expo>s->expo)
		{
			temp->next=s;
			s=temp;
		}
		else
		{
			p=s;
			while(p->next!=NULL && temp->expo<p->next->expo)
			{
				p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
		}
	}
	return s;	
}
void display(struct node *s)
{
	p=s;
	while(p!=NULL)
	{
		printf("%dx^%d +",p->coef,p->expo);
		p=p->next;
	}
	printf("\n");
}
struct node * polyAddition(struct node *s1,struct node *s2)
{
	struct node *p1,*p2,*p3;
	p1=s1;
	p2=s2;
	if(p1==NULL && p2==NULL)
	{
		printf("addition is not possible\n");
		return start3;
		
	}
	else
	{
		while(p1!=NULL && p2!=NULL)
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->next=NULL;
			if(start3==NULL)
			{
				start3=temp;
				p3=temp;
			}
			else
			{
				p3->next=temp;
				p3=temp;
			}
			if(p1->expo==p2->expo)
			{
				temp->expo=p1->expo;
				temp->coef=p1->coef+p2->coef;
				p1=p1->next;
				p2=p2->next;
			}
			else if(p1->expo>p2->expo)
			{
				temp->expo=p1->expo;
				temp->coef=p1->coef;
				p1=p1->next;
			}
			else
			{
				temp->expo=p2->expo;
				temp->coef=p2->coef;
				p2=p2->next;
			}
			
		}
		while(p1!=NULL)
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->next=NULL;
			if(start3==NULL)
			{
				start3=temp;
				p3=temp;
			}
			else
			{
				p3->next=temp;
				p3=temp;
			}
			temp->coef=p1->coef;
			temp->expo=p1->expo;
			p1=p1->next;
		}
		while(p2!=NULL)
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->next=NULL;
			if(start3==NULL)
			{
				start3=temp;
				p3=temp;
			}
			else
			{
				p3->next=temp;
				p3=temp;
			}
			temp->coef=p2->coef;
			temp->expo=p2->expo;
			p2=p2->next;
		}
	}
	return start3;
}

void main()
{	int choice,choose;
choice=1;
while(choice){

	printf("1)creation of polynomial\n  2)addition of polynomial\n");
	printf("enter operation \n");
	scanf("%d",&choose);
	switch(choose){
	
	case 1:	start1=polynomial(start1);
			display(start1); 
			break;
	
  	case 2:	start4=polynomial(start4);start5=polynomial(start5);
	  start3=polyAddition(start4,start5);
			p=start3;
			display(start3);
			break;
}
printf("do u want to perform another operation \n");
scanf("%d",&choose);
}
}